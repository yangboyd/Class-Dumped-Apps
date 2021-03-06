//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMESetupHeaderViewDelegate-Protocol.h"
#import "HMESetupLayoutViewController-Protocol.h"

@class HMESetupHeaderView, HMESetupNavigationItem, MDCAppBarViewController, NSString, UIScrollView, UIStackView, UIView;
@protocol HMESetupLayoutHeader, UIGestureRecognizerDelegate;

@interface HMESetupCustomLayoutViewController : UIViewController <HMESetupHeaderViewDelegate, HMESetupLayoutViewController>
{
    HMESetupHeaderView *_headerView;
    UIScrollView *_scrollView;
    UIView *_contentView;
    id <UIGestureRecognizerDelegate> _existingInteractivePopGestureRecognizerDelegate;
    MDCAppBarViewController *_appBarViewController;
    UIStackView *_contentStackView;
}

@property(readonly, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(readonly, nonatomic) MDCAppBarViewController *appBarViewController; // @synthesize appBarViewController=_appBarViewController;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> existingInteractivePopGestureRecognizerDelegate; // @synthesize existingInteractivePopGestureRecognizerDelegate=_existingInteractivePopGestureRecognizerDelegate;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) HMESetupHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)headerView:(id)arg1 didSelectURL:(id)arg2;
@property(readonly, nonatomic) id <HMESetupLayoutHeader> header;
@property(readonly, nonatomic) HMESetupNavigationItem *setupNavigationItem;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic) _Bool displayHeaderView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

