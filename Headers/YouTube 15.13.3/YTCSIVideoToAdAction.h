//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGELLatencyAction.h>

#import "YTAdErrorDelegate-Protocol.h"

@class NSString, YTCSICommonTicksTracker;
@protocol YTIdentityProvider;

@interface YTCSIVideoToAdAction : YTGELLatencyAction <YTAdErrorDelegate>
{
    YTCSICommonTicksTracker *_commonTicksTracker;
    id <YTIdentityProvider> _identityProvider;
    _Bool _adPlayed;
}

@property(readonly, nonatomic) _Bool adPlayed; // @synthesize adPlayed=_adPlayed;
- (void).cxx_destruct;
- (void)startPACFTicks;
- (void)report;
- (void)didScheduleLayout;
- (void)didBuildLayout;
- (void)willStartLayoutPreparation;
- (void)didScheduleSlot;
- (void)didBuildSlot;
- (void)willStartSlotPreparation;
- (void)didReceiveWatchNextResponse;
- (void)willRequestWatchNext;
- (void)playerWillProvideStreamWithPlayerType:(int)arg1;
- (void)didPauseContentVideo;
- (void)willPauseContentVideoToPlayAdVideoID:(id)arg1 adCPN:(id)arg2 visibility:(int)arg3;
- (void)didReceiveAdWithFormat:(id)arg1;
- (void)didReceiveAdVideoInfo;
- (void)willRequestAdVideoInfo;
- (void)didStartAdPlayback;
- (void)didReceiveAdBreakServiceResponse;
- (void)willRequestAdBreakService;
- (void)didStartAdTick;
- (void)didStartWithAdBreakType:(int)arg1 loadType:(id)arg2;
- (id)initWithIdentityProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

