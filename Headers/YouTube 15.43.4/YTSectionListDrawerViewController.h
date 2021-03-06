//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTCollectionViewScrollObserver-Protocol.h"
#import "YTResponseViewController-Protocol.h"
#import "YTSectionListDrawerProvider-Protocol.h"
#import "YTSectionListDrawerViewDelegate-Protocol.h"
#import "YTStyleContextResponderProvider-Protocol.h"
#import "YTSubscriptionServiceObserver-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTICommand;
@protocol YTInnerTubeUIService, YTRendererController, YTResponder, YTSectionListDrawerViewControllerDelegate;

@interface YTSectionListDrawerViewController : UIViewController <YTCollectionViewScrollObserver, YTSectionListDrawerViewDelegate, YTStyleContextResponderProvider, YTSubscriptionServiceObserver, YTResponseViewController, YTSectionListDrawerProvider>
{
    UIViewController<YTRendererController> *_drawerViewController;
    id <YTInnerTubeUIService> _service;
    YTICommand *_showAllEndpoint;
    long long _viewState;
    NSHashTable *_observers;
    struct CGPoint _pendingContentOffset;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    UIViewController *_contentViewController;
    id <YTSectionListDrawerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTSectionListDrawerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)updateScrollObserver;
- (void)updateVariableHeightHeaderShadow;
- (id)contentCollectionViewController;
- (void)drawerSubscriptionsDidChange;
- (_Bool)isWideModeWithWidth:(double)arg1;
- (id)drawerView;
- (void)setDrawerViewController:(id)arg1;
- (void)toggleViewState;
- (id)mainViewController;
- (void)handleReloadContinuation:(id)arg1;
- (void)didTapChannelsTarget:(id)arg1;
- (void)notifyViewStateAnimated:(_Bool)arg1;
- (void)collectionViewControllerDidScroll:(id)arg1;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (void)didChangeLayoutToViewState:(long long)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)selectDrawerWithEntry:(id)arg1;
- (long long)viewState;
- (void)removeSectionListDrawerObserver:(id)arg1;
- (void)addSectionListDrawerObserver:(id)arg1;
@property(readonly, nonatomic) NSString *styleContext;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *overrideStyleContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end

