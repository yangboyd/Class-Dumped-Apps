//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiResponseHeader, NSString;

@interface GFMGetFamilyFormOfPaymentDetailsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasFamilyFormOfPayment; // @dynamic hasFamilyFormOfPayment;
@property(nonatomic) _Bool hasHasFamilyFormOfPayment; // @dynamic hasHasFamilyFormOfPayment;
@property(nonatomic) _Bool hasLogoURL; // @dynamic hasLogoURL;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;

@end

