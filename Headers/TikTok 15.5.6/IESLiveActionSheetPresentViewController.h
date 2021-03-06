//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class IESLiveActionSheetPresentAnimator, NSString;

@interface IESLiveActionSheetPresentViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    CDUnknownBlockType _willDismissHandler;
    CDUnknownBlockType _dismissHandler;
    CDUnknownBlockType _presentHandler;
    IESLiveActionSheetPresentAnimator *_animator;
}

@property(retain, nonatomic) IESLiveActionSheetPresentAnimator *animator; // @synthesize animator=_animator;
@property(copy, nonatomic) CDUnknownBlockType presentHandler; // @synthesize presentHandler=_presentHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) CDUnknownBlockType willDismissHandler; // @synthesize willDismissHandler=_willDismissHandler;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)transitioningDelegate;
- (long long)modalPresentationStyle;
- (void)setBackgroundViewHidden:(_Bool)arg1;
- (id)initWithView:(id)arg1 viewSize:(struct CGSize)arg2 backgroundView:(id)arg3 landscape:(_Bool)arg4;
- (id)initWithView:(id)arg1 viewSize:(struct CGSize)arg2 backgroundView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

