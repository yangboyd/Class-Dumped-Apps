//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSIndexSet, UIView, UIViewController, YTICommand, YTIWatchNextResponse, YTPlaybackData, YTPlayerResponse, YTWatchTransition;
@protocol YTAutonavControllerProtocol, YTNGWatchViewControllerProtocol, YTWatchPlayerViewControllerDelegate;

@protocol YTNGWatchQueueObserver <NSObject>

@optional
- (void)newScreenLoggingStarted;
- (void)updateCurrentWatchTransition:(YTWatchTransition *)arg1;
- (void)updateCurrentWatchTransitionNavigationEndpoint:(YTICommand *)arg1;
- (void)setAutonavController:(id <YTAutonavControllerProtocol>)arg1;
- (void)didUpdateLoopEnabled:(_Bool)arg1;
- (void)playbackControllerDidReceivePlayerResponse:(YTPlayerResponse *)arg1;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(YTPlaybackData *)arg1;
- (void)playbackControllerContentMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerCurrentVideoAspectRatioDidChange:(double)arg1;
- (void)playbackControllerWillFailWithError:(NSError *)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerStateDidChange;
- (_Bool)isFullScreen;
- (void)showSmallScreenWithCompletion:(void (^)(void))arg1;
- (void)showFullScreen;
- (void)didClearWatchQueue;
- (void)didCreateDescriptionDetailsViewController:(UIViewController *)arg1 forIndex:(long long)arg2;
- (void)didReceiveWatchNextResponse:(YTIWatchNextResponse *)arg1 forIndex:(long long)arg2;
- (void)didCreateWatchViewController:(UIViewController<YTNGWatchViewControllerProtocol> *)arg1 forIndex:(long long)arg2;
- (void)didClearPlayerViewControllerWithThumbnailView:(UIView *)arg1 forIndex:(unsigned long long)arg2;
- (void)didSetPlayerViewController:(UIViewController<YTWatchPlayerViewControllerDelegate> *)arg1 forIndex:(long long)arg2;
- (void)didSetCurrentIndexFromIndex:(long long)arg1 toIndex:(long long)arg2 withInPlaceUpdate:(_Bool)arg3;
- (void)didUpdateItemsWithInsertionIndexes:(NSIndexSet *)arg1 deletionIndexes:(NSIndexSet *)arg2;
@end

