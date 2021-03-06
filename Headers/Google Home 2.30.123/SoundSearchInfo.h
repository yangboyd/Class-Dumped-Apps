//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MessageSet, NSString, PBEEarsLookupRequest, PBEEarsStreamRequest, PBEMusicResult;

@interface SoundSearchInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enableWebResults; // @dynamic enableWebResults;
@property(nonatomic) _Bool hasEnableWebResults; // @dynamic hasEnableWebResults;
@property(nonatomic) _Bool hasInstantBufferSize; // @dynamic hasInstantBufferSize;
@property(nonatomic) _Bool hasLookupRequest; // @dynamic hasLookupRequest;
@property(nonatomic) _Bool hasPrerecognizedResult; // @dynamic hasPrerecognizedResult;
@property(nonatomic) _Bool hasRequestExtensions; // @dynamic hasRequestExtensions;
@property(nonatomic) _Bool hasStreamRequest; // @dynamic hasStreamRequest;
@property(nonatomic) _Bool hasTriggerId; // @dynamic hasTriggerId;
@property(nonatomic) _Bool hasTtsOutputEnabled; // @dynamic hasTtsOutputEnabled;
@property(nonatomic) long long instantBufferSize; // @dynamic instantBufferSize;
@property(retain, nonatomic) PBEEarsLookupRequest *lookupRequest; // @dynamic lookupRequest;
@property(retain, nonatomic) PBEMusicResult *prerecognizedResult; // @dynamic prerecognizedResult;
@property(retain, nonatomic) MessageSet *requestExtensions; // @dynamic requestExtensions;
@property(retain, nonatomic) PBEEarsStreamRequest *streamRequest; // @dynamic streamRequest;
@property(copy, nonatomic) NSString *triggerId; // @dynamic triggerId;
@property(nonatomic) _Bool ttsOutputEnabled; // @dynamic ttsOutputEnabled;

@end

