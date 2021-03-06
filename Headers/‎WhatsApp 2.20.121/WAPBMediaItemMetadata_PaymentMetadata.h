//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSString, WAUserJID;

@interface WAPBMediaItemMetadata_PaymentMetadata : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) _Bool hasValidRequestFrom;
@property(readonly, nonatomic) _Bool hasValidRequestCurrencyCode;
@property(retain, nonatomic) WAUserJID *requestFrom;

// Remaining properties
@property(nonatomic) _Bool hasRequestAmount1000; // @dynamic hasRequestAmount1000;
@property(nonatomic) _Bool hasRequestCurrencyCode; // @dynamic hasRequestCurrencyCode;
@property(nonatomic) _Bool hasRequestExpiryTimestamp; // @dynamic hasRequestExpiryTimestamp;
@property(nonatomic) _Bool hasRequestFromJidString; // @dynamic hasRequestFromJidString;
@property(nonatomic) unsigned long long requestAmount1000; // @dynamic requestAmount1000;
@property(copy, nonatomic) NSString *requestCurrencyCode; // @dynamic requestCurrencyCode;
@property(nonatomic) unsigned long long requestExpiryTimestamp; // @dynamic requestExpiryTimestamp;
@property(copy, nonatomic) NSString *requestFromJidString; // @dynamic requestFromJidString;

@end

