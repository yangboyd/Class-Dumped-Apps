//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol GOOUIViewController <NSObject>

@optional
@property(retain, nonatomic) UIView *footerView;
@property(retain, nonatomic) UIView *headerView;
- (_Bool)extendsToTopEdge;
- (_Bool)shouldAutomaticallyUpdateHeaderView;
- (void)footerViewDidDisappear:(_Bool)arg1;
- (void)footerViewWillDisappear:(_Bool)arg1;
- (void)footerViewDidAppear:(_Bool)arg1;
- (void)footerViewWillAppear:(_Bool)arg1;
- (void)headerViewDidDisappear:(_Bool)arg1;
- (void)headerViewWillDisappear:(_Bool)arg1;
- (void)headerViewDidAppear:(_Bool)arg1;
- (void)headerViewWillAppear:(_Bool)arg1;
- (void)controllerDidPop:(_Bool)arg1;
- (void)controllerWillPop:(_Bool)arg1;
- (void)controllerDidPush:(_Bool)arg1;
- (void)controllerWillPush:(_Bool)arg1;
- (void)viewportDidChangeAnimated:(_Bool)arg1 from:(struct CGRect)arg2 to:(struct CGRect)arg3;
- (void)animateViewportFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (void)viewportWillChangeAnimated:(_Bool)arg1 from:(struct CGRect)arg2 to:(struct CGRect)arg3;
- (void)loadFooterViewWithBounds:(struct CGRect)arg1;
- (void)loadHeaderViewWithBounds:(struct CGRect)arg1;
- (double)headerAnimationDuration;
- (double)transitionDuration;
- (long long)transitionTypeForFooter;
- (long long)transitionTypeFromHeader:(UIView *)arg1 toHeader:(UIView *)arg2;
- (long long)transitionTypeForHeader;
- (long long)transitionTypeForView;
- (_Bool)headerViewShowsHorizontalMargins;
- (long long)statusBarStyle;
- (_Bool)isTransientController;
- (_Bool)shouldCrossFadeFooterDuringOrientationChange;
- (_Bool)shouldCrossFadeHeaderDuringOrientationChange;
- (long long)headerViewType;
- (struct UIEdgeInsets)headerViewInsets;
- (_Bool)hidesHeaderView;
- (_Bool)hasView;
@end

