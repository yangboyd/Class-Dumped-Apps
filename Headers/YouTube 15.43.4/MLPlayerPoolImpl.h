//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLPlayerPool-Protocol.h>
#import <Module_Framework/MLQueuePlayerViewProvider-Protocol.h>
#import <Module_Framework/YTHotConfigObserver-Protocol.h>

@class GIMMe, HAMRenderLoop, MLHAMAudioEngineProvider, MLPIPController, MLStreamStore, NSString, UIView, YTIHamplayerHotConfig, YTIIosAvPlayerHotConfig, YTIIosMediaHotConfig;
@protocol MLHAMPlayerViewProtocol, MLPlayer, MLPlayerViewFactory, MLPlayerViewProtocol;

@interface MLPlayerPoolImpl : NSObject <YTHotConfigObserver, MLQueuePlayerViewProvider, MLPlayerPool>
{
    id <MLPlayerViewFactory> _playerViewFactory;
    MLPIPController *_pipController;
    MLStreamStore *_streamStore;
    MLHAMAudioEngineProvider *_audioEngineProvider;
    YTIHamplayerHotConfig *_hamplayerHotConfig;
    YTIIosAvPlayerHotConfig *_AVPlayerHotConfig;
    YTIIosMediaHotConfig *_mediaHotConfig;
    id <MLPlayer> _activePlayer;
    HAMRenderLoop *_hamRenderLoop;
    UIView<MLHAMPlayerViewProtocol> *_hamPlayerView;
    UIView<MLPlayerViewProtocol> *_renderingView;
    CDUnknownBlockType _renderLoopCreationBlock;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(copy, nonatomic) CDUnknownBlockType renderLoopCreationBlock; // @synthesize renderLoopCreationBlock=_renderLoopCreationBlock;
@property(readonly, nonatomic) UIView<MLPlayerViewProtocol> *renderingView; // @synthesize renderingView=_renderingView;
- (void)createRenderLoop;
- (void)createHamResourcesForVideo:(id)arg1 playerConfig:(id)arg2;
- (id)renderLoop;
- (id)playerViewForVideo:(id)arg1 playerConfig:(id)arg2;
- (_Bool)canUsePlayerView:(id)arg1 playVideo:(id)arg2 playerConfig:(id)arg3;
- (void)hotConfigDidChange:(id)arg1;
- (void)setActivePlayer:(id)arg1;
- (id)acquireQueuePlayerWithStickySettings:(id)arg1;
- (_Bool)canQueuePlayerPlayVideo:(id)arg1 playerConfig:(id)arg2;
- (id)acquirePlayerForVideo:(id)arg1 playerConfig:(id)arg2 stickySettings:(id)arg3;
- (void)prepare;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

