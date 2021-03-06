//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class CCLPNowCardsEntryTreeProcessingLatency, NSMutableArray;

@interface CCLPNowCardsReadyLatency : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CCLPNowCardsEntryTreeProcessingLatency *entryTreeProcessingLatency; // @dynamic entryTreeProcessingLatency;
@property(nonatomic) _Bool hasEntryTreeProcessingLatency; // @dynamic hasEntryTreeProcessingLatency;
@property(nonatomic) _Bool hasTimeToCardsFinishFetchMs; // @dynamic hasTimeToCardsFinishFetchMs;
@property(nonatomic) _Bool hasTimeToCardsFinishRenderingMs; // @dynamic hasTimeToCardsFinishRenderingMs;
@property(nonatomic) _Bool hasTimeToCardsRenderedOnFirstScreenMs; // @dynamic hasTimeToCardsRenderedOnFirstScreenMs;
@property(nonatomic) _Bool hasTimeToCardsStartFetchMs; // @dynamic hasTimeToCardsStartFetchMs;
@property(nonatomic) _Bool hasTimeToEnterMainMs; // @dynamic hasTimeToEnterMainMs;
@property(nonatomic) _Bool hasTimeToHomePaneAppearMs; // @dynamic hasTimeToHomePaneAppearMs;
@property(nonatomic) _Bool hasTimeToIdentityTokenFetchedMs; // @dynamic hasTimeToIdentityTokenFetchedMs;
@property(nonatomic) _Bool hasTimeToOauthTokenFetchedMs; // @dynamic hasTimeToOauthTokenFetchedMs;
@property(retain, nonatomic) NSMutableArray *livelistLatencyArray; // @dynamic livelistLatencyArray;
@property(readonly, nonatomic) unsigned long long livelistLatencyArray_Count; // @dynamic livelistLatencyArray_Count;
@property(nonatomic) int timeToCardsFinishFetchMs; // @dynamic timeToCardsFinishFetchMs;
@property(nonatomic) int timeToCardsFinishRenderingMs; // @dynamic timeToCardsFinishRenderingMs;
@property(nonatomic) int timeToCardsRenderedOnFirstScreenMs; // @dynamic timeToCardsRenderedOnFirstScreenMs;
@property(nonatomic) int timeToCardsStartFetchMs; // @dynamic timeToCardsStartFetchMs;
@property(nonatomic) int timeToEnterMainMs; // @dynamic timeToEnterMainMs;
@property(nonatomic) int timeToHomePaneAppearMs; // @dynamic timeToHomePaneAppearMs;
@property(nonatomic) int timeToIdentityTokenFetchedMs; // @dynamic timeToIdentityTokenFetchedMs;
@property(nonatomic) int timeToOauthTokenFetchedMs; // @dynamic timeToOauthTokenFetchedMs;

@end

