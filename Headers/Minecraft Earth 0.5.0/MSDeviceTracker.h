//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDevice, NSMutableArray;

@interface MSDeviceTracker : NSObject
{
    MSDevice *_device;
    NSMutableArray *_deviceHistory;
}

+ (void)refreshDeviceNextTime;
+ (void)resetSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *deviceHistory; // @synthesize deviceHistory=_deviceHistory;
@property(retain, nonatomic) MSDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)appNamespace:(id)arg1;
- (id)appBuild:(id)arg1;
- (id)appVersion:(id)arg1;
- (id)carrierCountry:(id)arg1;
- (id)carrierName:(id)arg1;
- (id)screenSize;
- (id)timeZoneOffset:(id)arg1;
- (id)locale:(id)arg1;
- (id)osBuild;
- (id)osVersion:(id)arg1;
- (id)osName:(id)arg1;
- (id)deviceModel;
- (void)clearDevices;
- (id)deviceForTimestamp:(id)arg1;
- (void)refreshWrapperSdk:(id)arg1;
- (id)updatedDevice;
- (void)setCountryCode:(id)arg1;
- (void)setWrapperSdk:(id)arg1;
- (id)init;

@end

