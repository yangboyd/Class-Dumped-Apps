//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GRWSDeviceInfo_BondHardwareInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deviceBrandName; // @dynamic deviceBrandName;
@property(copy, nonatomic) NSString *deviceMarketingName; // @dynamic deviceMarketingName;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(nonatomic) int deviceType; // @dynamic deviceType;
@property(nonatomic) _Bool hasDeviceBrandName; // @dynamic hasDeviceBrandName;
@property(nonatomic) _Bool hasDeviceMarketingName; // @dynamic hasDeviceMarketingName;
@property(nonatomic) _Bool hasDeviceModel; // @dynamic hasDeviceModel;
@property(nonatomic) _Bool hasDeviceType; // @dynamic hasDeviceType;

@end

