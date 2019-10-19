//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIResponseContext;

@interface YTILicenseResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowUserRetry; // @dynamic allowUserRetry;
@property(retain, nonatomic) NSMutableArray *authorizedFormatsArray; // @dynamic authorizedFormatsArray;
@property(readonly, nonatomic) unsigned long long authorizedFormatsArray_Count; // @dynamic authorizedFormatsArray_Count;
@property(nonatomic) _Bool hasAllowUserRetry; // @dynamic hasAllowUserRetry;
@property(nonatomic) _Bool hasIsHd720; // @dynamic hasIsHd720;
@property(nonatomic) _Bool hasLicense; // @dynamic hasLicense;
@property(nonatomic) _Bool hasNextFairplayKeyId; // @dynamic hasNextFairplayKeyId;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool isHd720; // @dynamic isHd720;
@property(copy, nonatomic) NSData *license; // @dynamic license;
@property(copy, nonatomic) NSData *nextFairplayKeyId; // @dynamic nextFairplayKeyId;
@property(copy, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(nonatomic) int status; // @dynamic status;

@end

