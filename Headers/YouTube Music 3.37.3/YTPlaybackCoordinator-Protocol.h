//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTPlayerView;
@protocol MLViewportSizeProvider, YTCorePlaybackController, YTCorePlaybackControllerDelegate, YTPlaybackCoordinatorObserver, YTPlayerOverlayFactory, YTResponder;

@protocol YTPlaybackCoordinator <NSObject>
- (void)removePlaybackCoordinatorObserver:(id <YTPlaybackCoordinatorObserver>)arg1;
- (void)addPlaybackCoordinatorObserver:(id <YTPlaybackCoordinatorObserver>)arg1;
- (id <YTCorePlaybackController>)newControllerWithParentResponder:(id <YTResponder>)arg1 overlayFactory:(id <YTPlayerOverlayFactory>)arg2 playerView:(YTPlayerView *)arg3 playbackControllerDelegate:(id <YTCorePlaybackControllerDelegate>)arg4 viewportSizeProvider:(id <MLViewportSizeProvider>)arg5;
@end

