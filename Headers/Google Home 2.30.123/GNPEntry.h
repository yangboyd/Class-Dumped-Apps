//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GNPAgendaEntry, GNPReminderData, GNPReminderEntry, NSData, NSString;

@interface GNPEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GNPAgendaEntry *agendaEntry; // @dynamic agendaEntry;
@property(nonatomic) _Bool canIdentifyByContentIdAndSemanticProperties; // @dynamic canIdentifyByContentIdAndSemanticProperties;
@property(copy, nonatomic) NSString *contentDomain; // @dynamic contentDomain;
@property(copy, nonatomic) NSString *discoverSurveyName; // @dynamic discoverSurveyName;
@property(nonatomic) _Bool eligibleForImmediateSwap; // @dynamic eligibleForImmediateSwap;
@property(copy, nonatomic) NSData *encodedEventId; // @dynamic encodedEventId;
@property(copy, nonatomic) NSData *encodedServerPayload; // @dynamic encodedServerPayload;
@property(nonatomic) long long entryUpdateId; // @dynamic entryUpdateId;
@property(nonatomic) long long entryUpdateTimestampMillis; // @dynamic entryUpdateTimestampMillis;
@property(nonatomic) _Bool hasAgendaEntry; // @dynamic hasAgendaEntry;
@property(nonatomic) _Bool hasCanIdentifyByContentIdAndSemanticProperties; // @dynamic hasCanIdentifyByContentIdAndSemanticProperties;
@property(nonatomic) _Bool hasContentDomain; // @dynamic hasContentDomain;
@property(nonatomic) _Bool hasDiscoverSurveyName; // @dynamic hasDiscoverSurveyName;
@property(nonatomic) _Bool hasEligibleForImmediateSwap; // @dynamic hasEligibleForImmediateSwap;
@property(nonatomic) _Bool hasEncodedEventId; // @dynamic hasEncodedEventId;
@property(nonatomic) _Bool hasEncodedServerPayload; // @dynamic hasEncodedServerPayload;
@property(nonatomic) _Bool hasEntryUpdateId; // @dynamic hasEntryUpdateId;
@property(nonatomic) _Bool hasEntryUpdateTimestampMillis; // @dynamic hasEntryUpdateTimestampMillis;
@property(nonatomic) _Bool hasInjectUserPrompt; // @dynamic hasInjectUserPrompt;
@property(nonatomic) _Bool hasInlineInjectedCollectionComponent; // @dynamic hasInlineInjectedCollectionComponent;
@property(nonatomic) _Bool hasIsInternalOnly; // @dynamic hasIsInternalOnly;
@property(nonatomic) _Bool hasIsUndismissable; // @dynamic hasIsUndismissable;
@property(nonatomic) _Bool hasLastModifiedByPush; // @dynamic hasLastModifiedByPush;
@property(nonatomic) _Bool hasParkable; // @dynamic hasParkable;
@property(nonatomic) _Bool hasReminderData; // @dynamic hasReminderData;
@property(nonatomic) _Bool hasReminderEntry; // @dynamic hasReminderEntry;
@property(nonatomic) _Bool hasTargetLanguage; // @dynamic hasTargetLanguage;
@property(nonatomic) _Bool hasTriggersNewContentBadge; // @dynamic hasTriggersNewContentBadge;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUserPrompt; // @dynamic hasUserPrompt;
@property(nonatomic) _Bool injectUserPrompt; // @dynamic injectUserPrompt;
@property(nonatomic) _Bool inlineInjectedCollectionComponent; // @dynamic inlineInjectedCollectionComponent;
@property(nonatomic) _Bool isInternalOnly; // @dynamic isInternalOnly;
@property(nonatomic) _Bool isUndismissable; // @dynamic isUndismissable;
@property(nonatomic) _Bool lastModifiedByPush; // @dynamic lastModifiedByPush;
@property(readonly, nonatomic) int originOneOfCase; // @dynamic originOneOfCase;
@property(nonatomic) _Bool originatedFromDevice; // @dynamic originatedFromDevice;
@property(nonatomic) _Bool originatedFromPush; // @dynamic originatedFromPush;
@property(nonatomic) _Bool parkable; // @dynamic parkable;
@property(retain, nonatomic) GNPReminderData *reminderData; // @dynamic reminderData;
@property(retain, nonatomic) GNPReminderEntry *reminderEntry; // @dynamic reminderEntry;
@property(copy, nonatomic) NSString *targetLanguage; // @dynamic targetLanguage;
@property(nonatomic) _Bool triggersNewContentBadge; // @dynamic triggersNewContentBadge;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *userPrompt; // @dynamic userPrompt;

@end

