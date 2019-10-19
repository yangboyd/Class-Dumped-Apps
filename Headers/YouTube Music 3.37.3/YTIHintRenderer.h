//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTTooltipModel-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIColor, YTICommand, YTIFormattedString, YTIHintCondition, YTIHintContentSupportedRenderers, YTIHintDismiss, YTIHintRenderer_HintCap, YTIHintSuggestedPosition;
@protocol YTClickableButton><YTTooltipButtonModel;

@interface YTIHintRenderer : GPBMessage <YTTooltipModel>
{
}

+ (id)descriptor;
+ (id)OMVPreferredModeHint;
+ (id)ATVPreferredModeHint;
- (id)trackingParams;
- (_Bool)hasTrackingParams;
@property(readonly, nonatomic, getter=isCounterfactual) _Bool counterfactual;
@property(readonly, nonatomic) NSArray *impressionEndpoints;
@property(readonly, nonatomic) long long impressionCap;
@property(readonly, nonatomic) double frequencyCap;
@property(readonly, nonatomic) double dwellTime;
@property(readonly, nonatomic) int dismissalCondition;
@property(readonly, nonatomic) int tooltipTargetEffect;
@property(readonly, nonatomic) int preferredPosition;
@property(readonly, nonatomic) double maxWidthRatio;
@property(readonly, nonatomic) YTICommand *dismissAction;
@property(readonly, nonatomic) _Bool hasDismissAction;
@property(readonly, nonatomic) YTICommand *promoDismissCommand;
@property(readonly, nonatomic) YTICommand *promoAcceptCommand;
@property(readonly, nonatomic) id <YTClickableButton><YTTooltipButtonModel> acceptButtonModel;
@property(readonly, nonatomic) id <YTClickableButton><YTTooltipButtonModel> dismissButtonModel;
@property(readonly, nonatomic) UIColor *hintColor;
@property(readonly, nonatomic) YTIFormattedString *detailsText;
@property(readonly, nonatomic) YTIFormattedString *text;
@property(readonly, nonatomic) NSString *ID;

// Remaining properties
@property(retain, nonatomic) YTIHintContentSupportedRenderers *content; // @dynamic content;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIHintDismiss *dismissStrategy; // @dynamic dismissStrategy;
@property(nonatomic) long long dwellTimeMs; // @dynamic dwellTimeMs;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasDismissStrategy; // @dynamic hasDismissStrategy;
@property(nonatomic) _Bool hasDwellTimeMs; // @dynamic hasDwellTimeMs;
@property(nonatomic) _Bool hasHintCap; // @dynamic hasHintCap;
@property(nonatomic) _Bool hasHintCondition; // @dynamic hasHintCondition;
@property(nonatomic) _Bool hasHintId; // @dynamic hasHintId;
@property(nonatomic) _Bool hasSuggestedPosition; // @dynamic hasSuggestedPosition;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIHintRenderer_HintCap *hintCap; // @dynamic hintCap;
@property(retain, nonatomic) YTIHintCondition *hintCondition; // @dynamic hintCondition;
@property(copy, nonatomic) NSString *hintId; // @dynamic hintId;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIHintSuggestedPosition *suggestedPosition; // @dynamic suggestedPosition;
@property(readonly) Class superclass;

@end

