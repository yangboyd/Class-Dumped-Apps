//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIFormattedString, YTISurveyQuestionCommon;

@interface YTIMultiChoiceQuestionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *additionalInfoText; // @dynamic additionalInfoText;
@property(retain, nonatomic) NSMutableArray *answersArray; // @dynamic answersArray;
@property(readonly, nonatomic) unsigned long long answersArray_Count; // @dynamic answersArray_Count;
@property(nonatomic) _Bool hasAdditionalInfoText; // @dynamic hasAdditionalInfoText;
@property(nonatomic) _Bool hasMaxSelectionsAllowed; // @dynamic hasMaxSelectionsAllowed;
@property(nonatomic) _Bool hasQuestionText; // @dynamic hasQuestionText;
@property(nonatomic) _Bool hasSurveyQuestionCommonData; // @dynamic hasSurveyQuestionCommonData;
@property(nonatomic) unsigned int maxSelectionsAllowed; // @dynamic maxSelectionsAllowed;
@property(retain, nonatomic) YTIFormattedString *questionText; // @dynamic questionText;
@property(retain, nonatomic) YTISurveyQuestionCommon *surveyQuestionCommonData; // @dynamic surveyQuestionCommonData;

@end

