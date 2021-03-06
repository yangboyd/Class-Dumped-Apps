//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIKAccountInfoService-Protocol.h"

@class NSString;
@protocol GIKAccountInfoService, GIPAccountID;

@interface GIKAccountInfoServiceImpl : NSObject <GIKAccountInfoService>
{
    id <GIKAccountInfoService> _internalAccountInfoService;
    id <GIPAccountID> _accountID;
}

- (void).cxx_destruct;
- (id)subscribeToAccountInfoUpdatesWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)subscribeToAccountInfoUpdatesWithBlock:(CDUnknownBlockType)arg1;
- (id)cachedAccountInfo;
- (void)fetchAccountInfoWithForceRefresh:(_Bool)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAccountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 emailAccountInfoService:(id)arg2 gidAccountInfoService:(id)arg3 ssoAccountInfoService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

