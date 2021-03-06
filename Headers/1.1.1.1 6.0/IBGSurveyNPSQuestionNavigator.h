//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Instabug/IBGSurveyQuestionNavigator-Protocol.h>

@class IBGSurveyThankYouConfiguration, NSArray;

@interface IBGSurveyNPSQuestionNavigator : NSObject <IBGSurveyQuestionNavigator>
{
    NSArray *_questions;
    IBGSurveyThankYouConfiguration *_promoterConfig;
    IBGSurveyThankYouConfiguration *_passiveConfig;
    IBGSurveyThankYouConfiguration *_detractorConfig;
}

@property(retain, nonatomic) IBGSurveyThankYouConfiguration *detractorConfig; // @synthesize detractorConfig=_detractorConfig;
@property(retain, nonatomic) IBGSurveyThankYouConfiguration *passiveConfig; // @synthesize passiveConfig=_passiveConfig;
@property(retain, nonatomic) IBGSurveyThankYouConfiguration *promoterConfig; // @synthesize promoterConfig=_promoterConfig;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
- (void).cxx_destruct;
- (id)thankYouConfiguration;
- (_Bool)isQuestionOptionalAt:(long long)arg1;
- (unsigned long long)total;
- (id)surveyQuestionForIndex:(long long)arg1;
- (id)initWithQuestions:(id)arg1 promoterConfig:(id)arg2 passiveConfig:(id)arg3 detractorConfig:(id)arg4;
- (id)initWithQuestions:(id)arg1;

@end

