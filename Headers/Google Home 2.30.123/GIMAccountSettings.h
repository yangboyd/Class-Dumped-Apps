//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue;

@interface GIMAccountSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBBoolValue *allowMomentCapture; // @dynamic allowMomentCapture;
@property(nonatomic) long long clipsExpirationTtlHours; // @dynamic clipsExpirationTtlHours;
@property(nonatomic) _Bool hasAllowMomentCapture; // @dynamic hasAllowMomentCapture;
@property(nonatomic) _Bool hasNotReachableInEmail; // @dynamic hasNotReachableInEmail;
@property(nonatomic) _Bool hasOnlyContactCanContactMe; // @dynamic hasOnlyContactCanContactMe;
@property(retain, nonatomic) GPBBoolValue *notReachableInEmail; // @dynamic notReachableInEmail;
@property(retain, nonatomic) GPBBoolValue *onlyContactCanContactMe; // @dynamic onlyContactCanContactMe;

@end

