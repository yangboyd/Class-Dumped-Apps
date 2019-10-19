//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAdConfiguration, MPTimer, NSURL;
@protocol MPBannerAdapterDelegate;

@interface MPBaseBannerAdapter : NSObject
{
    id <MPBannerAdapterDelegate> _delegate;
    NSURL *_impressionTrackingURL;
    NSURL *_clickTrackingURL;
    MPAdConfiguration *_configuration;
    MPTimer *_timeoutTimer;
}

@property(retain, nonatomic) MPTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) MPAdConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSURL *clickTrackingURL; // @synthesize clickTrackingURL=_clickTrackingURL;
@property(copy, nonatomic) NSURL *impressionTrackingURL; // @synthesize impressionTrackingURL=_impressionTrackingURL;
@property(nonatomic) __weak id <MPBannerAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trackClick;
- (void)trackImpression;
- (void)rotateToOrientation:(long long)arg1;
- (void)timeout;
- (void)startTimeoutTimer;
- (void)didDisplayAd;
- (void)didStopLoading;
- (void)_getAdWithConfiguration:(id)arg1 containerSize:(struct CGSize)arg2;
- (void)getAdWithConfiguration:(id)arg1 containerSize:(struct CGSize)arg2;
- (void)unregisterDelegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

