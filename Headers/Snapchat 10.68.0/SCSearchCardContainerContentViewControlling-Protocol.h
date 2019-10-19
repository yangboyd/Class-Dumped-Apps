//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSearchCardContainerContentViewControllerContext, UIColor, UIView;

@protocol SCSearchCardContainerContentViewControlling <NSObject>
@property(retain, nonatomic) SCSearchCardContainerContentViewControllerContext *cardContainerContext;

@optional
- (UIView *)tabBarActionButon;
- (UIColor *)tabBarTintColor;
- (long long)tabBarInterfaceStyle;
- (_Bool)shouldDisableTopGradientViewAlpha;
- (_Bool)shouldEnableTabSwitchGesture;
- (void)cardContainerTabDidSwitchFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 gesture:(long long)arg3;
- (void)cardContainerTabDidUpdateInteractiveChangeProgress:(double)arg1;
- (void)cardContainerTabDidCancelInteractiveChange;
- (void)cardContainerTabDidFinishInteractiveChange;
- (void)cardContainerTabWillStartInteractiveChangeFromSelectedIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)refreshByPullToRefresh;
@end

