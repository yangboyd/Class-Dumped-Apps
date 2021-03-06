//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTWebViewDelegate-Protocol.h"

@class NSMutableSet, NSString, NSTimer;

@interface GBTWebViewPool : NSObject <GBTWebViewDelegate>
{
    long long _maxWebViewsAssignedDuringInterval;
    NSTimer *_checkSizeTimer;
    long long _targetRetainedWebViewsCount;
    long long _webViewsAssigned;
    NSMutableSet *_webViews;
    NSMutableSet *_resettingWebViews;
    _Bool _replenishingScheduled;
}

+ (id)sharedWebViewPool;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)needMoreWebViews;
- (void)startCheckSizeTimerIfNeeded;
- (void)checkSizeTimerFired:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)replenishWebviewsIfNeeded;
- (void)scheduleReplenishingIfNeeeded;
- (void)delayWebViewReplenishing;
- (id)emptyWebView;
- (long long)applicationState;
- (void)shutdown;
- (void)returnWebView:(id)arg1;
- (id)requestWebView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

