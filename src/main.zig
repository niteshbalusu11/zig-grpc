const std = @import("std");
// const c = @cImport({
//     @cInclude("grpcpp/grpcpp.h");
//     // Include generated proto headers
//     @cInclude("generated_cpp/lightning.pb.h");
//     @cInclude("generated_cpp/lightning.grpc.pb.h");
// });

// pub const LndClient = struct {
//     channel: *c.grpc_channel,
//     stub: *c.lnrpc.Lightning.Stub,

//     pub fn init(address: []const u8, macaroon_path: []const u8) !LndClient {
//         // Read macaroon for authentication
//         const macaroon = try std.fs.cwd().readFileAlloc(std.heap.page_allocator, macaroon_path, 1024 * 1024);
//         defer std.heap.page_allocator.free(macaroon);

//         // Create credentials with macaroon
//         const call_creds = c.grpc.CallCredentials.createFromPlugin((struct {
//             fn getMetadata(cb: *c.grpc.AuthMetadataProcessor) void {
//                 _ = cb.pushBack("macaroon", macaroon);
//             }
//         }).getMetadata);

//         // Create channel credentials
//         const channel_creds = c.grpc.SslCredentials(c.grpc.SslCredentialsOptions{});
//         const composite_creds = c.grpc.CompositeChannelCredentials(channel_creds, call_creds);

//         // Create channel and stub
//         const channel = c.grpc.CreateChannel(address, composite_creds);
//         const stub = c.lnrpc.Lightning.NewStub(channel);

//         return LndClient{
//             .channel = channel,
//             .stub = stub,
//         };
//     }

//     pub fn deinit(self: *LndClient) void {
//         self.stub.?.release();
//         self.channel.?.release();
//     }

//     pub fn getInfo(self: *LndClient) !c.lnrpc.GetInfoResponse {
//         var request = c.lnrpc.GetInfoRequest{};
//         var response: c.lnrpc.GetInfoResponse = undefined;
//         var context = c.grpc.ClientContext{};

//         const status = self.stub.?.GetInfo(&context, &request, &response);
//         if (!status.ok()) {
//             return error.GrpcError;
//         }

//         return response;
//     }

//     pub fn listChannels(self: *LndClient) !c.lnrpc.ListChannelsResponse {
//         var request = c.lnrpc.ListChannelsRequest{};
//         var response: c.lnrpc.ListChannelsResponse = undefined;
//         var context = c.grpc.ClientContext{};

//         const status = self.stub.?.ListChannels(&context, &request, &response);
//         if (!status.ok()) {
//             return error.GrpcError;
//         }

//         return response;
//     }
// };

pub fn main() !void {
    std.log.info("hello worked {}", .{});
    // var client = try LndClient.init("localhost:10009", "~/.lnd/data/chain/bitcoin/mainnet/admin.macaroon");
    // defer client.deinit();

    // // Get node info
    // const info = try client.getInfo();
    // std.debug.print("Node pubkey: {s}\n", .{info.identity_pubkey});

    // // List channels
    // const channels = try client.listChannels();
    // for (channels.channels) |channel| {
    //     std.debug.print("Channel: {d} -> {s}\n", .{
    //         channel.chan_id,
    //         channel.remote_pubkey,
    //     });
    // }
}
