//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString, YTIPlaylistContributionState, YTIPlaylistContributorsList, YTIPlaylistSettingsEditorButtonSupportedRenderers, YTIPlaylistSettingsEditorContributorsSupportedContinuations, YTIPlaylistSettingsEditorCreateInviteLinkSupportedRenderers;

@interface YTIPlaylistSettingsEditorCollaborationSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPlaylistContributorsList *blockedList; // @dynamic blockedList;
@property(retain, nonatomic) YTICommand *collaborationSettingsCommand; // @dynamic collaborationSettingsCommand;
@property(nonatomic) _Bool collaborationSettingsDisabled; // @dynamic collaborationSettingsDisabled;
@property(retain, nonatomic) YTIPlaylistSettingsEditorContributorsSupportedContinuations *continuation; // @dynamic continuation;
@property(retain, nonatomic) YTIPlaylistContributorsList *contributorList; // @dynamic contributorList;
@property(retain, nonatomic) YTIPlaylistSettingsEditorCreateInviteLinkSupportedRenderers *createInviteLink; // @dynamic createInviteLink;
@property(retain, nonatomic) YTIPlaylistSettingsEditorButtonSupportedRenderers *createInviteLinkButton; // @dynamic createInviteLinkButton;
@property(retain, nonatomic) YTIFormattedString *createInviteLinkDescription; // @dynamic createInviteLinkDescription;
@property(nonatomic) _Bool hasBlockedList; // @dynamic hasBlockedList;
@property(nonatomic) _Bool hasCollaborationSettingsCommand; // @dynamic hasCollaborationSettingsCommand;
@property(nonatomic) _Bool hasCollaborationSettingsDisabled; // @dynamic hasCollaborationSettingsDisabled;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasContributorList; // @dynamic hasContributorList;
@property(nonatomic) _Bool hasCreateInviteLink; // @dynamic hasCreateInviteLink;
@property(nonatomic) _Bool hasCreateInviteLinkButton; // @dynamic hasCreateInviteLinkButton;
@property(nonatomic) _Bool hasCreateInviteLinkDescription; // @dynamic hasCreateInviteLinkDescription;
@property(nonatomic) _Bool hasHasInviteLinks; // @dynamic hasHasInviteLinks;
@property(nonatomic) _Bool hasInviteLinks; // @dynamic hasInviteLinks;
@property(nonatomic) _Bool hasPeopleWithInviteLink; // @dynamic hasPeopleWithInviteLink;
@property(nonatomic) _Bool hasRevokeInviteLinksButton; // @dynamic hasRevokeInviteLinksButton;
@property(nonatomic) _Bool hasRevokeInviteLinksDescription; // @dynamic hasRevokeInviteLinksDescription;
@property(nonatomic) _Bool hasShareInviteLinkButton; // @dynamic hasShareInviteLinkButton;
@property(nonatomic) _Bool hasShareInviteLinkDescription; // @dynamic hasShareInviteLinkDescription;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIFormattedString *peopleWithInviteLink; // @dynamic peopleWithInviteLink;
@property(retain, nonatomic) YTIPlaylistSettingsEditorButtonSupportedRenderers *revokeInviteLinksButton; // @dynamic revokeInviteLinksButton;
@property(retain, nonatomic) YTIFormattedString *revokeInviteLinksDescription; // @dynamic revokeInviteLinksDescription;
@property(retain, nonatomic) YTIPlaylistSettingsEditorButtonSupportedRenderers *shareInviteLinkButton; // @dynamic shareInviteLinkButton;
@property(retain, nonatomic) YTIFormattedString *shareInviteLinkDescription; // @dynamic shareInviteLinkDescription;
@property(retain, nonatomic) YTIPlaylistContributionState *state; // @dynamic state;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

