//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTCollectionConfigurationResponderProvider.h"
#import "YTCollectionViewScrollObserverResponderProvider.h"
#import "YTCompanionAdResponderProvider.h"
#import "YTEngagementPanelHeaderViewDelegate.h"
#import "YTGraftingViewController.h"
#import "YTResponseViewController.h"

@class GIMMe, NSHashTable, NSString, UIViewController<YTRendererController>, YTEngagementPanelView, YTICommand, YTIEngagementPanelOpenStyle;

@interface YTEngagementPanelViewController : UIViewController <YTCollectionConfigurationResponderProvider, YTGraftingViewController, YTCollectionViewScrollObserverResponderProvider, YTCompanionAdResponderProvider, YTEngagementPanelHeaderViewDelegate, YTResponseViewController>
{
    YTICommand *_showEngagementPanelCommand;
    _Bool _hasUpdatedAndAttachedButtonsInHeader;
    UIViewController<YTRendererController> *_sectionListContentViewController;
    UIViewController<YTRendererController> *_commentRepliesEngagementPanelContentViewController;
    NSHashTable *_scrollObservers;
    id <YTKeyboardInsetsProtocol> _keyboardInsets;
    _Bool _modelReloadNeeded;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTEngagementPanelDelegate> _delegate;
    YTIEngagementPanelOpenStyle *_openStyle;
    NSString *_panelIdentifier;
    id <YTEngagementPanelViewModel> _model;
    UIViewController<YTRendererController> *_contentViewController;
}

@property(nonatomic) _Bool modelReloadNeeded; // @synthesize modelReloadNeeded=_modelReloadNeeded;
@property(readonly, nonatomic) UIViewController<YTRendererController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) id <YTEngagementPanelViewModel> model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *panelIdentifier; // @synthesize panelIdentifier=_panelIdentifier;
@property(readonly, nonatomic) YTIEngagementPanelOpenStyle *openStyle; // @synthesize openStyle=_openStyle;
@property(nonatomic) __weak id <YTEngagementPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)prepareHeaderViewControllerForModel:(id)arg1;
- (void)prepareContentViewControllerForModel:(id)arg1;
- (void)reloadContentWithContinuation:(id)arg1;
- (void)setupResponderEventHandlers;
- (void)didTapActionButton;
- (void)didTapOverflowMenuButton:(id)arg1;
- (void)didTapSortFilterMenuButton:(id)arg1;
- (void)didTapCloseButton;
- (void)didTapBackButton;
- (void)addCompanionAdObserver:(id)arg1;
- (void)removeScrollObserver:(id)arg1;
- (void)addScrollObserver:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)relogScreen;
- (id)navEndpoint;
- (_Bool)shouldBlacklistElements;
- (_Bool)shouldEnableElements;
- (_Bool)containsLiveChat;
- (void)setupInteractionLoggingWithCommand:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;
@property(retain, nonatomic) YTEngagementPanelView *view; // @dynamic view;

@end

