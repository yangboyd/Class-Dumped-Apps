//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTVariableHeightHeaderViewController.h"

#import "YTContentViewController.h"
#import "YTNavigationalLatencyProtocol.h"
#import "YTOverflowMenuRendererProvider.h"
#import "YTResponseViewController.h"
#import "YTStyleContextResponderProvider.h"
#import "YTThumbnailControllerDelegate.h"
#import "YTTopScrolling.h"
#import "YTVariableHeightHeaderViewControllerAttachedHeader.h"

@class GIMMe, NSError, NSString, UIColor, UIViewController<YTResponseViewController>, YTConfirmDialogController, YTConversationObserversController, YTFullScreenOverlayViewController, YTIBrowseResponse, YTIButtonRenderer, YTICommand, YTNavigationalLatencyEventInfo, YTThumbnailController;

@interface YTBrowseResponseViewController : YTVariableHeightHeaderViewController <YTStyleContextResponderProvider, YTThumbnailControllerDelegate, YTVariableHeightHeaderViewControllerAttachedHeader, YTContentViewController, YTNavigationalLatencyProtocol, YTOverflowMenuRendererProvider, YTResponseViewController, YTTopScrolling>
{
    id <YTServices> _services;
    id <YTDataServices> _dataServices;
    id <YTInnerTubeUIService> _service;
    YTConversationObserversController *_conversationObserversController;
    UIViewController<YTResponseViewController> *_headerViewController;
    UIViewController<YTResponseViewController> *_contentViewController;
    NSError *_error;
    UIColor *_themeColor;
    UIColor *_themeTitleColor;
    YTThumbnailController *_channelBannerThumbnailController;
    YTIButtonRenderer *_headerButtonRenderer;
    double _requestSentTimeInterval;
    _Bool _viewShouldFadeOutOnNextLoadContentWithModel;
    long long _contentVersion;
    YTFullScreenOverlayViewController *_fullScreenOverlayViewController;
    YTConfirmDialogController *_confirmDialogController;
    id <YTResponder> _parentResponder;
    YTNavigationalLatencyEventInfo *_navigationalLatencyEventInfo;
    GIMMe *_gimme;
    YTICommand *_navigationEndpoint;
    YTIBrowseResponse *_renderer;
}

@property(retain, nonatomic) YTIBrowseResponse *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) YTNavigationalLatencyEventInfo *navigationalLatencyEventInfo; // @synthesize navigationalLatencyEventInfo=_navigationalLatencyEventInfo;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)headerDidBind:(id)arg1;
- (void)setupSwipeLeftToCameraWithBrowseResponse:(id)arg1;
- (void)loadWithDefaultModel:(id)arg1;
- (void)loadContentWithModel:(id)arg1;
- (void)headerButtonPressed;
- (id)headerRightButtonWithRenderer:(id)arg1;
- (void)loadHeaderWithModel:(id)arg1 parentViewController:(id)arg2;
- (void)loadHeaderWithModel:(id)arg1;
- (void)updateColorTheme;
- (void)loadChannelHeaderWithModel:(id)arg1;
- (_Bool)loadChannelWithModel:(id)arg1;
- (void)reportNavigationLatencyTimingWithRequestSent:(double)arg1 responseReceived:(double)arg2 responseRendered:(double)arg3 browseID:(id)arg4 startDate:(id)arg5;
- (int)latencyActionTypeForBrowseID:(id)arg1;
- (id)historyServiceButtons;
- (id)historyOverflowMenuRenderer;
- (id)downloadSettingsMenuNavigationItem;
- (id)flagPlaylistOverflowMenuRenderer;
- (void)cleanUpDialogController;
- (void)showDialog:(id)arg1;
- (id)overflowMenuWithAdditionalItems:(unsigned long long *)arg1;
- (void)handleInitialOrContinuationBrowseResponse:(id)arg1;
- (void)scrollToTopAndPullToRefresh;
- (void)scrollToTop;
- (void)thumbnailController:(id)arg1 imageLoadDidFailWithError:(id)arg2;
- (void)thumbnailController:(id)arg1 didLoadImage:(id)arg2;
@property(readonly, nonatomic) NSString *styleContext;
- (void)didFinishRefreshing;
- (void)willStartRefreshing;
- (void)willMakeRequest:(id)arg1;
- (void)setEmptyMessage:(id)arg1;
- (void)loadWithError:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)updateCreateButtonVisibility:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end

