//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTAdPlayerOverlayProtocol-Protocol.h"
#import "YTRendererController-Protocol.h"
#import "YTVideoPlayerOverlayProtocol-Protocol.h"

@class NSString;
@protocol YTAdVideoPlayerOverlayDelegate;

@protocol YTAdVideoPlayerOverlayProtocol <YTVideoPlayerOverlayProtocol, YTAdPlayerOverlayProtocol, YTRendererController>
@property(nonatomic) __weak id <YTAdVideoPlayerOverlayDelegate> adsDelegate;
- (void)setContentVideoID:(NSString *)arg1;

@optional
- (void)updateAdWithPodPosition:(int)arg1 podLength:(int)arg2 podRemainingTime:(double)arg3 adDuration:(double)arg4;
@end

