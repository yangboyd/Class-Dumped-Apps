//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIIosAvPlayerHotConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowExternalPlaybackForInactivePlayer; // @dynamic allowExternalPlaybackForInactivePlayer;
@property(nonatomic) _Bool hasAllowExternalPlaybackForInactivePlayer; // @dynamic hasAllowExternalPlaybackForInactivePlayer;
@property(nonatomic) _Bool hasPoolMaxSize; // @dynamic hasPoolMaxSize;
@property(nonatomic) _Bool hasSeekAfterAdOnAirplay; // @dynamic hasSeekAfterAdOnAirplay;
@property(nonatomic) _Bool hasUnpauseAfterAirplayMs; // @dynamic hasUnpauseAfterAirplayMs;
@property(retain, nonatomic) NSMutableArray *ignoreFailedToPlayErrorsArray; // @dynamic ignoreFailedToPlayErrorsArray;
@property(readonly, nonatomic) unsigned long long ignoreFailedToPlayErrorsArray_Count; // @dynamic ignoreFailedToPlayErrorsArray_Count;
@property(nonatomic) int poolMaxSize; // @dynamic poolMaxSize;
@property(nonatomic) _Bool seekAfterAdOnAirplay; // @dynamic seekAfterAdOnAirplay;
@property(nonatomic) int unpauseAfterAirplayMs; // @dynamic unpauseAfterAirplayMs;

@end

