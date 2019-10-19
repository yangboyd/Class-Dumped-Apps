//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPViewabilityAdapter-Protocol.h"

@class MPUBMoatWebTracker, NSString, UIView;

@interface MPViewabilityAdapterMoat : NSObject <MPViewabilityAdapter>
{
    _Bool _isTracking;
    _Bool _isVideo;
    MPUBMoatWebTracker *_moatWebTracker;
    UIView *_webView;
}

@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) UIView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) MPUBMoatWebTracker *moatWebTracker; // @synthesize moatWebTracker=_moatWebTracker;
@property(nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
- (void).cxx_destruct;
- (void)registerFriendlyObstructionView:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (id)initWithAdView:(id)arg1 isVideo:(_Bool)arg2 startTrackingImmediately:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

