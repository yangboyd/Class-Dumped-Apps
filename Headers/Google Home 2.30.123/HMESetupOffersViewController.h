//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupAnimationLayoutViewController.h"

@protocol HMESetupOffersViewControllerDelegate;

@interface HMESetupOffersViewController : HMESetupAnimationLayoutViewController
{
    id <HMESetupOffersViewControllerDelegate> _delegate;
}

+ (id)fallbackAnimation;
- (void).cxx_destruct;
@property(nonatomic) __weak id <HMESetupOffersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapSkip;
- (void)didTapNext;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 nextButtonText:(id)arg3 skipButtonText:(id)arg4 bodyAnimation:(id)arg5;

@end

