//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, NSArray, NSObject;
@protocol GIKAuthorization, OS_dispatch_queue;

@protocol GIKAuthorizationService <NSObject>
- (GPCPromise *)requestAccessTokenWithScopes:(NSArray *)arg1 forceRefresh:(_Bool)arg2;
- (void)requestAccessTokenWithScopes:(NSArray *)arg1 forceRefresh:(_Bool)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSString *, NSDate *, NSError *))arg4;
- (id <GIKAuthorization>)authorizationWithScopes:(NSArray *)arg1;
@end

