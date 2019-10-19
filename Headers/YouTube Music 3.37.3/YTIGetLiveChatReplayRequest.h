//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIInnerTubeContext, YTILiveChatClientState, YTILiveChatCurrentPlayerState;

@interface YTIGetLiveChatReplayRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long cacheGenerationTimestampUsec; // @dynamic cacheGenerationTimestampUsec;
@property(retain, nonatomic) YTILiveChatClientState *clientState; // @dynamic clientState;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) int continuationType; // @dynamic continuationType;
@property(retain, nonatomic) YTILiveChatCurrentPlayerState *currentPlayerState; // @dynamic currentPlayerState;
@property(nonatomic) int filterMode; // @dynamic filterMode;
@property(nonatomic) _Bool fullReload; // @dynamic fullReload;
@property(nonatomic) _Bool hasCacheGenerationTimestampUsec; // @dynamic hasCacheGenerationTimestampUsec;
@property(nonatomic) _Bool hasClientState; // @dynamic hasClientState;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasContinuationType; // @dynamic hasContinuationType;
@property(nonatomic) _Bool hasCurrentPlayerState; // @dynamic hasCurrentPlayerState;
@property(nonatomic) _Bool hasFilterMode; // @dynamic hasFilterMode;
@property(nonatomic) _Bool hasFullReload; // @dynamic hasFullReload;
@property(nonatomic) _Bool hasIsInitialLoad; // @dynamic hasIsInitialLoad;
@property(nonatomic) _Bool hasIsTopChatCurrentlyActive; // @dynamic hasIsTopChatCurrentlyActive;
@property(nonatomic) _Bool hasLatestMessageCacheTimestampUsec; // @dynamic hasLatestMessageCacheTimestampUsec;
@property(nonatomic) _Bool hasLatestMessageTimestampUsec; // @dynamic hasLatestMessageTimestampUsec;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool isInitialLoad; // @dynamic isInitialLoad;
@property(nonatomic) _Bool isTopChatCurrentlyActive; // @dynamic isTopChatCurrentlyActive;
@property(nonatomic) long long latestMessageCacheTimestampUsec; // @dynamic latestMessageCacheTimestampUsec;
@property(nonatomic) long long latestMessageTimestampUsec; // @dynamic latestMessageTimestampUsec;
@property(copy, nonatomic) NSData *params; // @dynamic params;

@end

