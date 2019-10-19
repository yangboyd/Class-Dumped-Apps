//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAdVideoEndRenderer, YTIForecastingAdRenderer, YTISurveyAdRenderer, YTIVideoAdRenderer;

@interface YTIAdBreakSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAdVideoEndRenderer *adVideoEndRenderer; // @dynamic adVideoEndRenderer;
@property(retain, nonatomic) YTIForecastingAdRenderer *forecastingAdRenderer; // @dynamic forecastingAdRenderer;
@property(nonatomic) _Bool hasAdVideoEndRenderer; // @dynamic hasAdVideoEndRenderer;
@property(nonatomic) _Bool hasForecastingAdRenderer; // @dynamic hasForecastingAdRenderer;
@property(nonatomic) _Bool hasSurveyAdRenderer; // @dynamic hasSurveyAdRenderer;
@property(nonatomic) _Bool hasVideoAdRenderer; // @dynamic hasVideoAdRenderer;
@property(retain, nonatomic) YTISurveyAdRenderer *surveyAdRenderer; // @dynamic surveyAdRenderer;
@property(retain, nonatomic) YTIVideoAdRenderer *videoAdRenderer; // @dynamic videoAdRenderer;

@end

