//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GHCRecordDeviceArbitrationConsentRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cloudDeviceId; // @dynamic cloudDeviceId;
@property(readonly, nonatomic) int deviceIdOneOfCase; // @dynamic deviceIdOneOfCase;
@property(copy, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(copy, nonatomic) NSString *serialNumber; // @dynamic serialNumber;

@end

