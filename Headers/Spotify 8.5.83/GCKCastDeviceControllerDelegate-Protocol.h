//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKApplicationMetadata, GCKCastDeviceController, GCKDevice, GCKDeviceConfiguration, GCKDeviceInformation, GCKError, GCKMultizoneDevice, GCKMultizoneStatus, NSArray, NSDictionary, NSString;

@protocol GCKCastDeviceControllerDelegate <NSObject>

@optional
- (void)deviceController:(GCKCastDeviceController *)arg1 failedToMoveToDevices:(NSArray *)arg2 error:(GCKError *)arg3;
- (void)deviceController:(GCKCastDeviceController *)arg1 didUpdateSessionWithFailedToMoveDeviceIDs:(NSArray *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveAppDeviceID:(NSString *)arg2 certificate:(NSString *)arg3 signedData:(NSString *)arg4 forApplicationID:(NSString *)arg5;
- (void)deviceController:(GCKCastDeviceController *)arg1 didRemoveMultizoneDeviceWithID:(NSString *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didUpdateMultizoneDevice:(GCKMultizoneDevice *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didAddMultizoneDevice:(GCKMultizoneDevice *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveMultizoneStatus:(GCKMultizoneStatus *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveDeviceInformation:(GCKDeviceInformation *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveDeviceConfiguration:(GCKDeviceConfiguration *)arg2;
- (void)deviceControllerDidUpdateStatus:(GCKCastDeviceController *)arg1;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveAppAvailability:(NSDictionary *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didUpdateDevice:(GCKDevice *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveStandbyStatus:(long long)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveActiveInputStatus:(long long)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 volumeDidChangeToLevel:(float)arg2 isMuted:(_Bool)arg3;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveApplicationStatusText:(NSString *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didReceiveApplicationMetadata:(GCKApplicationMetadata *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didDisconnectFromApplicationWithError:(GCKError *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didFailToConnectToApplicationWithError:(GCKError *)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didConnectToApplication:(GCKApplicationMetadata *)arg2 sessionID:(NSString *)arg3 launchedApplication:(_Bool)arg4;
- (void)deviceController:(GCKCastDeviceController *)arg1 didResumeConnectionWithRejoin:(_Bool)arg2;
- (void)deviceController:(GCKCastDeviceController *)arg1 didDisconnectWithError:(GCKError *)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceController:(GCKCastDeviceController *)arg1 didFailToConnectWithError:(GCKError *)arg2;
- (void)deviceControllerDidConnect:(GCKCastDeviceController *)arg1;
@end

