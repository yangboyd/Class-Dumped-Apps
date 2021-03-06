//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;

@protocol SPTCanvasContentLayerViewControllerViewModelDelegate <NSObject>
- (void)hideOverlay;
- (void)showOverlay;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)hideAttributionView;
- (void)showAttributionView;
- (void)didLoadVideoPlayer;
- (void)willLoadVideoPlayer;
- (void)removeVideoPlayerView;
- (void)addVideoPlayerView:(UIView *)arg1;
- (void)updateArtistAvatarImage:(UIImage *)arg1 artistName:(NSString *)arg2;
- (void)updateCanvasImage:(UIImage *)arg1;
@end

