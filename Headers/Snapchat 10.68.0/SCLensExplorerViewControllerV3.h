//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCLensExplorerPageViewControllerDelegate-Protocol.h"
#import "SCLensExplorerTransitioningViewControllerProtocol-Protocol.h"

@class NSString, SCLensExplorerPageViewController, SCLensExplorerSearchHeaderView, UIView;
@protocol SCLensExplorerFactoryProtocol, SCLensExplorerInteractiveTransitionProtocol, SCLensExplorerSearchViewControllerProtocol;

@interface SCLensExplorerViewControllerV3 : UIViewController <SCLensExplorerPageViewControllerDelegate, SCLensExplorerTransitioningViewControllerProtocol>
{
    UIViewController<SCLensExplorerSearchViewControllerProtocol> *_searchViewController;
    id <SCLensExplorerFactoryProtocol> _lensExplorerFactory;
    SCLensExplorerPageViewController *_pageViewController;
    UIView *_transitionView;
    id <SCLensExplorerInteractiveTransitionProtocol> _interactiveTransition;
}

@property(nonatomic) __weak id <SCLensExplorerInteractiveTransitionProtocol> interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect transitioningViewVisibleAria;
@property(readonly, nonatomic) UIView *transitioningView;
@property(readonly, nonatomic) SCLensExplorerSearchHeaderView *headerView;
- (void)pageViewController:(id)arg1 didEndDragingSelectedScrollView:(id)arg2;
- (void)pageViewController:(id)arg1 didScrollSelectedScrollView:(id)arg2;
- (void)pageViewController:(id)arg1 didBeginDragingSelectedScrollView:(id)arg2;
- (void)setupTransitionView;
- (void)setupSearchViewController;
- (void)setupPageViewController;
- (void)refreshSubscriptionCategory;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSearchViewController:(id)arg1 lensExplorerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

