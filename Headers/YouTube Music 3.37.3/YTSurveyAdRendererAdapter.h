//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTAdWithVideoAdTracking.h"

@class NSArray, YTAdParameters, YTIMultiChoiceQuestionRenderer, YTIPlayerResponse, YTISurveyAdRenderer;

@interface YTSurveyAdRendererAdapter : YTAdWithVideoAdTracking
{
    YTAdParameters *_adParameters;
    YTIMultiChoiceQuestionRenderer *_multiChoiceRenderer;
    YTISurveyAdRenderer *_surveyAdRenderer;
    NSArray *_requestDates;
    YTIPlayerResponse *_playerResponse;
}

+ (id)multiChoiceRendererWith:(id)arg1;
@property(retain, nonatomic) YTIPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(retain, nonatomic) YTISurveyAdRenderer *surveyAdRenderer; // @synthesize surveyAdRenderer=_surveyAdRenderer;
- (id)requestDates;
- (id)adParameters;
- (void).cxx_destruct;
- (id)surveyTextInterstitialRenderer;
- (id)surveyQuestionDisplayedCommand;
- (id)optionsFromAnswers:(id)arg1;
- (int)surveyQuestionType;
- (id)surveyQuestion;
- (_Bool)isUnderMinSkipDuration:(double)arg1;
- (double)skipOffset;
- (_Bool)isSkippableOnStart;
- (_Bool)isSkippable;
- (_Bool)isPlayable;
- (_Bool)isSurvey;
- (id)initWithVideoAdTracking:(id)arg1;
- (id)initWithSurveyAdRenderer:(id)arg1;

@end

