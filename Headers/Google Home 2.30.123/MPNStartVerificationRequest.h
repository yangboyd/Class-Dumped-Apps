//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface MPNStartVerificationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *billingInfo; // @dynamic billingInfo;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(copy, nonatomic) NSString *localizedMessageTemplate; // @dynamic localizedMessageTemplate;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(copy, nonatomic) NSString *phoneVerifierLocalizedMessageTemplate; // @dynamic phoneVerifierLocalizedMessageTemplate;
@property(copy, nonatomic) NSString *rateLimitTag; // @dynamic rateLimitTag;
@property(copy, nonatomic) NSData *sessionData; // @dynamic sessionData;

@end

