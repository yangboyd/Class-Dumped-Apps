//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIStackView, UIView;
@protocol UIViewControllerTransitioningDelegate;

@interface _TtC7HuluAPI26LoginOptionsViewController : UIViewController
{
    // Error parsing type: , name: $__lazy_storage_$_loginWithHuluButtonGradient
    // Error parsing type: , name: stackView
    // Error parsing type: , name: contentView
    // Error parsing type: , name: loginWithHuluButton
    // Error parsing type: , name: loginWithTvProviderButton
    // Error parsing type: , name: delegate
    // Error parsing type: , name: transitionHandler
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) _Bool prefersNavigationBarHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loginWithTvProvider:(id)arg1;
- (void)loginWithHulu:(id)arg1;
- (void)viewDidLayoutSubviews;
@property(nonatomic) struct CGSize preferredContentSize;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic) long long modalPresentationStyle;
@property(nonatomic, retain) id <UIViewControllerTransitioningDelegate> transitioningDelegate;
@property(nonatomic, retain) UIButton *loginWithTvProviderButton; // @synthesize loginWithTvProviderButton;
@property(nonatomic, retain) UIButton *loginWithHuluButton; // @synthesize loginWithHuluButton;
@property(nonatomic, retain) UIView *contentView; // @synthesize contentView;
@property(nonatomic, retain) UIStackView *stackView; // @synthesize stackView;

@end

