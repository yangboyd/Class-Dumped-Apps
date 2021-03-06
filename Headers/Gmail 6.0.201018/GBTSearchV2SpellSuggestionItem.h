//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSpellCorrectionItem-Protocol.h"

@class NSString;
@protocol JBTId;

@interface GBTSearchV2SpellSuggestionItem : NSObject <JBTSpellCorrectionItem>
{
    id <JBTId> _elementId;
    NSString *_suggestedText;
}

- (void).cxx_destruct;
- (_Bool)shouldHideAttachmentPreviewChipsInThreadlist;
- (id)getNudgingFeedbackUrl;
- (id)getNotificationTier;
- (_Bool)canDismissNudge;
- (id)getRankRationale;
- (_Bool)hasRankRationale;
- (_Bool)isUnread;
- (_Bool)isUnseen;
- (void)logInteractionWithJBTInteractionType:(id)arg1;
- (id)getDebugString;
- (void)permanentlyDeleteWithJBTSpan:(id)arg1 withJBTCallback:(id)arg2;
- (_Bool)canPermanentlyDelete;
- (id)getNotificationToken;
- (int)getUnseenHash;
- (id)getFullQueryTerms;
- (id)getQueryTerms;
- (id)markNotPhishy;
- (_Bool)canMarkNotPhishy;
- (_Bool)isMarkedAsSpam;
- (void)markNotSpamWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canMarkNotSpam;
- (id)markAsSpamWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canMarkAsSpam;
- (id)removeFromTrashWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canRemoveFromTrash;
- (id)trashWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)isTrashed;
- (_Bool)canTrash;
- (void)markAsSeenWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canMarkAsSeen;
- (id)getSectionType;
- (id)changeLabelsWithJBTChangeLabelsInfo:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (_Bool)canChangeLabelsWithJBTChangeLabelsInfo:(id)arg1;
- (_Bool)isChangeLabelsSupported;
- (id)moveToClusterWithJBTClusterConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)removeFromClusterWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)removeFromCurrentClusterWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)isInClusterWithJBTClusterConfig:(id)arg1;
- (id)getProducedForClusterConfig;
- (_Bool)canMoveToClusterWithJBTClusterConfig:(id)arg1;
- (_Bool)canRemoveFromCurrentCluster;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(id)arg1;
- (_Bool)hasLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(id)arg1;
- (id)getGenericSmartMail;
- (id)getSmartMailList;
- (id)moveToInboxSectionWithJBTMoveToInboxSectionConfig:(id)arg1;
- (_Bool)canMoveToInboxSectionWithJBTClassicGmailInboxSection_ClassicGmailInboxSectionType:(id)arg1;
- (id)moveToWithJBTOrganizationElement:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (_Bool)canMoveToWithJBTOrganizationElement:(id)arg1;
- (id)moveToInboxWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canMoveToInbox;
- (void)removePinWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canRemovePin;
- (id)pinWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canPin;
- (_Bool)isPinned;
- (void)clearRemindedStateWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canClearRemindedState;
- (_Bool)isReminded;
- (void)markAsManuallyClosedWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2 withJBTClientInteractionContext:(id)arg3;
- (void)markAsManuallyClosedWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canMarkAsManuallyClosed;
- (id)getSnoozeReturnType;
- (id)getSnoozeConfig;
- (id)snoozeWithJBTSnoozeConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)getSnoozeMenuOptions;
- (id)getSnoozedTime;
- (_Bool)hasSnoozedTime;
- (id)unsnooze;
- (void)unsnoozeWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canUnsnooze;
- (void)resnoozeWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canResnooze;
- (_Bool)isPreviouslySnoozed;
- (_Bool)canSnooze;
- (_Bool)isSnoozed;
- (id)unmute;
- (void)muteWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canUnmute;
- (_Bool)canMute;
- (_Bool)isMuted;
- (id)archiveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canArchive;
- (_Bool)isArchived;
- (_Bool)isInInbox;
- (_Bool)isLocal;
- (void)setIsLocalWithBoolean:(_Bool)arg1;
- (id)getAffectedItemCountWithJBTCommand_Type:(id)arg1 withJBTCommand_Config:(id)arg2;
- (id)getApproximateItemCount;
- (id)getApproximateUnseenCount;
- (long long)getNotificationComparisonTimeMs;
- (void)setDisplayTimeMsWithLong:(long long)arg1;
- (long long)getDisplayTimeMs;
- (long long)getReceivedTimeMs;
- (long long)getReceivedTimeSec;
- (_Bool)setRankWithNSString:(id)arg1;
- (id)getRank;
- (id)getItemType;
- (id)getId;
- (id)getQuery;
- (id)getCorrectionType;
- (id)getCorrection;
- (id)initWithSuggestion:(id)arg1 nameSpace:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

