//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YTMTunederItemController;

@protocol YTMTunederItemControllerDelegate <NSObject>
- (void)tunederItemController:(YTMTunederItemController *)arg1 playbackControllerCurrentVideoMediaTimeDidChange:(double)arg2;
- (void)tunederItemController:(YTMTunederItemController *)arg1 stateChangedTo:(unsigned long long)arg2;
- (void)tunederItemController:(YTMTunederItemController *)arg1 playbackControllerWillFailWithError:(NSError *)arg2;
@end

