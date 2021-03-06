//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCFeatureComponent.h"

#import "ACCVideoEditMusicPlayerDelegate-Protocol.h"

@class ACCEditPlayerViewModel, ACCVideoEditMusicViewModel, NSString;
@protocol ACCEditViewContainer, ACCInfoStickerContainerComponentProtocol, ACCPollStickerContainerComponentProtocol, ACCTextStickerContainerComponentProtocol, IESServiceProvider;

@interface ACCEditPlayerComponent : ACCFeatureComponent <ACCVideoEditMusicPlayerDelegate>
{
    _Bool _shouldObservePlayerTimeActionPerform;
    id <IESServiceProvider> _serviceProvider;
    id <ACCPollStickerContainerComponentProtocol> _pollStickerContainerComponent;
    id <ACCTextStickerContainerComponentProtocol> _textStickerContainerComponent;
    id <ACCInfoStickerContainerComponentProtocol> _infoStickerContainerComponent;
    id <ACCEditViewContainer> _viewContainer;
    ACCVideoEditMusicViewModel *_musicViewModel;
    ACCEditPlayerViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACCEditPlayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) ACCVideoEditMusicViewModel *musicViewModel; // @synthesize musicViewModel=_musicViewModel;
@property(nonatomic) _Bool shouldObservePlayerTimeActionPerform; // @synthesize shouldObservePlayerTimeActionPerform=_shouldObservePlayerTimeActionPerform;
@property(retain, nonatomic) id <ACCEditViewContainer> viewContainer; // @synthesize viewContainer=_viewContainer;
@property(readonly, nonatomic) __weak id <ACCInfoStickerContainerComponentProtocol> infoStickerContainerComponent; // @synthesize infoStickerContainerComponent=_infoStickerContainerComponent;
@property(readonly, nonatomic) __weak id <ACCTextStickerContainerComponentProtocol> textStickerContainerComponent; // @synthesize textStickerContainerComponent=_textStickerContainerComponent;
@property(readonly, nonatomic) __weak id <ACCPollStickerContainerComponentProtocol> pollStickerContainerComponent; // @synthesize pollStickerContainerComponent=_pollStickerContainerComponent;
- (void)setServiceProvider:(id)arg1;
- (id)serviceProvider;
- (id)videoData;
- (void)updateVideoData:(id)arg1 updateType:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)setVolumeForAudio:(float)arg1;
- (void)seekToTimeAndRender:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshAudioPlayer;
- (void)replaceAudioForPhotoVideo:(id)arg1;
- (void)replaceAudioForPhotoMovie:(id)arg1;
- (void)replaceAudio:(id)arg1;
- (void)play;
- (void)pause;
- (void)continuePlay;
- (void)clipMusic:(struct _HTSAudioRange)arg1;
- (id)publishModel;
- (id)editCutMusicViewModel;
- (id)autoCaptionViewModel;
- (id)playerService;
- (_Bool)isAllStickersInPlayer;
- (void)dismissPreviewEdge;
- (void)resetPlayerAndPreviewEdge;
- (void)p_bindViewModel;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidMount;
- (id)autoInjectComponentDictionaryOfinfoStickerContainerComponent;
- (id)autoInjectComponentDictionaryOftextStickerContainerComponent;
- (id)autoInjectComponentDictionaryOfpollStickerContainerComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

