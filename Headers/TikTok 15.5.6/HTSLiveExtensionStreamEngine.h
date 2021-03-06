//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveMediaStreamEngine-Protocol.h"
#import "IESLiveNewPlayerControllerDelegate-Protocol.h"

@class HTSLiveRoomExtensionCommunicator, IESLiveAnchorIndicatorView, IESLiveNewPlayerController, LiveRoomModel, NSString, UIView;
@protocol HTSLiveMediaStreamEngineDelegate, HTSLivePluginLayoutMachineProvider, HTSLiveSmallGiftAction, HTSLiveUserEnterAction, HTSLiveViewHierarchyProvider, IESLiveEnvironment;

@interface HTSLiveExtensionStreamEngine : NSObject <IESLiveNewPlayerControllerDelegate, HTSLiveMediaStreamEngine>
{
    _Bool _started;
    id <HTSLiveMediaStreamEngineDelegate> _delegate;
    LiveRoomModel *_room;
    IESLiveNewPlayerController *_playerController;
    UIView *_backgroundView;
    HTSLiveRoomExtensionCommunicator *_extCommunicator;
    IESLiveAnchorIndicatorView *_indicatorView;
    id <HTSLiveSmallGiftAction> _giftDispatcher;
    id <HTSLiveUserEnterAction> _userEnterDispatcher;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <IESLiveEnvironment> _appTarget;
    long long _engineState;
    struct CGSize _mediaSize;
}

@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) long long engineState; // @synthesize engineState=_engineState;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) __weak id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <HTSLiveUserEnterAction> userEnterDispatcher; // @synthesize userEnterDispatcher=_userEnterDispatcher;
@property(retain, nonatomic) id <HTSLiveSmallGiftAction> giftDispatcher; // @synthesize giftDispatcher=_giftDispatcher;
@property(nonatomic) __weak IESLiveAnchorIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) HTSLiveRoomExtensionCommunicator *extCommunicator; // @synthesize extCommunicator=_extCommunicator;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IESLiveNewPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(nonatomic) __weak id <HTSLiveMediaStreamEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldMoveUpPlayerView;
- (id)previewView;
- (void)applyEffectBackgroundBehindPlayerView;
- (void)applyBlurMaskToView:(id)arg1;
- (id)createBackgroundView;
- (void)player:(id)arg1 mediaSizeDidChange:(struct CGSize)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(unsigned long long)arg2;
- (void)changePlayerContentType;
- (void)changePlayerContentFrame;
- (void)handleExtStreamState;
- (void)loadLivePlayer;
- (void)stopLiveStream;
- (void)setupBackView;
- (void)pr_addIndicatorView;
- (void)startLiveStreamIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

