//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKCastDeviceControllerDelegate-Protocol.h"

@class BackdropRefreshChannel, GCKCastDeviceController, NSError, NSString, SetupCastDevice;
@protocol BackdropRefreshOperationDelegate;

@interface BackdropRefreshOperation : NSObject <GCKCastDeviceControllerDelegate>
{
    GCKCastDeviceController *_deviceController;
    BackdropRefreshChannel *_castChannel;
    NSError *_error;
    SetupCastDevice *_device;
    id <BackdropRefreshOperationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BackdropRefreshOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SetupCastDevice *device; // @synthesize device=_device;
- (void)deviceController:(id)arg1 didDisconnectFromApplicationWithError:(id)arg2;
- (void)deviceController:(id)arg1 didFailToConnectToApplicationWithError:(id)arg2;
- (void)deviceController:(id)arg1 didConnectToApplication:(id)arg2 sessionID:(id)arg3 launchedApplication:(_Bool)arg4;
- (void)deviceController:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)deviceController:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)deviceControllerDidConnect:(id)arg1;
- (void)didSendUpdateMessage;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

