//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCInteractiveProfileSwipeTransitionController, UIGestureRecognizer, UIPanGestureRecognizer, UIViewController;
@protocol SCProfileViewController;

@protocol SCInteractiveProfileSwipeTransitionControllerDataSource <NSObject>
- (UIViewController<SCProfileViewController> *)presentedViewControllerWithSwipeTransitionController:(SCInteractiveProfileSwipeTransitionController *)arg1;

@optional
- (_Bool)swipeTransitionController:(SCInteractiveProfileSwipeTransitionController *)arg1 shouldRecognizerGestureSimultaneously:(UIGestureRecognizer *)arg2;
- (_Bool)shouldBeginTransitionWithSwipeTransitionController:(SCInteractiveProfileSwipeTransitionController *)arg1 gestureRecognizer:(UIPanGestureRecognizer *)arg2;
@end

