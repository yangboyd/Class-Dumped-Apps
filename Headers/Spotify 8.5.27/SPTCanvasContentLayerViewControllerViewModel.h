//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasContentLayerImagePreloaderDelegate-Protocol.h"
#import "SPTCanvasContentLayerVideoPlaybackObserverDelegate-Protocol.h"
#import "SPTCanvasContentLayerVideoPreloaderDelegate-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"

@class NSString, SPTCanvasContentLayerImagePreloader, SPTCanvasContentLayerVideoPlayerLoader, SPTCanvasContentLayerVideoPreloader, SPTCanvasImageResolver, SPTCanvasTooltipPresentationManager, SPTPlayerTrack;
@protocol SPTCanvasContentLayerViewControllerViewModelDelegate, SPTCanvasContentLayerViewControllerViewModelLoadDelegate, SPTCanvasIdleMonitorObserverDelegate, SPTCanvasModel, SPTLinkDispatcher, SPTVideoFeaturePlayerFactory, SPTVideoURLAssetLoader;

@interface SPTCanvasContentLayerViewControllerViewModel : NSObject <SPTCanvasContentLayerVideoPlaybackObserverDelegate, SPTCanvasContentLayerVideoPreloaderDelegate, SPTCanvasContentLayerImagePreloaderDelegate, SPTNowPlayingContainerIdleMonitorObserver>
{
    id <SPTCanvasModel> _canvasModel;
    SPTPlayerTrack *_track;
    id <SPTCanvasContentLayerViewControllerViewModelDelegate> _delegate;
    id <SPTCanvasContentLayerViewControllerViewModelLoadDelegate> _loadDelegate;
    id <SPTVideoFeaturePlayerFactory> _videoPlayerFactory;
    id <SPTVideoURLAssetLoader> _videoAssetLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTCanvasImageResolver *_imageResolver;
    SPTCanvasTooltipPresentationManager *_tooltipManager;
    SPTCanvasContentLayerImagePreloader *_avatarLoader;
    SPTCanvasContentLayerImagePreloader *_imagePreloader;
    SPTCanvasContentLayerVideoPreloader *_videoPreloader;
    SPTCanvasContentLayerVideoPlayerLoader *_videoPlayerLoader;
    id <SPTCanvasIdleMonitorObserverDelegate> _idleMonitorDelegate;
}

+ (_Bool)hasVideoContent:(id)arg1;
@property(nonatomic) __weak id <SPTCanvasIdleMonitorObserverDelegate> idleMonitorDelegate; // @synthesize idleMonitorDelegate=_idleMonitorDelegate;
@property(retain, nonatomic) SPTCanvasContentLayerVideoPlayerLoader *videoPlayerLoader; // @synthesize videoPlayerLoader=_videoPlayerLoader;
@property(retain, nonatomic) SPTCanvasContentLayerVideoPreloader *videoPreloader; // @synthesize videoPreloader=_videoPreloader;
@property(retain, nonatomic) SPTCanvasContentLayerImagePreloader *imagePreloader; // @synthesize imagePreloader=_imagePreloader;
@property(retain, nonatomic) SPTCanvasContentLayerImagePreloader *avatarLoader; // @synthesize avatarLoader=_avatarLoader;
@property(readonly, nonatomic) SPTCanvasTooltipPresentationManager *tooltipManager; // @synthesize tooltipManager=_tooltipManager;
@property(readonly, nonatomic) SPTCanvasImageResolver *imageResolver; // @synthesize imageResolver=_imageResolver;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTVideoURLAssetLoader> videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(readonly, nonatomic) id <SPTVideoFeaturePlayerFactory> videoPlayerFactory; // @synthesize videoPlayerFactory=_videoPlayerFactory;
@property(nonatomic) __weak id <SPTCanvasContentLayerViewControllerViewModelLoadDelegate> loadDelegate; // @synthesize loadDelegate=_loadDelegate;
@property(nonatomic) __weak id <SPTCanvasContentLayerViewControllerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) id <SPTCanvasModel> canvasModel; // @synthesize canvasModel=_canvasModel;
- (void).cxx_destruct;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
@property(readonly, nonatomic) _Bool hasVideoContent;
- (void)didFailToPreloadImageForCanvasModel:(id)arg1 withError:(id)arg2;
- (void)didPreloadImageForCanvasModel:(id)arg1;
- (void)willPreloadImageForCanvasModel:(id)arg1;
- (void)didFailToPreloadVideoForCanvasModel:(id)arg1 withError:(id)arg2;
- (void)didPreloadVideoForCanvasModel:(id)arg1;
- (void)willPreloadVideoForCanvasModel:(id)arg1;
- (void)didFailToLoadVideoForCanvasModel:(id)arg1 withError:(id)arg2;
- (void)didLoadVideoForCanvasModel:(id)arg1;
- (void)willLoadVideoForCanvasModel:(id)arg1;
- (void)didFailToRenderViewModel;
- (void)removeVideoPlayerView;
- (void)addVideoPlayerView;
- (void)removeContent;
- (void)addContent;
- (void)dismissToolTipFromViewController:(id)arg1 forceDismiss:(_Bool)arg2;
- (void)presentToolTipFromViewController:(id)arg1;
- (void)loadVideoPlayerWithVideoPreloaderResult:(id)arg1;
- (void)loadVideoPlayer;
- (id)preloadVideo;
- (void)loadImage;
- (id)preloadImage;
- (void)loadAvatarImage;
- (id)preloadContent;
- (void)navigateToArtistattribution;
- (id)initWithCanvasModel:(id)arg1 track:(id)arg2 videoPlayerFactory:(id)arg3 videoAssetLoader:(id)arg4 imageResolver:(id)arg5 linkDispatcher:(id)arg6 idleMonitorDelegate:(id)arg7 tooltipManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

