//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTISurveyFollowUpDismissButtonSupportedRenderers, YTISurveyFollowUpSurveyButtonSupportedRenderers;

@interface YTISurveyFollowUpRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTISurveyFollowUpDismissButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(retain, nonatomic) YTISurveyFollowUpSurveyButtonSupportedRenderers *followUpButton; // @dynamic followUpButton;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasFollowUpButton; // @dynamic hasFollowUpButton;

@end

