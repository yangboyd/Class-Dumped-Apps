//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFEAssertionInfo, NSData;

@interface CAPCRecordAssertionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFEAssertionInfo *assertionInfo; // @dynamic assertionInfo;
@property(copy, nonatomic) NSData *challenge; // @dynamic challenge;
@property(nonatomic) _Bool hasAssertionInfo; // @dynamic hasAssertionInfo;

@end

