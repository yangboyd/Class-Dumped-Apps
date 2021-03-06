//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStoryCameraModeSwitcherViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryPreviewFooterViewType-Protocol.h>

@class FBTimer, IGDirectCameraCreationViewMode, IGDirectStackedProfileImageView, IGDirectStoryPreviewFooterConfigureSpec, IGDirectStorySendButtonViewModeOverlayView, IGStoryCameraModeSwitcherView, IGTapButton, NSString, UIImageView;
@protocol IGDirectStoryPreviewFooterViewDelegate, IGStoryPreviewFooterViewDelegate;

@interface IGDirectStoryPreviewFooterView : UIView <IGStoryCameraModeSwitcherViewDelegate, IGStoryPreviewFooterViewType>
{
    IGDirectCameraCreationViewMode *_initialViewMode;
    IGDirectStoryPreviewFooterConfigureSpec *_configSpec;
    IGDirectStackedProfileImageView *_avatarView;
    UIImageView *_chevronOverlayImageView;
    IGDirectStorySendButtonViewModeOverlayView *_viewModeOverlayView;
    IGTapButton *_sendToMoreUsersButton;
    IGStoryCameraModeSwitcherView *_cameraModeSwitcherView;
    FBTimer *_expandTimer;
    NSString *_module;
    _Bool _isShareToFacebookShortCutEnabled;
    _Bool _shareToStoryShortcutEnabled;
    _Bool _closeFriendsShortcutEnabled;
    _Bool _groupStoriesShortcutEnabled;
    _Bool _sendToButtonEnabled;
    _Bool _storiesSharingShortcutsVisible;
    _Bool _mediaBlocklistActive;
    id <IGStoryPreviewFooterViewDelegate> _delegate;
    IGTapButton *_storyButton;
    NSString *_sendButtonText;
    IGTapButton *_sendButton;
    IGTapButton *_groupStoriesButton;
    id <IGDirectStoryPreviewFooterViewDelegate> _directDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectStoryPreviewFooterViewDelegate> directDelegate; // @synthesize directDelegate=_directDelegate;
@property(readonly, nonatomic) IGDirectStackedProfileImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) IGTapButton *groupStoriesButton; // @synthesize groupStoriesButton=_groupStoriesButton;
@property(nonatomic, getter=isMediaBlocklistActive) _Bool mediaBlocklistActive; // @synthesize mediaBlocklistActive=_mediaBlocklistActive;
@property(nonatomic) _Bool storiesSharingShortcutsVisible; // @synthesize storiesSharingShortcutsVisible=_storiesSharingShortcutsVisible;
@property(nonatomic) _Bool sendToButtonEnabled; // @synthesize sendToButtonEnabled=_sendToButtonEnabled;
@property(nonatomic) _Bool groupStoriesShortcutEnabled; // @synthesize groupStoriesShortcutEnabled=_groupStoriesShortcutEnabled;
@property(nonatomic) _Bool closeFriendsShortcutEnabled; // @synthesize closeFriendsShortcutEnabled=_closeFriendsShortcutEnabled;
@property(nonatomic) _Bool shareToStoryShortcutEnabled; // @synthesize shareToStoryShortcutEnabled=_shareToStoryShortcutEnabled;
@property(nonatomic) _Bool isShareToFacebookShortCutEnabled; // @synthesize isShareToFacebookShortCutEnabled=_isShareToFacebookShortCutEnabled;
@property(readonly, nonatomic) IGTapButton *sendButton; // @synthesize sendButton=_sendButton;
@property(copy, nonatomic) NSString *sendButtonText; // @synthesize sendButtonText=_sendButtonText;
@property(readonly, nonatomic) IGTapButton *storyButton; // @synthesize storyButton=_storyButton;
@property(nonatomic) __weak id <IGStoryPreviewFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_expandAfterViewModeChange;
- (void)cameraModeSwitcherViewDidEndScrollOnMode:(id)arg1;
- (void)cameraModeSwitcherViewDidSelectMode:(id)arg1;
- (void)cameraModeSwitcherView:(id)arg1 didSwitchFromMode:(id)arg2 toMode:(id)arg3;
- (_Bool)cameraModeSwitcherView:(id)arg1 shouldBeginDraggingFromMode:(id)arg2;
- (void)_layoutImageButton:(id)arg1 imageSize:(struct CGSize)arg2 imageTitleSpace:(double)arg3;
- (void)_updateButton:(id)arg1 title:(id)arg2;
- (id)_currentViewMode;
- (_Bool)shoulAdjustOffsetFromMediaView;
- (_Bool)isShowingDownloadButton;
- (void)setButtonsEnabled:(_Bool)arg1;
- (void)_didTapSendToMoreUsersButton:(id)arg1;
- (void)_didTapSendButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)currentViewModeSelectorModel;
- (void)_configureSendButton;
- (void)configureWithSpec:(id)arg1;
- (id)initWithAvailableViewModes:(id)arg1 initialViewMode:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

