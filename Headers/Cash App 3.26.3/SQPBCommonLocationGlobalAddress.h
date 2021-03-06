//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonLocationCoordinates;

@interface SQPBCommonLocationGlobalAddress : GPBMessage
{
}

+ (id)descriptor;
- (id)sanitizedAddress;

// Remaining properties
@property(retain, nonatomic) SQPBCommonLocationCoordinates *addressCoordinates; // @dynamic addressCoordinates;
@property(copy, nonatomic) NSString *addressLine1; // @dynamic addressLine1;
@property(copy, nonatomic) NSString *addressLine2; // @dynamic addressLine2;
@property(copy, nonatomic) NSString *addressLine3; // @dynamic addressLine3;
@property(copy, nonatomic) NSString *addressLine4; // @dynamic addressLine4;
@property(copy, nonatomic) NSString *addressLine5; // @dynamic addressLine5;
@property(copy, nonatomic) NSString *administrativeDistrictLevel1; // @dynamic administrativeDistrictLevel1;
@property(copy, nonatomic) NSString *administrativeDistrictLevel2; // @dynamic administrativeDistrictLevel2;
@property(copy, nonatomic) NSString *administrativeDistrictLevel3; // @dynamic administrativeDistrictLevel3;
@property(nonatomic) int countryCode; // @dynamic countryCode;
@property(nonatomic) _Bool hasAddressCoordinates; // @dynamic hasAddressCoordinates;
@property(nonatomic) _Bool hasAddressLine1; // @dynamic hasAddressLine1;
@property(nonatomic) _Bool hasAddressLine2; // @dynamic hasAddressLine2;
@property(nonatomic) _Bool hasAddressLine3; // @dynamic hasAddressLine3;
@property(nonatomic) _Bool hasAddressLine4; // @dynamic hasAddressLine4;
@property(nonatomic) _Bool hasAddressLine5; // @dynamic hasAddressLine5;
@property(nonatomic) _Bool hasAdministrativeDistrictLevel1; // @dynamic hasAdministrativeDistrictLevel1;
@property(nonatomic) _Bool hasAdministrativeDistrictLevel2; // @dynamic hasAdministrativeDistrictLevel2;
@property(nonatomic) _Bool hasAdministrativeDistrictLevel3; // @dynamic hasAdministrativeDistrictLevel3;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasLocality; // @dynamic hasLocality;
@property(nonatomic) _Bool hasPostalCode; // @dynamic hasPostalCode;
@property(nonatomic) _Bool hasSublocality; // @dynamic hasSublocality;
@property(nonatomic) _Bool hasSublocality1; // @dynamic hasSublocality1;
@property(nonatomic) _Bool hasSublocality2; // @dynamic hasSublocality2;
@property(nonatomic) _Bool hasSublocality3; // @dynamic hasSublocality3;
@property(nonatomic) _Bool hasSublocality4; // @dynamic hasSublocality4;
@property(nonatomic) _Bool hasSublocality5; // @dynamic hasSublocality5;
@property(copy, nonatomic) NSString *locality; // @dynamic locality;
@property(copy, nonatomic) NSString *postalCode; // @dynamic postalCode;
@property(copy, nonatomic) NSString *sublocality; // @dynamic sublocality;
@property(copy, nonatomic) NSString *sublocality1; // @dynamic sublocality1;
@property(copy, nonatomic) NSString *sublocality2; // @dynamic sublocality2;
@property(copy, nonatomic) NSString *sublocality3; // @dynamic sublocality3;
@property(copy, nonatomic) NSString *sublocality4; // @dynamic sublocality4;
@property(copy, nonatomic) NSString *sublocality5; // @dynamic sublocality5;

@end

