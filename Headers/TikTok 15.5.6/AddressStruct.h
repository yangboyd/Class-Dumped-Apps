//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface AddressStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(copy, nonatomic) NSString *cityCode; // @dynamic cityCode;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(copy, nonatomic) NSString *district; // @dynamic district;
@property(nonatomic) _Bool hasAddress; // @dynamic hasAddress;
@property(nonatomic) _Bool hasCity; // @dynamic hasCity;
@property(nonatomic) _Bool hasCityCode; // @dynamic hasCityCode;
@property(nonatomic) _Bool hasCountry; // @dynamic hasCountry;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasDistrict; // @dynamic hasDistrict;
@property(nonatomic) _Bool hasProvince; // @dynamic hasProvince;
@property(nonatomic) _Bool hasSimpleAddr; // @dynamic hasSimpleAddr;
@property(copy, nonatomic) NSString *province; // @dynamic province;
@property(copy, nonatomic) NSString *simpleAddr; // @dynamic simpleAddr;

@end

