//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTMXError, YTMXGetPlayerInfoRequest, YTMXPlayerInfo;

@interface YTMXGetPlayerInfoResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTMXError *error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasPlayerInfo; // @dynamic hasPlayerInfo;
@property(nonatomic) _Bool hasRequest; // @dynamic hasRequest;
@property(retain, nonatomic) YTMXPlayerInfo *playerInfo; // @dynamic playerInfo;
@property(retain, nonatomic) YTMXGetPlayerInfoRequest *request; // @dynamic request;

@end

