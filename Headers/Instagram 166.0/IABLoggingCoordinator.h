//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSMutableArray, NSString, NSURL;

@interface IABLoggingCoordinator : NSObject
{
    CDUnknownBlockType _eventsHandler;
    NSString *_sessionID;
    NSURL *_initialURL;
    NSURL *_landingPageURL;
    NSURL *_currentPageURL;
    NSURL *_urlMarkingLandingPageFinishedViewing;
    NSDate *_userClickTime;
    NSDate *_webRequestStartedTime;
    NSDate *_browserOpenedTime;
    NSDate *_landingPageLoadedTime;
    NSDate *_landingPageViewingEndedTime;
    long long _landingPageStatusCode;
    NSString *_clickSource;
    _Bool _hasLandingPageOpenedApp;
    _Bool _isRecordingLandingPageURL;
    unsigned long long _userInteractionCount;
    NSURL *_lastYoutubeNavigateURL;
    unsigned long long _youtubeDomainNavigateCount;
    unsigned long long _youtubeWatchNavigateCount;
    unsigned long long _youtubeSearchNavigateCount;
    unsigned long long _youtubeChannelNavigateCount;
    unsigned long long _flags;
    NSDate *_landingPageJSBasedDomContentLoadedTime;
    NSDate *_landingPageLoadingFinishedTime;
    NSDate *_landingPageEstimatedProgressFinishedTime;
    NSDate *_landingPageDidFinishNavigationTime;
    NSDate *_landingPageContentSizeChangedTime;
    NSDate *_browserDidEnterBackgroundTime;
    _Bool _isBrowserOpen;
    NSError *_initialRequestError;
    NSError *_lastRequestError;
    NSURL *_lastRequestErrorURL;
    NSDate *_landingPageDOMContentLoadedTime;
    NSMutableArray *_backgroundTimePairArray;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableArray *backgroundTimePairArray; // @synthesize backgroundTimePairArray=_backgroundTimePairArray;
@property(readonly, copy, nonatomic) NSDate *landingPageDOMContentLoadedTime; // @synthesize landingPageDOMContentLoadedTime=_landingPageDOMContentLoadedTime;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)_landingPageFinishedViewing;
- (void)_youtubeNavigateWithTargetUrl:(id)arg1;
- (void)_sendEvent:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
@property(readonly, nonatomic) _Bool isFinishedViewingLandingPage;
- (void)updateLoggingAction:(id)arg1;
- (id)initWithSessionID:(id)arg1 eventsHandler:(CDUnknownBlockType)arg2;

@end

