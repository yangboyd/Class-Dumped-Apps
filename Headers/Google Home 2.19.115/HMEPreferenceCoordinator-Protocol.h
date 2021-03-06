//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIBarButtonItem, UINavigationController, UIViewController;
@protocol HMEPreferenceCoordinatorDelegate;

@protocol HMEPreferenceCoordinator <NSObject>
@property(nonatomic) __weak id <HMEPreferenceCoordinatorDelegate> delegate;
@property(readonly, nonatomic) UIViewController *preferenceViewController;
- (void)presentWithCloseButtonInViewController:(UIViewController *)arg1;
- (void)presentInViewController:(UIViewController *)arg1;
- (void)pushInNavigationController:(UINavigationController *)arg1 withExitButton:(UIBarButtonItem *)arg2 actionBlock:(void (^)(long long))arg3;
@end

