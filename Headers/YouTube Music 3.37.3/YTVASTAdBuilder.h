//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, YTActiveViewExtension, YTAdFrequencyCaps, YTAdParameters, YTICommand, YTIStreamingData, YTVASTAd;

@interface YTVASTAdBuilder : NSObject
{
    _Bool _fallbackAllowed;
    _Bool _skippable;
    _Bool _annotationsEnabled;
    _Bool _offline;
    NSURL *_streamURL;
    YTIStreamingData *_streamingData;
    YTICommand *_clickthroughEndpoint;
    NSArray *_impressionPings;
    NSArray *_startPingURLs;
    NSArray *_firstQuartilePingURLs;
    NSArray *_midpointPingURLs;
    NSArray *_thirdQuartilePingURLs;
    NSArray *_completePingURLs;
    NSArray *_closePingURLs;
    NSArray *_abandonPingURLs;
    NSArray *_watchTimePingURLs;
    NSArray *_pausePingURLs;
    NSArray *_resumePingURLs;
    NSArray *_mutePingURLs;
    NSArray *_fullscreenPingURLs;
    NSArray *_exitFullscreenPingURLs;
    NSArray *_skipShownPingURLs;
    NSArray *_skipPingURLs;
    NSArray *_progressPings;
    NSArray *_videoTitleClickedPingURLs;
    NSArray *_clickthroughPingURLs;
    NSArray *_conversionPingURLs;
    NSArray *_errorPingURLs;
    NSArray *_instreamAdCompletePingURLs;
    NSURL *_adTagURL;
    NSURL *_VATTURL;
    YTVASTAd *_prefetchedVATTAd;
    NSArray *_adIDs;
    NSArray *_adSystems;
    YTAdFrequencyCaps *_adFrequencyCaps;
    YTVASTAd *_prefetchedAd;
    YTAdParameters *_adParameters;
    NSArray *_infoCards;
    YTActiveViewExtension *_activeViewExtension;
    double _duration;
    NSArray *_requestDates;
}

@property(retain, nonatomic) NSArray *requestDates; // @synthesize requestDates=_requestDates;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) YTActiveViewExtension *activeViewExtension; // @synthesize activeViewExtension=_activeViewExtension;
@property(retain, nonatomic) NSArray *infoCards; // @synthesize infoCards=_infoCards;
@property(retain, nonatomic) YTAdParameters *adParameters; // @synthesize adParameters=_adParameters;
@property(retain, nonatomic) YTVASTAd *prefetchedAd; // @synthesize prefetchedAd=_prefetchedAd;
@property(retain, nonatomic) YTAdFrequencyCaps *adFrequencyCaps; // @synthesize adFrequencyCaps=_adFrequencyCaps;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool annotationsEnabled; // @synthesize annotationsEnabled=_annotationsEnabled;
@property(nonatomic) _Bool skippable; // @synthesize skippable=_skippable;
@property(nonatomic) _Bool fallbackAllowed; // @synthesize fallbackAllowed=_fallbackAllowed;
@property(retain, nonatomic) NSArray *adSystems; // @synthesize adSystems=_adSystems;
@property(retain, nonatomic) NSArray *adIDs; // @synthesize adIDs=_adIDs;
@property(retain, nonatomic) YTVASTAd *prefetchedVATTAd; // @synthesize prefetchedVATTAd=_prefetchedVATTAd;
@property(retain, nonatomic) NSURL *VATTURL; // @synthesize VATTURL=_VATTURL;
@property(retain, nonatomic) NSURL *adTagURL; // @synthesize adTagURL=_adTagURL;
@property(retain, nonatomic) NSArray *instreamAdCompletePingURLs; // @synthesize instreamAdCompletePingURLs=_instreamAdCompletePingURLs;
@property(retain, nonatomic) NSArray *errorPingURLs; // @synthesize errorPingURLs=_errorPingURLs;
@property(retain, nonatomic) NSArray *conversionPingURLs; // @synthesize conversionPingURLs=_conversionPingURLs;
@property(retain, nonatomic) NSArray *clickthroughPingURLs; // @synthesize clickthroughPingURLs=_clickthroughPingURLs;
@property(retain, nonatomic) NSArray *videoTitleClickedPingURLs; // @synthesize videoTitleClickedPingURLs=_videoTitleClickedPingURLs;
@property(retain, nonatomic) NSArray *progressPings; // @synthesize progressPings=_progressPings;
@property(retain, nonatomic) NSArray *skipPingURLs; // @synthesize skipPingURLs=_skipPingURLs;
@property(retain, nonatomic) NSArray *skipShownPingURLs; // @synthesize skipShownPingURLs=_skipShownPingURLs;
@property(retain, nonatomic) NSArray *exitFullscreenPingURLs; // @synthesize exitFullscreenPingURLs=_exitFullscreenPingURLs;
@property(retain, nonatomic) NSArray *fullscreenPingURLs; // @synthesize fullscreenPingURLs=_fullscreenPingURLs;
@property(retain, nonatomic) NSArray *mutePingURLs; // @synthesize mutePingURLs=_mutePingURLs;
@property(retain, nonatomic) NSArray *resumePingURLs; // @synthesize resumePingURLs=_resumePingURLs;
@property(retain, nonatomic) NSArray *pausePingURLs; // @synthesize pausePingURLs=_pausePingURLs;
@property(retain, nonatomic) NSArray *watchTimePingURLs; // @synthesize watchTimePingURLs=_watchTimePingURLs;
@property(retain, nonatomic) NSArray *abandonPingURLs; // @synthesize abandonPingURLs=_abandonPingURLs;
@property(retain, nonatomic) NSArray *closePingURLs; // @synthesize closePingURLs=_closePingURLs;
@property(retain, nonatomic) NSArray *completePingURLs; // @synthesize completePingURLs=_completePingURLs;
@property(retain, nonatomic) NSArray *thirdQuartilePingURLs; // @synthesize thirdQuartilePingURLs=_thirdQuartilePingURLs;
@property(retain, nonatomic) NSArray *midpointPingURLs; // @synthesize midpointPingURLs=_midpointPingURLs;
@property(retain, nonatomic) NSArray *firstQuartilePingURLs; // @synthesize firstQuartilePingURLs=_firstQuartilePingURLs;
@property(retain, nonatomic) NSArray *startPingURLs; // @synthesize startPingURLs=_startPingURLs;
@property(retain, nonatomic) NSArray *impressionPings; // @synthesize impressionPings=_impressionPings;
@property(retain, nonatomic) YTICommand *clickthroughEndpoint; // @synthesize clickthroughEndpoint=_clickthroughEndpoint;
@property(retain, nonatomic) YTIStreamingData *streamingData; // @synthesize streamingData=_streamingData;
@property(retain, nonatomic) NSURL *streamURL; // @synthesize streamURL=_streamURL;
- (void).cxx_destruct;

@end

