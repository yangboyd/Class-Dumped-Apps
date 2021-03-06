//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPollStickerCreationViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatGalleryHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatGradientHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatViewControllerType-Protocol.h>

@class IGPerformanceNavigationLogger, IGPollStickerView, IGStoryCanvasToolbarConfig, IGStoryStickerContainerView, IGUserSession, NSArray, NSString;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasPollFormatViewController : UIViewController <IGPollStickerCreationViewControllerDelegate, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatGalleryHandler, IGStoryCanvasFormatGradientHandler, IGStoryCanvasFormatViewControllerType>
{
    NSArray *_models;
    struct UIEdgeInsets _contentInset;
    IGUserSession *_userSession;
    IGPerformanceNavigationLogger *_performanceLogger;
    unsigned long long _currentIndex;
    IGStoryStickerContainerView *_stickerContainerView;
    IGPollStickerView *_pollStickerView;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
- (void)_updateTextColorForLegibility:(id)arg1;
- (void)_proceedToPostcaptureWithAssetMetadatas:(id)arg1;
- (void)_handleTap:(id)arg1;
- (id)_newPollStickerViewWithModel:(id)arg1;
- (_Bool)pollStickerCreationViewController:(id)arg1 shouldKeepPlaceholderForDismissalSource:(long long)arg2;
- (void)pollStickerCreationViewController:(id)arg1 didFinishEditingPollStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(id)arg1 willEndEditingPollStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(id)arg1 didBeginEditingPollStickerView:(id)arg2;
- (void)pollStickerCreationViewController:(id)arg1 didFinishEditingFOAPollStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(id)arg1 willEndEditingFOAPollStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(id)arg1 didBeginEditingFOAPollStickerView:(id)arg2;
- (void)handleGradientChange:(id)arg1;
- (void)handleGalleryAssetSelections:(id)arg1;
- (void)canvasControlsOverlayViewDidTapToolbarButton:(id)arg1;
- (id)createModeSubformatForLogging;
- (void)restoreCompositionState;
- (void)handleCapture;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
@property(readonly, nonatomic) IGStoryStickerContainerView *stickerContainerView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithModels:(id)arg1 contentInset:(struct UIEdgeInsets)arg2 userSession:(id)arg3 performanceLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

