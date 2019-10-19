//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaSwipeInteractionController, UIView;

@protocol SCOperaSwipeInteractionControllerDelegate <NSObject>
- (_Bool)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 shouldBeginPanWithDirection:(unsigned long long)arg2;
- (void)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 didFinishInteractionWithDelegateViewVisible:(_Bool)arg2;
- (_Bool)didTouchLiveAreaAtLocation:(struct CGPoint)arg1 delegateView:(UIView *)arg2;
- (void)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 didStartInteractionWithDelegateViewVisible:(_Bool)arg2;
- (void)swipeInteractionController:(SCOperaSwipeInteractionController *)arg1 didUpdateVisiblePercent:(double)arg2;
@end

