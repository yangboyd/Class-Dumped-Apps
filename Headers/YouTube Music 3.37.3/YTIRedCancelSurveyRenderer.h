//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIButtonSupportedRenderers, YTIFormattedString, YTISingleOptionSurveyCollection;

@interface YTIRedCancelSurveyRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasNextButton; // @dynamic hasNextButton;
@property(nonatomic) _Bool hasQuestion; // @dynamic hasQuestion;
@property(nonatomic) _Bool hasSingleOptions; // @dynamic hasSingleOptions;
@property(nonatomic) _Bool hasSubmissionMode; // @dynamic hasSubmissionMode;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIButtonSupportedRenderers *nextButton; // @dynamic nextButton;
@property(retain, nonatomic) YTIFormattedString *question; // @dynamic question;
@property(retain, nonatomic) YTISingleOptionSurveyCollection *singleOptions; // @dynamic singleOptions;
@property(nonatomic) int submissionMode; // @dynamic submissionMode;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

