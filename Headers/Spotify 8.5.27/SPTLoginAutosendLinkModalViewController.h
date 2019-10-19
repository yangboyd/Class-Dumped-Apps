//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UITapGestureRecognizer, UIView;
@protocol SPTLoginAutosendLinkModalViewControllerDelegate;

@interface SPTLoginAutosendLinkModalViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    id <SPTLoginAutosendLinkModalViewControllerDelegate> _delegate;
    UIView *_dimmedBackground;
    UIView *_contentContainer;
    UIView *_contentView;
    NSLayoutConstraint *_containerViewYOffsetConstraint;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *containerViewYOffsetConstraint; // @synthesize containerViewYOffsetConstraint=_containerViewYOffsetConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) UIView *dimmedBackground; // @synthesize dimmedBackground=_dimmedBackground;
@property(nonatomic) __weak id <SPTLoginAutosendLinkModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)didTapDimmedBackground:(id)arg1;
- (void)roundTopCorners;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

