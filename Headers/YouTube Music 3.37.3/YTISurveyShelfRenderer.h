//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString, YTISurveyShelfButtonSupportedRenderers, YTISurveyShelfListSupportedRenderers;

@interface YTISurveyShelfRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *afterFeedbackText; // @dynamic afterFeedbackText;
@property(retain, nonatomic) YTISurveyShelfButtonSupportedRenderers *dismissalButton; // @dynamic dismissalButton;
@property(nonatomic) _Bool hasAfterFeedbackText; // @dynamic hasAfterFeedbackText;
@property(nonatomic) _Bool hasDismissalButton; // @dynamic hasDismissalButton;
@property(nonatomic) _Bool hasList; // @dynamic hasList;
@property(nonatomic) _Bool hasQuestion; // @dynamic hasQuestion;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTISurveyShelfListSupportedRenderers *list; // @dynamic list;
@property(retain, nonatomic) YTIFormattedString *question; // @dynamic question;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

