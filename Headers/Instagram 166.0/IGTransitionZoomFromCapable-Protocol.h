//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class UIView;
@protocol IGIntentTransitionFocusItem, UIViewControllerContextTransitioning;

@protocol IGTransitionZoomFromCapable <NSObject>
- (void)prepareTransitionZoomWithContext:(id <UIViewControllerContextTransitioning>)arg1 completionHandler:(void (^)(void))arg2;
- (UIView *)transitionZoomViewFromItem:(id <IGIntentTransitionFocusItem>)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
@end

