//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCContextSnapViewMetrics, UIView;
@protocol SCContextPresenterDelegate, SCSizeChangeAnnouncingView;

@protocol SCContextPresenting <NSObject>
@property(readonly, nonatomic) _Bool swipeUpContentPresented;
@property(nonatomic) __weak id <SCContextPresenterDelegate> delegate;
- (_Bool)willSwipeToContextCards;
- (SCContextSnapViewMetrics *)snapViewMetrics;
- (void)detatchSwipeUpGestureFromView:(UIView *)arg1;
- (void)attachSwipeUpGestureToView:(UIView *)arg1;
- (_Bool)cardsPresented;
- (void)dismissSwipeUpContentIfNecessaryAnimated:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (void)contextLayerWillFullyAppear;
- (UIView<SCSizeChangeAnnouncingView> *)contextCTAView;
@end

