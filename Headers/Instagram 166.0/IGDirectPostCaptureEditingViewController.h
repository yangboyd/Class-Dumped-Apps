//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGDirectStoryPreviewFooterViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetListener-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryGalleryZoomTransitionViewController-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMediaCompositionEditingViewControllerEditingEventsDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryPostCaptureEditingViewControllerType-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryPreviewFooterViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryShareSheetViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGDirectPostCaptureEditingControlsOverlayView, IGPartialModalSheetViewController, IGStoryCreationDirectConfiguration, IGStoryMediaCompositionEditingViewController, IGStoryShareSheetMediaSnapshotView, IGUnifiedInboxRecipientTooltipDispatcher, IGUserSession, NSArray, NSString;
@protocol IGStoryPostCaptureEditingViewControllerDelegate, IGStoryPostCaptureEditingViewControllerFacebookReaderDisclosureDelegate, IGSubscriptionToken;

@interface IGDirectPostCaptureEditingViewController : IGViewController <IGStoryGalleryZoomTransitionViewController, IGDirectStoryPreviewFooterViewDelegate, IGPartialModalSheetListener, IGStoryMediaCompositionEditingViewControllerEditingEventsDelegate, IGStoryPreviewFooterViewDelegate, IGStoryShareSheetViewControllerDelegate, UIGestureRecognizerDelegate, IGStoryPostCaptureEditingViewControllerType>
{
    IGUserSession *_userSession;
    IGStoryCreationDirectConfiguration *_directConfiguration;
    IGStoryMediaCompositionEditingViewController *_mediaCompositionEditingViewController;
    NSArray *_compositions;
    IGUnifiedInboxRecipientTooltipDispatcher *_viewModeTooltipDispatcher;
    _Bool _isSavingMedia;
    IGPartialModalSheetViewController *_partialShareSheet;
    IGStoryShareSheetMediaSnapshotView *_mediaSnapshotView;
    id <IGSubscriptionToken> _token;
    id <IGStoryPostCaptureEditingViewControllerDelegate> _delegate;
    id <IGStoryPostCaptureEditingViewControllerFacebookReaderDisclosureDelegate> _facebookReaderDisclosureDelegate;
    NSString *_sendButtonText;
    NSArray *_captureToolsForLogging;
    IGDirectPostCaptureEditingControlsOverlayView *_editingControlsOverlayView;
    NSArray *_toolMenuOrderForLogging;
    long long _captureFormatIndexForLogging;
}

- (void).cxx_destruct;
@property(nonatomic) long long captureFormatIndexForLogging; // @synthesize captureFormatIndexForLogging=_captureFormatIndexForLogging;
@property(retain, nonatomic) NSArray *toolMenuOrderForLogging; // @synthesize toolMenuOrderForLogging=_toolMenuOrderForLogging;
@property(readonly, nonatomic) IGDirectPostCaptureEditingControlsOverlayView *editingControlsOverlayView; // @synthesize editingControlsOverlayView=_editingControlsOverlayView;
@property(retain, nonatomic) NSArray *captureToolsForLogging; // @synthesize captureToolsForLogging=_captureToolsForLogging;
@property(copy, nonatomic) NSString *sendButtonText; // @synthesize sendButtonText=_sendButtonText;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerFacebookReaderDisclosureDelegate> facebookReaderDisclosureDelegate; // @synthesize facebookReaderDisclosureDelegate=_facebookReaderDisclosureDelegate;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mediaEditingViewController:(id)arg1 userTappedSticker:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 userRemovedStickerFromCurrentComposition:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 userAddedStickerToCurrentComposition:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 userDidChangeSelectedStateForSticker:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 didApplyColorFilterAutomatically:(id)arg2;
- (void)mediaEditingViewController:(id)arg1 didApplyColorFilter:(id)arg2;
- (void)mediaEditingViewControllerDidToggleTextAnimation:(id)arg1 textFormatName:(id)arg2;
- (void)mediaEditingViewControllerDidToggleTextEffect:(id)arg1 emphasisType:(long long)arg2 isAppliedOnFullCaption:(_Bool)arg3;
- (void)mediaEditingViewControllerDidChangeTextColor:(id)arg1 colorSource:(long long)arg2 color:(id)arg3;
- (void)mediaEditingViewControllerDidExitTextEditingMode:(id)arg1 text:(id)arg2;
- (void)mediaEditingViewControllerDidEnterTextEditingMode:(id)arg1 entryPoint:(long long)arg2;
- (long long)_mediaTypeForComposition;
- (long long)_cameraPositionForComposition;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)storyShareSheetViewController:(id)arg1 didSendToStoryTarget:(long long)arg2 directRecipients:(id)arg3 groupStoriesRecipients:(id)arg4 storyModelArray:(id)arg5 metadataArray:(id)arg6;
- (void)storyShareSheetViewControllerDidDismiss:(id)arg1;
- (void)previewFooterViewDidTapAddToGroupStory:(id)arg1;
- (void)previewFooterViewDidTapDownload:(id)arg1;
- (void)previewFooterViewDidTapAddToStory:(id)arg1 withShareToFbTurnedOff:(_Bool)arg2;
- (void)previewFooterViewDidLongPressFavoritesOnly:(id)arg1;
- (void)previewFooterViewDidTapAddToFavoritesOnly:(id)arg1;
- (void)previewFooterViewDidLongPressAddToStory:(id)arg1;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)directStoryFooterView:(id)arg1 didChangeViewMode:(id)arg2 cameraModeSwitcherView:(id)arg3;
- (void)directStoryFooterViewDidTapSendToMoreUsers:(id)arg1;
- (void)_presentShareSheet;
- (void)_didTapSaveButton:(id)arg1;
- (void)_didTapCancelButton:(id)arg1;
- (_Bool)_isGroupStoryViewMode:(id)arg1;
- (void)_didTapPreviewFooterSendButton;
- (void)previewFooterViewDidTapSend:(id)arg1;
- (struct CGRect)mediaCompositionRegion;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateWithThread:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCompositions:(id)arg1 directConfiguration:(id)arg2 userSession:(id)arg3;
@property(readonly, nonatomic) struct CGRect contentRegion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

