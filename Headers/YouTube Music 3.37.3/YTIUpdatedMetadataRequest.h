//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIInnerTubeContext;

@interface YTIUpdatedMetadataRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasInitialBroadcastStateLiveOrNotYetLive; // @dynamic hasInitialBroadcastStateLiveOrNotYetLive;
@property(nonatomic) _Bool hasLastFullRefreshSecs; // @dynamic hasLastFullRefreshSecs;
@property(nonatomic) _Bool hasUt; // @dynamic hasUt;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasWatchPartyId; // @dynamic hasWatchPartyId;
@property(nonatomic) _Bool initialBroadcastStateLiveOrNotYetLive; // @dynamic initialBroadcastStateLiveOrNotYetLive;
@property(nonatomic) long long lastFullRefreshSecs; // @dynamic lastFullRefreshSecs;
@property(copy, nonatomic) NSData *ut; // @dynamic ut;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(copy, nonatomic) NSString *watchPartyId; // @dynamic watchPartyId;

@end

