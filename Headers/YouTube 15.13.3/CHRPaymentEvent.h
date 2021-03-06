//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface CHRPaymentEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(copy, nonatomic) NSString *currencyCode; // @dynamic currencyCode;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasCurrencyCode; // @dynamic hasCurrencyCode;
@property(nonatomic) _Bool hasRequiresShipping; // @dynamic hasRequiresShipping;
@property(nonatomic) _Bool requiresShipping; // @dynamic requiresShipping;

@end

