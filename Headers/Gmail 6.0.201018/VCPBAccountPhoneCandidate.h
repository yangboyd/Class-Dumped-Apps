//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString, VPBPhoneNumber;

@interface VCPBAccountPhoneCandidate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) _Bool hasCity; // @dynamic hasCity;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasRegionCode; // @dynamic hasRegionCode;
@property(nonatomic) _Bool hasStateProvinceRegion; // @dynamic hasStateProvinceRegion;
@property(retain, nonatomic) VPBPhoneNumber *phoneNumber; // @dynamic phoneNumber;
@property(copy, nonatomic) NSString *regionCode; // @dynamic regionCode;
@property(copy, nonatomic) NSString *stateProvinceRegion; // @dynamic stateProvinceRegion;

@end

