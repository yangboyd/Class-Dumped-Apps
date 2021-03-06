//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, SMASHNavigationRequest, UINavigationController, UIViewController;

@protocol SMASHNavigationStackDelegate <NSObject>
@property(retain, nonatomic) UINavigationController *navigationController;
- (id)routingRuleForRequest:(SMASHNavigationRequest *)arg1 pageTypeOnly:(_Bool)arg2;
- (NSString *)handle:(SMASHNavigationRequest *)arg1 withObligatoryHandlersOnly:(_Bool)arg2;
- (NSURL *)navigationOriginURL:(UIViewController *)arg1;
- (UIViewController *)visibleViewController;
- (unsigned long long)viewControllersCountInStack;
- (_Bool)isInModalState;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)popToViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(NSArray *)arg1;
- (NSArray *)viewControllers;
- (UIViewController *)topViewController;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
@end

