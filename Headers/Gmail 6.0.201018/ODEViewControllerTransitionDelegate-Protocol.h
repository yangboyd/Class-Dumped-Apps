//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSException, ODETransitionDirector, ODEViewControllerTransition, UIViewController;

@protocol ODEViewControllerTransitionDelegate <NSObject>
- (void)transition:(ODEViewControllerTransition *)arg1 willCompleteTransition:(_Bool)arg2 withDirector:(ODETransitionDirector *)arg3 didThrowException:(NSException *)arg4;
- (void)transitionDidTerminate:(ODEViewControllerTransition *)arg1 dismissedViewController:(UIViewController *)arg2;
@end

