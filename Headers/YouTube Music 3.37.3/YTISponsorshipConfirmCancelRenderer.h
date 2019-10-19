//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIRenderer;

@interface YTISponsorshipConfirmCancelRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *confirmButton; // @dynamic confirmButton;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTIRenderer *feedbackSurvey; // @dynamic feedbackSurvey;
@property(nonatomic) _Bool hasConfirmButton; // @dynamic hasConfirmButton;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasFeedbackSurvey; // @dynamic hasFeedbackSurvey;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *header; // @dynamic header;
@property(retain, nonatomic) NSMutableArray *onDismissCommandsArray; // @dynamic onDismissCommandsArray;
@property(readonly, nonatomic) unsigned long long onDismissCommandsArray_Count; // @dynamic onDismissCommandsArray_Count;
@property(retain, nonatomic) NSMutableArray *onOpenCommandsArray; // @dynamic onOpenCommandsArray;
@property(readonly, nonatomic) unsigned long long onOpenCommandsArray_Count; // @dynamic onOpenCommandsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

