//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController;

@protocol IESDragDismissViewControllerProtocol <NSObject>
@property(retain, nonatomic) UIView *baseView;

@optional
@property(nonatomic) struct CGPoint lastDismissPanGestureLocation;
@property(retain, nonatomic) UITapGestureRecognizer *dismissTapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissPanGesture;
- (void)dismissAnimated:(_Bool)arg1;
- (void)performDismissAnimated:(_Bool)arg1;
- (void)showOnView:(UIView *)arg1 initialLayoutBlock:(void (^)(void))arg2 targetLayoutBlock:(void (^)(void))arg3 animated:(_Bool)arg4;
- (_Bool)dragDismissViewController:(UIViewController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg3;
- (_Bool)dragDismissViewController:(UIViewController *)arg1 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg2;
@end

