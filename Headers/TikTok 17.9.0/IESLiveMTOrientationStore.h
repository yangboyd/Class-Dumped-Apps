//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, LiveRoomModel;
@protocol HTSLiveViewHierarchyProvider, IESLiveMTStreamPlayerProvider, IESLiveSettings;

@interface IESLiveMTOrientationStore : NSObject
{
    _Bool _isUserInteracting;
    _Bool _canSwitchToFullScreen;
    LiveRoomModel *_room;
    long long _orientation;
    HTSEventContext *_trackContext;
    id <IESLiveSettings> _settings;
    id <IESLiveMTStreamPlayerProvider> _streamPlayer;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveMTStreamPlayerProvider> streamPlayer; // @synthesize streamPlayer=_streamPlayer;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(readonly, nonatomic) _Bool canSwitchToFullScreen; // @synthesize canSwitchToFullScreen=_canSwitchToFullScreen;
@property(nonatomic) _Bool isUserInteracting; // @synthesize isUserInteracting=_isUserInteracting;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (_Bool)p_canDisplayFullScreenButton;
- (_Bool)canHideComponentsInCurrentRoom;
- (_Bool)canShowPotraitFullScreenItem;
- (id)initWithRoom:(id)arg1 trackContext:(id)arg2 canSwitchToFullScreen:(_Bool)arg3;

@end

