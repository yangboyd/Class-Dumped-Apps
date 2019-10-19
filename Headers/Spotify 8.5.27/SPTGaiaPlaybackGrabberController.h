//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"

@class GaiaMessageBarController, NSArray, NSString, UIApplication;
@protocol SPTGaiaConnectManager, SPTGaiaLockScreenControlsStateProvider, SPTPlayer;

@interface SPTGaiaPlaybackGrabberController : NSObject <SPTGaiaConnectManagerObserver>
{
    id <SPTPlayer> _player;
    GaiaMessageBarController *_messageBarController;
    NSArray *_grabbingRouteTypes;
    double _lastApplicationActivationTimestamp;
    id <SPTGaiaLockScreenControlsStateProvider> _lockScreenControlsStateProvider;
    UIApplication *_application;
    id <SPTGaiaConnectManager> _connectManager;
}

@property(retain, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) id <SPTGaiaLockScreenControlsStateProvider> lockScreenControlsStateProvider; // @synthesize lockScreenControlsStateProvider=_lockScreenControlsStateProvider;
@property(nonatomic) double lastApplicationActivationTimestamp; // @synthesize lastApplicationActivationTimestamp=_lastApplicationActivationTimestamp;
@property(copy, nonatomic) NSArray *grabbingRouteTypes; // @synthesize grabbingRouteTypes=_grabbingRouteTypes;
@property(retain, nonatomic) GaiaMessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)grabPlayback;
- (_Bool)activeDeviceIsCar;
- (_Bool)activeDeviceExists;
- (void)respondToApplicationDidBecomeActive;
- (_Bool)currentAudioRouteShouldGrabPlayback:(id *)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)audioRouteChangedNotification:(id)arg1;
- (void)updateActiveDeviceGrabberIfNeeded;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)dealloc;
- (id)initWithLockScreenControlsStateProvider:(id)arg1 messageBarController:(id)arg2 player:(id)arg3 application:(id)arg4 connectManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

