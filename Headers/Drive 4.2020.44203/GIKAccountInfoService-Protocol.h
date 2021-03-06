//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/NSObject-Protocol.h>

@class NSObject;
@protocol GIKAccountInfo, GIKEventSubscription, OS_dispatch_queue;

@protocol GIKAccountInfoService <NSObject>
- (id <GIKEventSubscription>)subscribeToAccountInfoUpdatesWithTarget:(NSObject *)arg1 selector:(SEL)arg2;
- (id <GIKEventSubscription>)subscribeToAccountInfoUpdatesWithBlock:(void (^)(id <GIKAccountInfo>))arg1;
- (id <GIKAccountInfo>)cachedAccountInfo;
- (void)fetchAccountInfoWithForceRefresh:(_Bool)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(id <GIKAccountInfo>, NSError *))arg3;
- (void)fetchAccountInfoWithCompletion:(void (^)(id <GIKAccountInfo>, NSError *))arg1;
@end

