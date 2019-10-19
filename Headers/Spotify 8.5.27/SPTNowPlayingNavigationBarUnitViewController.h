//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingNavigationBarModelObserver-Protocol.h"

@class NSString, SPTNowPlayingNavigationBarViewV2, SPTTheme;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController, SPTNowPlayingNavigationBarModel;

@interface SPTNowPlayingNavigationBarUnitViewController : UIViewController <SPTNowPlayingNavigationBarModelObserver, SPTNowPlayingContainedViewController>
{
    id <SPTNowPlayingNavigationBarModel> _model;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingNavigationBarModel> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)rightButtonPressed:(id)arg1;
- (void)navigationBarModelStateDidChange:(id)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)updateLabels;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNavigationBarModel:(id)arg1 auxiliaryActionsHandler:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingNavigationBarViewV2 *view; // @dynamic view;

@end

