//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface YTIChannelCreationFormEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *channelCreationToken; // @dynamic channelCreationToken;
@property(nonatomic) _Bool hasChannelCreationToken; // @dynamic hasChannelCreationToken;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) int source; // @dynamic source;

@end

