//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIViewController (BDPNavigation)
+ (void)load;
- (_Bool)bdp_isViewLayoutBelowNavigationBar;
- (void)bdp_resizeFakeNavigationBarBG;
- (struct CGRect)bdp_getNavigationBarBgRect;
@property(retain, nonatomic) UIView *bdp_fakeNavigationBarBG;
- (id)_bdp_fakeNavigationBarBG;
@property(nonatomic) _Bool bdp_shouldFakeNavigationBarBG;
- (void)bdp_tryAddFakeNavigationBarBG;
- (void)bdp_viewDidLayoutSubviews;
- (void)bdp_viewWillLayoutSubviews;
@end

