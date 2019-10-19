//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastDeviceStatusListener-Protocol.h"

@class GCKCastSession, GCKError, NSArray, NSDictionary;

@protocol GCKCastDeviceStatusGoogleOnlyListener <GCKCastDeviceStatusListener>

@optional
- (void)castSession:(GCKCastSession *)arg1 didFailToUpdateToDevices:(NSArray *)arg2 error:(GCKError *)arg3;
- (void)castSession:(GCKCastSession *)arg1 didUpdateDevicesWithFailedToMoveDeviceIDs:(NSArray *)arg2;
- (void)castSession:(GCKCastSession *)arg1 didUpdateTransferableDevicesList:(NSDictionary *)arg2;
- (void)castSession:(GCKCastSession *)arg1 didUpdateExpandableDevicesList:(NSDictionary *)arg2;
@end

