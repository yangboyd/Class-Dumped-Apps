//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBasePingController.h>

@class GIMMe, NSMutableArray;
@protocol YTAdsPlaybackCoordinatorDelegate, YTAudioSession, YTIdentityProvider, YTInstreamAd, YTLastActionProvider, YTReachabilityController;

@interface YTDiscoveryAdTrackingController : YTBasePingController
{
    id <YTInstreamAd> _currentAd;
    NSMutableArray *_pings;
    id <YTIdentityProvider> _identityProvider;
    id <YTLastActionProvider> _lastActionProvider;
    id <YTAdsPlaybackCoordinatorDelegate> _delegate;
    id <YTAudioSession> _audioSession;
    id <YTReachabilityController> _reachabilityController;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)sendPingWithTrackingURL:(id)arg1;
- (void)handleMediaStateChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)handleAdProgressWithAccumulatedMediaTime:(double)arg1;
- (id)initWithAd:(id)arg1 trackingURLs:(id)arg2 delegate:(id)arg3;

@end

