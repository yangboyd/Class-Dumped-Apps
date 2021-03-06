//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGRankingDataLoader-Protocol.h>

@class FBExponentialBackoffTimer, IGDirectNicknameManager, IGRequestPolicy, IGUser, IGUserStore, NSSet, NSString;
@protocol IGAPIClient, IGUserExperimentSetProviding;

@interface IGRankingNetworkDataLoader : NSObject <IGRankingDataLoader>
{
    IGUser *_user;
    NSSet *_rankingViewIdentifiers;
    id <IGAPIClient> _networker;
    id <IGUserExperimentSetProviding> _experimentProvider;
    IGUserStore *_userStore;
    IGDirectNicknameManager *_nicknameManager;
    FBExponentialBackoffTimer *_timer;
    IGRequestPolicy *_policy;
}

- (void).cxx_destruct;
- (void)_handleNetworkRequestFailure:(id)arg1 timer:(id)arg2 retryCount:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_handleResponse:(id)arg1;
- (void)_fetchRankingsWithTimer:(id)arg1 retryCount:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadRankingDataForViewIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithUser:(id)arg1 networker:(id)arg2 experimentProvider:(id)arg3 userStore:(id)arg4 nicknameManager:(id)arg5 requestPolicy:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

