//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SQPBFranklinApiAutoReloadPreference : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasReloadAmountCents; // @dynamic hasReloadAmountCents;
@property(nonatomic) _Bool hasStoredValueToken; // @dynamic hasStoredValueToken;
@property(nonatomic) _Bool hasThresholdCents; // @dynamic hasThresholdCents;
@property(nonatomic) long long reloadAmountCents; // @dynamic reloadAmountCents;
@property(copy, nonatomic) NSString *storedValueToken; // @dynamic storedValueToken;
@property(nonatomic) long long thresholdCents; // @dynamic thresholdCents;

@end

