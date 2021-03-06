//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBar.h>

@class AWETabBarController, NSArray, UIView;

@interface AWETabBar : UITabBar
{
    AWETabBarController *_tabBarController;
    UIView *_backgroundView;
    double _desiredHeight;
    NSArray *_tabBarButtonArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tabBarButtonArray; // @synthesize tabBarButtonArray=_tabBarButtonArray;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak AWETabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
- (id)backgroundViewColor;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)tabBarButtonFromTabBarSubviews:(id)arg1;
- (id)sortedSubviews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

