//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTCommentsHeaderViewModel-Protocol.h"
#import "YTInnerTubeSectionHeaderRenderer-Protocol.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTICommentCreationSupportedRenderers, YTICommentSectionSubMenuSupportedRenderers, YTIFormattedString, YTILoggingDirectives, YTIRenderer, YTISortFilterSubMenuRenderer;

@interface YTICommentsHeaderRenderer : GPBMessage <YTCommentsHeaderViewModel, YTInnerTubeSectionHeaderRenderer>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTIFormattedString *redOnlyCommentingText;
@property(readonly, nonatomic) YTIFormattedString *commentsCountText;
@property(readonly, nonatomic) YTIFormattedString *commentTitleText;
@property(retain, nonatomic) YTICommand *createBackstagePostDialogCommand;
@property(readonly, nonatomic) YTICommand *openPersistentCommentBoxCommand;
@property(readonly, nonatomic) YTISortFilterSubMenuRenderer *sortMenuRenderer;
@property(readonly, nonatomic) YTICommentCreationSupportedRenderers *createCommentRenderer;
@property(readonly, nonatomic) _Bool shouldShowSeparator;
@property(readonly, nonatomic) _Bool hasRedOnlyCommentingText;
@property(readonly, nonatomic) _Bool hasCommentsCountText;
@property(readonly, nonatomic) _Bool hasCommentTitleText;
@property(readonly, nonatomic) _Bool hasSortMenuRenderer;
@property(readonly, nonatomic) _Bool shouldHideSimplebox;
@property(readonly, nonatomic) _Bool useSmallUserThumbnail;
- (id)title;
- (id)buttons;
- (id)serviceEndpoints;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) NSMutableArray *alertsArray; // @dynamic alertsArray;
@property(readonly, nonatomic) unsigned long long alertsArray_Count; // @dynamic alertsArray_Count;
@property(retain, nonatomic) YTIRenderer *batchActionBar; // @dynamic batchActionBar;
@property(retain, nonatomic) YTIFormattedString *commentsCount; // @dynamic commentsCount;
@property(retain, nonatomic) YTIFormattedString *countText; // @dynamic countText;
@property(retain, nonatomic) YTICommentCreationSupportedRenderers *createRenderer; // @dynamic createRenderer;
@property(retain, nonatomic) NSMutableArray *customEmojisArray; // @dynamic customEmojisArray;
@property(readonly, nonatomic) unsigned long long customEmojisArray_Count; // @dynamic customEmojisArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasBatchActionBar; // @dynamic hasBatchActionBar;
@property(nonatomic) _Bool hasCommentsCount; // @dynamic hasCommentsCount;
@property(nonatomic) _Bool hasCountText; // @dynamic hasCountText;
@property(nonatomic) _Bool hasCreateRenderer; // @dynamic hasCreateRenderer;
@property(nonatomic) _Bool hasHeldForReviewCount; // @dynamic hasHeldForReviewCount;
@property(nonatomic) _Bool hasHighlightedComments; // @dynamic hasHighlightedComments;
@property(nonatomic) _Bool hasIsBackstageContent; // @dynamic hasIsBackstageContent;
@property(nonatomic) _Bool hasLikelySpamCount; // @dynamic hasLikelySpamCount;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasPrefilledCreateDialogHeaderMessage; // @dynamic hasPrefilledCreateDialogHeaderMessage;
@property(nonatomic) _Bool hasRedCommentingText; // @dynamic hasRedCommentingText;
@property(nonatomic) _Bool hasShouldShowBackstagePostOptimistically; // @dynamic hasShouldShowBackstagePostOptimistically;
@property(nonatomic) _Bool hasShowCreateDialog; // @dynamic hasShowCreateDialog;
@property(nonatomic) _Bool hasShowSeparator; // @dynamic hasShowSeparator;
@property(nonatomic) _Bool hasSortMenu; // @dynamic hasSortMenu;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasToggleButton; // @dynamic hasToggleButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnicodeEmojisURL; // @dynamic hasUnicodeEmojisURL;
@property(nonatomic) _Bool hasZeroStateMessage; // @dynamic hasZeroStateMessage;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIFormattedString *heldForReviewCount; // @dynamic heldForReviewCount;
@property(retain, nonatomic) YTIRenderer *highlightedComments; // @dynamic highlightedComments;
@property(nonatomic) _Bool isBackstageContent; // @dynamic isBackstageContent;
@property(retain, nonatomic) YTIFormattedString *likelySpamCount; // @dynamic likelySpamCount;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTIRenderer *prefilledCreateDialogHeaderMessage; // @dynamic prefilledCreateDialogHeaderMessage;
@property(retain, nonatomic) YTIFormattedString *redCommentingText; // @dynamic redCommentingText;
@property(nonatomic) _Bool shouldShowBackstagePostOptimistically; // @dynamic shouldShowBackstagePostOptimistically;
@property(nonatomic) _Bool showCreateDialog; // @dynamic showCreateDialog;
@property(nonatomic) _Bool showSeparator; // @dynamic showSeparator;
@property(retain, nonatomic) YTICommentSectionSubMenuSupportedRenderers *sortMenu; // @dynamic sortMenu;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(retain, nonatomic) YTIRenderer *toggleButton; // @dynamic toggleButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *unicodeEmojisURL; // @dynamic unicodeEmojisURL;
@property(retain, nonatomic) YTIRenderer *zeroStateMessage; // @dynamic zeroStateMessage;

@end

