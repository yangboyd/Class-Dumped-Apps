//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Slack31SLKInputAccessoryViewController.h"

@interface _TtC5Slack31SLKInputAccessoryViewController (Slack)
- (void)updateLayoutWithState:(long long)arg1;
- (void)handleAtMentionButtonTap;
- (void)setSafeAreaGapDistance:(double)arg1;
- (void)cloudDownloadCancelledWithAsset:(id)arg1;
- (void)cloudDownloadProgress:(double)arg1 asset:(id)arg2;
- (void)collapseToShortform;
- (void)expandToLongform;
- (void)invalidateAutocompleteViewPosition;
- (void)configureWithAutocompleteVisibilityPreference:(_Bool)arg1;
- (_Bool)isComposerFirstResponder;
- (_Bool)composerResignFirstResponder;
- (_Bool)composerBecomeFirstResponder;
- (_Bool)isEditingMessage;
- (void)cancelEditMessage;
- (void)editMessage:(id)arg1;
- (void)setDraftMessageInputPresentable:(id)arg1;
- (void)setCurrentComposerText:(id)arg1;
- (void)configureWithDisplayType:(long long)arg1 channelDisplayTitle:(id)arg2 channelType:(unsigned long long)arg3 broadcastCheckMarkEventLogger:(CDUnknownBlockType)arg4;
- (void)setAutocompleteParameters:(id)arg1;
- (void)setWithUserIdentifier:(id)arg1;
- (void)setDefaultPlaceholderText:(id)arg1;
- (id)currentComposerText;
- (void)clearAllComposerContentWithTriggeredBySend:(_Bool)arg1;
@property(nonatomic) _Bool broadcastChecked;
- (_Bool)isComposerTextEmpty;
@end

