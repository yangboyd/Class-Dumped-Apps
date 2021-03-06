//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class NSString, T1OnboardingHeaderViewModel, TFNItemsDataViewController, UIView;
@protocol T1OnboardingContainerViewControllerDelegate;

@interface T1OnboardingContainerViewController : TFNViewController
{
    id <T1OnboardingContainerViewControllerDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    T1OnboardingHeaderViewModel *_headerViewModel;
    UIView *_headerView;
    TFNItemsDataViewController *_itemsDataViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNItemsDataViewController *itemsDataViewController; // @synthesize itemsDataViewController=_itemsDataViewController;
- (void)private_updateToolbarWaiting:(_Bool)arg1;
- (void)private_updateToolbar;
- (id)private_toolbarItemsWithNextLabel:(id)arg1 skipLabel:(id)arg2;
- (void)private_updateTableHeaderLayout;
- (void)updateNextLabelEnabled:(_Bool)arg1;
- (void)updateNextLinkLabelWithText:(id)arg1;
- (void)private_skipTapped:(id)arg1;
- (void)private_nextTapped:(id)arg1;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFlowToken:(id)arg1 subtaskID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 nextLabel:(id)arg5 skipLabel:(id)arg6 itemsDataViewController:(id)arg7 delegate:(id)arg8;

@end

