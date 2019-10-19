//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPUBMoatBaseTracker.h"

@class MPUBMoatBridge, UIView, UIWebView, WKWebView;
@protocol MPUBMoatBridgeProtocol;

@interface MPUBMoatWebTracker : MPUBMoatBaseTracker
{
    _Bool _stoppedTracking;
    _Bool _cleanedUp;
    UIView *_trackedView;
    UIWebView *_uiWebView;
    WKWebView *_wkWebView;
    MPUBMoatBridge<MPUBMoatBridgeProtocol> *_webBridge;
}

+ (id)trackerWithAdView:(id)arg1 withWebComponent:(id)arg2;
+ (id)trackerWithWebComponent:(id)arg1;
@property _Bool cleanedUp; // @synthesize cleanedUp=_cleanedUp;
@property _Bool stoppedTracking; // @synthesize stoppedTracking=_stoppedTracking;
@property(retain) MPUBMoatBridge<MPUBMoatBridgeProtocol> *webBridge; // @synthesize webBridge=_webBridge;
@property __weak WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property __weak UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property __weak UIView *trackedView; // @synthesize trackedView=_trackedView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanUp;
- (_Bool)installUIWebViewBridge;
- (_Bool)installWKWebViewBridge;
- (_Bool)installBridge;
- (_Bool)setViewToTrack:(id)arg1 withWebComponent:(id)arg2;
- (void)setupTrackerForView:(id)arg1 withWebComponent:(id)arg2 isNative:(_Bool)arg3;
- (id)initWithWebViewComponent:(id)arg1;
- (id)initWithView:(id)arg1 withWebComponent:(id)arg2;
- (void)stopTracking;
- (_Bool)startTracking;

@end

