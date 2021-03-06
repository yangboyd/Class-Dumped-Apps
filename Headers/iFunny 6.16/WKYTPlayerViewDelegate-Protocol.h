//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class UIColor, UIView, WKYTPlayerView;

@protocol WKYTPlayerViewDelegate <NSObject>

@optional
- (void)playerViewIframeAPIDidFailedToLoad:(WKYTPlayerView *)arg1;
- (UIView *)playerViewPreferredInitialLoadingView:(WKYTPlayerView *)arg1;
- (UIColor *)playerViewPreferredWebViewBackgroundColor:(WKYTPlayerView *)arg1;
- (void)playerView:(WKYTPlayerView *)arg1 didPlayTime:(float)arg2;
- (void)playerView:(WKYTPlayerView *)arg1 receivedError:(long long)arg2;
- (void)playerView:(WKYTPlayerView *)arg1 didChangeToQuality:(long long)arg2;
- (void)playerView:(WKYTPlayerView *)arg1 didChangeToState:(long long)arg2;
- (void)playerViewDidBecomeReady:(WKYTPlayerView *)arg1;
@end

