{ pkgs, lib, config, inputs, ... }:
let
zigBinary = pkgs.stdenv.mkDerivation {
  name = "zig-0.14.0-dev";
  version = "0.14.0-dev.2077+c39ba682e";
  src = pkgs.fetchurl {
    url = "https://ziglang.org/builds/zig-macos-aarch64-0.14.0-dev.2077+c39ba682e.tar.xz";
    sha256 = "sha256-RfMvuj7kS8XEFQjEQ78WUgkXH4tx9Wdg2Cdg2Ivlz0I=";
  };
  dontBuild = true;
  dontConfigure = true;
  installPhase = ''
    mkdir -p $out
    cp -r * $out/
    mkdir -p $out/bin
    ln -s $out/zig $out/bin/zig
  '';
  meta = with pkgs.lib; {
    description = "Zig programming language";
    homepage = "https://ziglang.org";
    platforms = platforms.darwin;
    license = licenses.mit;
  };
};
  zlsBinary = pkgs.stdenv.mkDerivation {
    name = "zls";
    version = "0.14.0-dev.213+a66692e";
    src = pkgs.fetchurl {
      url = "https://builds.zigtools.org/zls-macos-aarch64-0.14.0-dev.213+a66692e.tar.xz";
      sha256 = "sha256-i3/Vd8GD3wdgtrTd4LRuS4OZJ//zof8PLEdFkZLeCr8=";
    };
    nativeBuildInputs = [ pkgs.xz ];
    dontBuild = true;
    dontConfigure = true;
    unpackPhase = ''
      mkdir -p build
      cd build
      tar xf $src
    '';
    installPhase = ''
      mkdir -p $out/bin
      cp zls $out/bin/
    '';
    meta = with pkgs.lib; {
      description = "Zig Language Server";
      homepage = "https://github.com/zigtools/zls";
      platforms = platforms.darwin;
      license = licenses.mit;
    };
  };
in
{
  env.GREET = "devenv";
  packages = [
    pkgs.git
    zigBinary
    zlsBinary
    pkgs.protobuf
    pkgs.gcc
    pkgs.grpc
  ];
  scripts.hello.exec = ''
    echo hello from $GREET
  '';
  enterShell = ''
    hello
    git --version
    zig version
    zls --version
    protoc --version
  '';
  enterTest = ''
    echo "Running tests"
    git --version | grep --color=auto "${pkgs.git.version}"
  '';
}
