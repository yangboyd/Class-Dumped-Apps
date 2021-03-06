//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class LDActiveViewVideoMonitor, NSString, YTIThumbnailDetails, YTInstreamAdSingleVideoObserver, YTPlayerCurrentAdsState, YTPlayerResponse;
@protocol YTInstreamAd, YTInstreamAdBreak, YTVideoAdTrackingController;

@protocol YTAdsPlaybackProtocol <NSObject>
@property(readonly, nonatomic) YTInstreamAdSingleVideoObserver *adVideoPlayerObserver;
@property(readonly, nonatomic) YTPlayerCurrentAdsState *lastAdsState;
@property(readonly, nonatomic) YTPlayerCurrentAdsState *currentAdsState;
- (void)adSlotDidComplete;
- (void)adDidTapthroughWithTouchPoint:(struct CGPoint)arg1;
- (void)adDidSkipWithTouchPoint:(struct CGPoint)arg1;
- (void)adDidShowSkip;
- (NSString *)contentVideoTitle;
- (YTIThumbnailDetails *)contentVideoThumbnails;
- (LDActiveViewVideoMonitor *)newActiveViewVideoMonitorWithContentPlayerResponse:(YTPlayerResponse *)arg1;
- (id <YTVideoAdTrackingController>)videoAdTrackingControllerWithAd:(id <YTInstreamAd>)arg1 adBreak:(id <YTInstreamAdBreak>)arg2 activeViewVideoMonitor:(LDActiveViewVideoMonitor *)arg3;
@end

