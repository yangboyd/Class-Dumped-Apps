//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWETabBarButton, NSArray, UIColor, UIView;

@protocol AWETabBarControllerProtocol <NSObject>
+ (id)tabBarControllerWithButtons:(NSArray *)arg1;
@property(copy, nonatomic) CDUnknownBlockType didSelectButtonType;
@property(copy, nonatomic) CDUnknownBlockType shouldSelectButtonType;
@property(nonatomic) long long selectedButtonType;
@property(nonatomic) double tabBarHeight;
@property(readonly, copy, nonatomic) UIView *backgroundView;
@property(readonly, copy, nonatomic) NSArray *buttons;
- (void)setTabBarBlur:(_Bool)arg1;
- (void)reloadWithButtons:(NSArray *)arg1;
- (AWETabBarButton *)buttonForType:(long long)arg1;
- (void)updateSeparatorLineColor:(UIColor *)arg1;
- (void)showSeparatorLine:(_Bool)arg1;
- (void)updateSelectedButtonType:(long long)arg1;
@end

