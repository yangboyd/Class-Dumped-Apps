//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSUPRegisteredInterestInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) int registeredInterest; // @dynamic registeredInterest;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) long long stateExpireTimestampMsecs; // @dynamic stateExpireTimestampMsecs;
@property(nonatomic) long long updateTimestampMsecs; // @dynamic updateTimestampMsecs;

@end

