//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PHSChannel, UIViewController;

@protocol HUBHostTabBarNavigationService <NSObject>
- (long long)selectedTab;
- (void)switchToTab:(long long)arg1;
- (void)subscribeToUserTappedTabWithChannel:(PHSChannel *)arg1;
- (void)subscribeToViewControllerChangesWithChannel:(PHSChannel *)arg1;
@property(nonatomic, readonly) UIViewController *viewController;
@end

