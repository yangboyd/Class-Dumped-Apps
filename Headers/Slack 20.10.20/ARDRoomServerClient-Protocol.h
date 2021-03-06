//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Calls/NSObject-Protocol.h>

@class ARDSignalingMessage, NSString;

@protocol ARDRoomServerClient <NSObject>
- (void)leaveRoomWithRoomId:(NSString *)arg1 clientId:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)sendMessage:(ARDSignalingMessage *)arg1 forRoomId:(NSString *)arg2 clientId:(NSString *)arg3 completionHandler:(void (^)(ARDMessageResponse *, NSError *))arg4;
- (void)joinRoomWithRoomId:(NSString *)arg1 isLoopback:(_Bool)arg2 completionHandler:(void (^)(ARDJoinResponse *, NSError *))arg3;
@end

