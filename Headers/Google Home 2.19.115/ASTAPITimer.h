//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPITimestamp, NSString;

@interface ASTAPITimer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientGeneratedTimerId; // @dynamic clientGeneratedTimerId;
@property(readonly, nonatomic) int countdownStateOneOfCase; // @dynamic countdownStateOneOfCase;
@property(nonatomic) long long expireTime; // @dynamic expireTime;
@property(nonatomic) _Bool hasClientGeneratedTimerId; // @dynamic hasClientGeneratedTimerId;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasLastUpdated; // @dynamic hasLastUpdated;
@property(nonatomic) _Bool hasOriginalDuration; // @dynamic hasOriginalDuration;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTimerId; // @dynamic hasTimerId;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) ASTAPITimestamp *lastUpdated; // @dynamic lastUpdated;
@property(nonatomic) long long originalDuration; // @dynamic originalDuration;
@property(nonatomic) long long remainingDuration; // @dynamic remainingDuration;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *timerId; // @dynamic timerId;

@end

