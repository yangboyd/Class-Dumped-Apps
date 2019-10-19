//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPRewardedVideoAdManagerDelegate-Protocol.h"
#import "MPRewardedVideoConnectionDelegate-Protocol.h"

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface MPRewardedVideo : NSObject <MPRewardedVideoAdManagerDelegate, MPRewardedVideoConnectionDelegate>
{
    NSMutableDictionary *_rewardedVideoAdManagers;
    NSMutableArray *_rewardedVideoConnections;
    NSMapTable *_delegateTable;
}

+ (id)sharedInstance;
+ (void)presentRewardedVideoAdForAdUnitID:(id)arg1 fromViewController:(id)arg2 withReward:(id)arg3;
+ (void)presentRewardedVideoAdForAdUnitID:(id)arg1 fromViewController:(id)arg2 withReward:(id)arg3 customData:(id)arg4;
+ (id)selectedRewardForAdUnitID:(id)arg1;
+ (id)availableRewardsForAdUnitID:(id)arg1;
+ (_Bool)hasAdAvailableForAdUnitID:(id)arg1;
+ (void)loadRewardedVideoAdWithAdUnitID:(id)arg1 keywords:(id)arg2 userDataKeywords:(id)arg3 location:(id)arg4 customerId:(id)arg5 mediationSettings:(id)arg6;
+ (void)loadRewardedVideoAdWithAdUnitID:(id)arg1 keywords:(id)arg2 userDataKeywords:(id)arg3 location:(id)arg4 mediationSettings:(id)arg5;
+ (void)loadRewardedVideoAdWithAdUnitID:(id)arg1 withMediationSettings:(id)arg2;
+ (void)removeDelegateForAdUnitId:(id)arg1;
+ (void)removeDelegate:(id)arg1;
+ (void)setDelegate:(id)arg1 forAdUnitId:(id)arg2;
@property(retain, nonatomic) NSMapTable *delegateTable; // @synthesize delegateTable=_delegateTable;
@property(retain, nonatomic) NSMutableArray *rewardedVideoConnections; // @synthesize rewardedVideoConnections=_rewardedVideoConnections;
@property(retain, nonatomic) NSMutableDictionary *rewardedVideoAdManagers; // @synthesize rewardedVideoAdManagers=_rewardedVideoAdManagers;
- (void).cxx_destruct;
- (void)rewardedVideoConnectionCompleted:(id)arg1 url:(id)arg2;
- (void)startRewardedVideoConnectionWithUrl:(id)arg1;
- (void)rewardedVideoShouldRewardUserForAdManager:(id)arg1 reward:(id)arg2;
- (void)rewardedVideoWillLeaveApplicationForAdManager:(id)arg1;
- (void)rewardedVideoDidReceiveTapEventForAdManager:(id)arg1;
- (void)rewardedVideoDidDisappearForAdManager:(id)arg1;
- (void)rewardedVideoWillDisappearForAdManager:(id)arg1;
- (void)rewardedVideoDidAppearForAdManager:(id)arg1;
- (void)rewardedVideoWillAppearForAdManager:(id)arg1;
- (void)rewardedVideoDidFailToPlayForAdManager:(id)arg1 error:(id)arg2;
- (void)rewardedVideoDidExpireForAdManager:(id)arg1;
- (void)rewardedVideoDidFailToLoadForAdManager:(id)arg1 error:(id)arg2;
- (void)rewardedVideoDidLoadForAdManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

