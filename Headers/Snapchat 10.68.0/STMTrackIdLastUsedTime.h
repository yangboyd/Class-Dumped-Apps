//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, NSString;

@interface STMTrackIdLastUsedTime : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLastUsedTime; // @dynamic hasLastUsedTime;
@property(retain, nonatomic) GPBTimestamp *lastUsedTime; // @dynamic lastUsedTime;
@property(copy, nonatomic) NSString *trackId; // @dynamic trackId;

@end

