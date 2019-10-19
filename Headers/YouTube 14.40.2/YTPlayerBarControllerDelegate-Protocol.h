//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInlinePlayerBarAccessibilityDelegate.h"

@protocol YTPlayerBarControllerDelegate <YTInlinePlayerBarAccessibilityDelegate>
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)didEndPlayerBarScrubbing;
- (void)didScrubPlayerBarToTime:(double)arg1;
- (void)didStartPlayerBarScrubbing;
- (void)didPressPlayerBarNext;
- (void)didTogglePlayPause;
- (void)didPressLiveSync;
- (void)didPressToggleFullscreen;

@optional
- (_Bool)isCurrentVideoVerticallyCropped;
- (_Bool)isCurrentVideoVertical;
- (void)didPressCardboardButton;
- (void)didPressPlayerBarReplay;
@end

