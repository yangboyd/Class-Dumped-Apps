//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP7Dropbox9DeviceAPI_-Protocol.h"

@interface _TtC7Dropbox17DeviceAPIMockImpl : NSObject <_TtP7Dropbox9DeviceAPI_>
{
    // Error parsing type: , name: deviceLimitsResult
    // Error parsing type: , name: deviceLimitsError
    // Error parsing type: , name: linkedDevicesResult
}

- (void).cxx_destruct;
- (void)unlinkWithMobileDeviceIds:(id)arg1 desktopDeviceIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getLinkedDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setLinkedDevices:(id)arg1;
- (void)checkDeviceLimitsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDeviceLimitsResult:(id)arg1;
- (id)init;

@end

