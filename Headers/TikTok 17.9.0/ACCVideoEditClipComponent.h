//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCFeatureComponent.h"

#import "AWEVideoClipViewControllerDelegate-Protocol.h"

@class ACCVideoEditorReplyViaVideoViewModel, AWEBigToSmallModalDelegate;
@protocol ACCEditTransitionServiceProtocol, ACCEditViewContainer, ACCInfoStickerContainerComponentProtocol, ACCPollStickerContainerComponentProtocol, ACCTextStickerContainerComponentProtocol, IESServiceProvider;

@interface ACCVideoEditClipComponent : ACCFeatureComponent <AWEVideoClipViewControllerDelegate>
{
    id <IESServiceProvider> _serviceProvider;
    id <ACCPollStickerContainerComponentProtocol> _pollStickerContainerComponent;
    id <ACCInfoStickerContainerComponentProtocol> _infoStickerContainerComponent;
    id <ACCTextStickerContainerComponentProtocol> _textStickerContainerComponent;
    AWEBigToSmallModalDelegate *_clipVCTransitioningDelegate;
    id <ACCEditViewContainer> _viewContainer;
    id <ACCEditTransitionServiceProtocol> _transitionService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ACCEditTransitionServiceProtocol> transitionService; // @synthesize transitionService=_transitionService;
@property(retain, nonatomic) id <ACCEditViewContainer> viewContainer; // @synthesize viewContainer=_viewContainer;
@property(retain, nonatomic) AWEBigToSmallModalDelegate *clipVCTransitioningDelegate; // @synthesize clipVCTransitioningDelegate=_clipVCTransitioningDelegate;
@property(readonly, nonatomic) __weak id <ACCTextStickerContainerComponentProtocol> textStickerContainerComponent; // @synthesize textStickerContainerComponent=_textStickerContainerComponent;
@property(readonly, nonatomic) __weak id <ACCInfoStickerContainerComponentProtocol> infoStickerContainerComponent; // @synthesize infoStickerContainerComponent=_infoStickerContainerComponent;
@property(readonly, nonatomic) __weak id <ACCPollStickerContainerComponentProtocol> pollStickerContainerComponent; // @synthesize pollStickerContainerComponent=_pollStickerContainerComponent;
- (void)setServiceProvider:(id)arg1;
- (id)serviceProvider;
- (void)didFinishClipEdit;
- (id)filterViewModel;
- (id)autoCaptionViewModel;
- (id)voiceChangerViewModel;
- (id)viewModel;
- (id)videoDubViewModel;
@property(readonly, nonatomic) __weak ACCVideoEditorReplyViaVideoViewModel *replyViaVideoViewModel;
- (id)playerViewModel;
- (id)publishModel;
- (id)playerService;
- (id)player;
- (void)removeAllEdits;
- (void)removeVideoClipEdits;
- (_Bool)hasVideoClipEdits;
- (_Bool)hasEdits;
- (void)gotoVCFromWarning:(_Bool)arg1;
- (void)videoClipClicked;
- (id)clipBarItem;
- (_Bool)shouldShowClipVideo;
- (unsigned long long)preferredLoadPhase;
- (void)addBarItemToToolBar;
- (void)componentDidMount;
- (id)autoInjectComponentDictionaryOfinfoStickerContainerComponent;
- (id)autoInjectComponentDictionaryOfpollStickerContainerComponent;
- (id)autoInjectComponentDictionaryOftextStickerContainerComponent;

@end

