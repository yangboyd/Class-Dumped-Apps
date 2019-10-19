//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTICommand;

@interface YTIEditOnWatchRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowMarkUnlisted; // @dynamic allowMarkUnlisted;
@property(retain, nonatomic) YTICommand *analyticsEndpoint; // @dynamic analyticsEndpoint;
@property(copy, nonatomic) NSString *apiaryFeedbackClientId; // @dynamic apiaryFeedbackClientId;
@property(retain, nonatomic) NSMutableArray *apiaryFeedbackUrlsArray; // @dynamic apiaryFeedbackUrlsArray;
@property(readonly, nonatomic) unsigned long long apiaryFeedbackUrlsArray_Count; // @dynamic apiaryFeedbackUrlsArray_Count;
@property(nonatomic) _Bool audioEnhanceEnabled; // @dynamic audioEnhanceEnabled;
@property(nonatomic) _Bool creatorEndscreenEnabled; // @dynamic creatorEndscreenEnabled;
@property(nonatomic) _Bool editEnabled; // @dynamic editEnabled;
@property(nonatomic) int editorProcessingType; // @dynamic editorProcessingType;
@property(copy, nonatomic) NSString *editorProgressFeedbackKey; // @dynamic editorProgressFeedbackKey;
@property(copy, nonatomic) NSString *enhanceConfirmationMessage; // @dynamic enhanceConfirmationMessage;
@property(copy, nonatomic) NSString *enhanceConfirmationProjectId; // @dynamic enhanceConfirmationProjectId;
@property(nonatomic) _Bool enhanceEnabled; // @dynamic enhanceEnabled;
@property(retain, nonatomic) NSMutableArray *enhanceSuggestionsArray; // @dynamic enhanceSuggestionsArray;
@property(readonly, nonatomic) unsigned long long enhanceSuggestionsArray_Count; // @dynamic enhanceSuggestionsArray_Count;
@property(nonatomic) _Bool hasAllowMarkUnlisted; // @dynamic hasAllowMarkUnlisted;
@property(nonatomic) _Bool hasAnalyticsEndpoint; // @dynamic hasAnalyticsEndpoint;
@property(nonatomic) _Bool hasApiaryFeedbackClientId; // @dynamic hasApiaryFeedbackClientId;
@property(nonatomic) _Bool hasAudioEnhanceEnabled; // @dynamic hasAudioEnhanceEnabled;
@property(nonatomic) _Bool hasCreatorEndscreenEnabled; // @dynamic hasCreatorEndscreenEnabled;
@property(nonatomic) _Bool hasEditEnabled; // @dynamic hasEditEnabled;
@property(nonatomic) _Bool hasEditorProcessingType; // @dynamic hasEditorProcessingType;
@property(nonatomic) _Bool hasEditorProgressFeedbackKey; // @dynamic hasEditorProgressFeedbackKey;
@property(nonatomic) _Bool hasEnhanceConfirmationMessage; // @dynamic hasEnhanceConfirmationMessage;
@property(nonatomic) _Bool hasEnhanceConfirmationProjectId; // @dynamic hasEnhanceConfirmationProjectId;
@property(nonatomic) _Bool hasEnhanceEnabled; // @dynamic hasEnhanceEnabled;
@property(nonatomic) _Bool hasInteractivityEnabled; // @dynamic hasInteractivityEnabled;
@property(nonatomic) _Bool hasIsPrivacySelectorDisabled; // @dynamic hasIsPrivacySelectorDisabled;
@property(nonatomic) _Bool hasPrivacyStatus; // @dynamic hasPrivacyStatus;
@property(nonatomic) _Bool hasShowEditorProcessingStatus; // @dynamic hasShowEditorProcessingStatus;
@property(nonatomic) _Bool hasShowEnhanceConfirmation; // @dynamic hasShowEnhanceConfirmation;
@property(nonatomic) _Bool hasVideoIsLivePremiere; // @dynamic hasVideoIsLivePremiere;
@property(nonatomic) _Bool hasVideoIsProcessing; // @dynamic hasVideoIsProcessing;
@property(nonatomic) _Bool interactivityEnabled; // @dynamic interactivityEnabled;
@property(nonatomic) _Bool isPrivacySelectorDisabled; // @dynamic isPrivacySelectorDisabled;
@property(nonatomic) int privacyStatus; // @dynamic privacyStatus;
@property(nonatomic) _Bool showEditorProcessingStatus; // @dynamic showEditorProcessingStatus;
@property(nonatomic) _Bool showEnhanceConfirmation; // @dynamic showEnhanceConfirmation;
@property(nonatomic) _Bool videoIsLivePremiere; // @dynamic videoIsLivePremiere;
@property(nonatomic) _Bool videoIsProcessing; // @dynamic videoIsProcessing;

@end

