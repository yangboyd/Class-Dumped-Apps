//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FBMediaUploadQualitySettingsNetworkDispatching <NSObject>
- (void)cancel;
- (void)sendUploadSettingsRequest:(NSDictionary *)arg1 waterfallID:(NSString *)arg2 actorID:(NSString *)arg3 completionBlock:(void (^)(NSDictionary *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
@end

