//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOPanelViewController, UIGestureRecognizer, UIView, UIViewController;

@protocol GOOPanelViewControllerDelegate <NSObject>

@optional
- (void)panelViewController:(GOOPanelViewController *)arg1 willDisplayStatusBarSnapshot:(UIView *)arg2;
- (void)panelViewController:(GOOPanelViewController *)arg1 didTrackPanGesture:(UIGestureRecognizer *)arg2 deltaX:(double)arg3;
- (void)panelViewController:(GOOPanelViewController *)arg1 didCloseChildViewController:(UIViewController *)arg2;
- (void)panelViewController:(GOOPanelViewController *)arg1 willCloseChildViewController:(UIViewController *)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)panelViewController:(GOOPanelViewController *)arg1 didOpenChildViewController:(UIViewController *)arg2;
- (void)panelViewController:(GOOPanelViewController *)arg1 willOpenChildViewController:(UIViewController *)arg2 animated:(_Bool)arg3 duration:(double)arg4;
@end

