//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDuration, NSString;

@interface ASTHAGetAuthTokenRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHgsDeviceId; // @dynamic hasHgsDeviceId;
@property(nonatomic) _Bool hasMinRemainingTokenLifetime; // @dynamic hasMinRemainingTokenLifetime;
@property(copy, nonatomic) NSString *hgsDeviceId; // @dynamic hgsDeviceId;
@property(retain, nonatomic) GPBDuration *minRemainingTokenLifetime; // @dynamic minRemainingTokenLifetime;

@end

