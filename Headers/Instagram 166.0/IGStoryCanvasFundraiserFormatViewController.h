//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGAnalyticsModule-Protocol.h>
#import <InstagramAppCoreFramework/IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFundraiserStickerCreationViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatGradientHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatViewControllerType-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFundraiserNonprofitListViewControllerDelegate-Protocol.h>

@class IGPerformanceNavigationLogger, IGStoryCanvasToolbarConfig, IGStoryStickerContainerView, IGUser, IGUserSession, NSArray, NSString, UISelectionFeedbackGenerator, UIView;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasFundraiserFormatViewController : UIViewController <IGFundraiserStickerCreationViewControllerDelegate, IGStoryFundraiserNonprofitListViewControllerDelegate, IGAnalyticsModule, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatGradientHandler, IGStoryCanvasFormatViewControllerType>
{
    IGUserSession *_userSession;
    NSArray *_suggestedNonprofits;
    IGPerformanceNavigationLogger *_performanceLogger;
    struct UIEdgeInsets _contentInset;
    IGUser *_currentNonprofit;
    _Bool _hasTappedDice;
    IGStoryStickerContainerView *_stickerContainerView;
    UIView *_fundraiserStickerView;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
- (void)_presentNonprofitSelector;
- (void)_handleTap:(id)arg1;
- (id)_stickerViewForNonprofit:(id)arg1;
- (id)analyticsModule;
- (void)fundraiserNonprofitListViewControllerDidTapCancel:(id)arg1;
- (void)fundraiserNonprofitListViewController:(id)arg1 didSelectNonprofit:(id)arg2;
- (void)fundraiserStickerCreationViewController:(id)arg1 didFinishEditingFundraiserStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)fundraiserStickerCreationViewController:(id)arg1 willFinishEditingFundraiserStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)canvasControlsOverlayViewDidTapToolbarButton:(id)arg1;
- (void)handleGradientChange:(id)arg1;
- (void)restoreCompositionState;
- (void)handleCapture;
- (id)createModeSubformatForLogging;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryStickerContainerView *stickerContainerView;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 suggestedNonprofits:(id)arg2 contentInset:(struct UIEdgeInsets)arg3 performanceLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

