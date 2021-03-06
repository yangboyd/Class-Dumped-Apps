//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIColor, UIImage, _TtC15SlackMessagesUI27GroupedReactionsPresentable;
@protocol _TtP11SlackModels12SLKReactable_, _TtP15SlackMessagesUI30BlockPresentableStoreInterface_;

@interface _TtC15SlackMessagesUI24SMUMessageDrawParameters : NSObject
{
    // Error parsing type: , name: avatarURL
    // Error parsing type: , name: tsid
    // Error parsing type: , name: shouldDrawName
    // Error parsing type: , name: shouldDrawTimestamp
    // Error parsing type: , name: name
    // Error parsing type: , name: username
    // Error parsing type: , name: userStatusEmoji
    // Error parsing type: , name: userId
    // Error parsing type: , name: userStatusText
    // Error parsing type: , name: serviceId
    // Error parsing type: , name: timestamp
    // Error parsing type: , name: editedTimestamp
    // Error parsing type: , name: threadTimestamp
    // Error parsing type: , name: externalTeamId
    // Error parsing type: , name: sendingAttributedString
    // Error parsing type: , name: timestampAttributedString
    // Error parsing type: , name: ephemeralAttributedString
    // Error parsing type: , name: nameAttributedString
    // Error parsing type: , name: nameAndUserStatusAttributedString
    // Error parsing type: , name: broadcastRootMessageAttributedString
    // Error parsing type: , name: replyCountAttributedString
    // Error parsing type: , name: metaDataIconAttributedString
    // Error parsing type: , name: metaDataTextAttributedString
    // Error parsing type: , name: links
    // Error parsing type: , name: text
    // Error parsing type: , name: highlightRanges
    // Error parsing type: , name: attachments
    // Error parsing type: , name: channelId
    // Error parsing type: , name: channelTitle
    // Error parsing type: , name: emojiUrl
    // Error parsing type: , name: botImageUrl
    // Error parsing type: , name: botIdentifier
    // Error parsing type: , name: reactions
    // Error parsing type: , name: hasOutOfChannelMentions
    // Error parsing type: , name: willInviteToGroup
    // Error parsing type: , name: replierIds
    // Error parsing type: , name: formattedReplyCount
    // Error parsing type: , name: avatarImageOverride
    // Error parsing type: , name: starIconImage
    // Error parsing type: , name: alertIconImage
    // Error parsing type: , name: messageLayoutStyle
    // Error parsing type: , name: channelType
    // Error parsing type: , name: messageDeliveryStatus
    // Error parsing type: , name: backgroundColor
    // Error parsing type: , name: alertType
    // Error parsing type: , name: isSlackbot
    // Error parsing type: , name: alwaysShowReactionsComponent
    // Error parsing type: , name: isBotMessage
    // Error parsing type: , name: isWorkflowBotMessage
    // Error parsing type: , name: isTombstone
    // Error parsing type: , name: isRedactedMessage
    // Error parsing type: , name: isStatusSet
    // Error parsing type: , name: isEphemeral
    // Error parsing type: , name: isStarred
    // Error parsing type: , name: isPinned
    // Error parsing type: , name: isFileMessage
    // Error parsing type: , name: isSubscribed
    // Error parsing type: , name: shouldShowTapAreas
    // Error parsing type: , name: showNewerRepliesLabel
    // Error parsing type: , name: showThreads
    // Error parsing type: , name: isFailedMessage
    // Error parsing type: , name: isReply
    // Error parsing type: , name: hasFileAttachment
    // Error parsing type: , name: fileAttachments
    // Error parsing type: , name: blockPresentableStore
    // Error parsing type: , name: hasUnsupportedBlocks
    // Error parsing type: , name: leadingPadding
    // Error parsing type: , name: topPadding
    // Error parsing type: , name: reactable
    // Error parsing type: , name: reactionsViewModel
    // Error parsing type: , name: allowAnimations
    // Error parsing type: , name: accessibilityTimestamp
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldShowBlocks:(_Bool)arg1;
@property(nonatomic, copy) NSString *accessibilityTimestamp;
@property(nonatomic) _Bool allowAnimations; // @synthesize allowAnimations;
@property(nonatomic, retain) _TtC15SlackMessagesUI27GroupedReactionsPresentable *reactionsViewModel; // @synthesize reactionsViewModel;
@property(nonatomic, retain) id <_TtP11SlackModels12SLKReactable_> reactable; // @synthesize reactable;
@property(nonatomic) double topPadding; // @synthesize topPadding;
@property(nonatomic) double leadingPadding; // @synthesize leadingPadding;
@property(nonatomic) _Bool hasUnsupportedBlocks; // @synthesize hasUnsupportedBlocks;
@property(nonatomic, retain) id <_TtP15SlackMessagesUI30BlockPresentableStoreInterface_> blockPresentableStore; // @synthesize blockPresentableStore;
@property(nonatomic, copy) NSArray *fileAttachments;
@property(nonatomic) _Bool hasFileAttachment; // @synthesize hasFileAttachment;
@property(nonatomic) _Bool isReply; // @synthesize isReply;
@property(nonatomic) _Bool isFailedMessage; // @synthesize isFailedMessage;
@property(nonatomic) _Bool showThreads; // @synthesize showThreads;
@property(nonatomic) _Bool showNewerRepliesLabel; // @synthesize showNewerRepliesLabel;
@property(nonatomic) _Bool shouldShowTapAreas; // @synthesize shouldShowTapAreas;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed;
@property(nonatomic) _Bool isFileMessage; // @synthesize isFileMessage;
@property(nonatomic) _Bool isPinned; // @synthesize isPinned;
@property(nonatomic) _Bool isStarred; // @synthesize isStarred;
@property(nonatomic) _Bool isEphemeral; // @synthesize isEphemeral;
@property(nonatomic) _Bool isStatusSet; // @synthesize isStatusSet;
@property(nonatomic) _Bool isRedactedMessage; // @synthesize isRedactedMessage;
@property(nonatomic) _Bool isTombstone; // @synthesize isTombstone;
@property(nonatomic) _Bool isWorkflowBotMessage; // @synthesize isWorkflowBotMessage;
@property(nonatomic) _Bool isBotMessage; // @synthesize isBotMessage;
@property(nonatomic) _Bool alwaysShowReactionsComponent; // @synthesize alwaysShowReactionsComponent;
@property(nonatomic) _Bool isSlackbot; // @synthesize isSlackbot;
@property(nonatomic, copy) NSString *alertType;
@property(nonatomic, retain) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) long long messageDeliveryStatus; // @synthesize messageDeliveryStatus;
@property(nonatomic) long long channelType; // @synthesize channelType;
@property(nonatomic) long long messageLayoutStyle; // @synthesize messageLayoutStyle;
@property(nonatomic, retain) UIImage *alertIconImage; // @synthesize alertIconImage;
@property(nonatomic, retain) UIImage *starIconImage; // @synthesize starIconImage;
@property(nonatomic, retain) UIImage *avatarImageOverride; // @synthesize avatarImageOverride;
@property(nonatomic, copy) NSString *formattedReplyCount;
@property(nonatomic, copy) NSArray *replierIds;
@property(nonatomic) _Bool willInviteToGroup; // @synthesize willInviteToGroup;
@property(nonatomic) _Bool hasOutOfChannelMentions; // @synthesize hasOutOfChannelMentions;
@property(nonatomic, copy) NSArray *reactions;
@property(nonatomic, copy) NSString *botIdentifier;
@property(nonatomic, copy) NSString *botImageUrl;
@property(nonatomic, copy) NSString *emojiUrl;
@property(nonatomic, copy) NSString *channelTitle;
@property(nonatomic, copy) NSString *channelId;
@property(nonatomic, copy) NSArray *attachments;
@property(nonatomic, retain) NSArray *highlightRanges; // @synthesize highlightRanges;
@property(nonatomic, retain) NSAttributedString *text; // @synthesize text;
@property(nonatomic, retain) NSArray *links; // @synthesize links;
@property(nonatomic, retain) NSAttributedString *metaDataTextAttributedString; // @synthesize metaDataTextAttributedString;
@property(nonatomic, retain) NSAttributedString *metaDataIconAttributedString; // @synthesize metaDataIconAttributedString;
@property(nonatomic, retain) NSAttributedString *replyCountAttributedString; // @synthesize replyCountAttributedString;
@property(nonatomic, retain) NSAttributedString *broadcastRootMessageAttributedString; // @synthesize broadcastRootMessageAttributedString;
@property(nonatomic, retain) NSAttributedString *nameAndUserStatusAttributedString; // @synthesize nameAndUserStatusAttributedString;
@property(nonatomic, retain) NSAttributedString *nameAttributedString; // @synthesize nameAttributedString;
@property(nonatomic, retain) NSAttributedString *ephemeralAttributedString; // @synthesize ephemeralAttributedString;
@property(nonatomic, retain) NSAttributedString *timestampAttributedString; // @synthesize timestampAttributedString;
@property(nonatomic, retain) NSAttributedString *sendingAttributedString; // @synthesize sendingAttributedString;
@property(nonatomic, copy) NSString *externalTeamId;
@property(nonatomic, copy) NSString *threadTimestamp;
@property(nonatomic, copy) NSString *editedTimestamp;
@property(nonatomic, copy) NSString *timestamp;
@property(nonatomic, copy) NSString *serviceId;
@property(nonatomic, copy) NSString *userStatusText;
@property(nonatomic, copy) NSString *userId;
@property(nonatomic, copy) NSString *userStatusEmoji;
@property(nonatomic, copy) NSString *username;
@property(nonatomic, copy) NSString *name;
@property(nonatomic) _Bool shouldDrawTimestamp; // @synthesize shouldDrawTimestamp;
@property(nonatomic) _Bool shouldDrawName; // @synthesize shouldDrawName;
@property(nonatomic, copy) NSString *tsid;
@property(nonatomic, copy) NSString *avatarURL;

@end

