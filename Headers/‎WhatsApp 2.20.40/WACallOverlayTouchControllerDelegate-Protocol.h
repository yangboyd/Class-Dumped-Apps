//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACallOverlayTouchController;

@protocol WACallOverlayTouchControllerDelegate <NSObject>
- (void)overlayTouchController:(WACallOverlayTouchController *)arg1 didEndDragAtPosition:(struct CGPoint)arg2 withOverlaySize:(struct CGSize)arg3 withinLayoutBounds:(struct CGRect)arg4;
- (struct CGPoint)overlayTouchController:(WACallOverlayTouchController *)arg1 positionWithSuggestedPosition:(struct CGPoint)arg2 withOverlaySize:(struct CGSize)arg3 withinLayoutBounds:(struct CGRect)arg4;
- (struct CGPoint)overlayTouchController:(WACallOverlayTouchController *)arg1 initialPositionForOverlaySize:(struct CGSize)arg2 withinLayoutBounds:(struct CGRect)arg3;
@end

