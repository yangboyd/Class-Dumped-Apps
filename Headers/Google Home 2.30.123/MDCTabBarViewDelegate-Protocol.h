//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDCTabBarView, UITabBarItem;

@protocol MDCTabBarViewDelegate <NSObject>

@optional
- (void)tabBarView:(MDCTabBarView *)arg1 didSelectItem:(UITabBarItem *)arg2;
- (_Bool)tabBarView:(MDCTabBarView *)arg1 shouldSelectItem:(UITabBarItem *)arg2;
@end

