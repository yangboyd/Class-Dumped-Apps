//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface ZeroFrictionGenericNonAuth : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *data_p; // @dynamic data_p;
@property(readonly, nonatomic) unsigned long long data_p_Count; // @dynamic data_p_Count;
@property(copy, nonatomic) NSString *genericEventId; // @dynamic genericEventId;
@property(nonatomic) _Bool hasGenericEventId; // @dynamic hasGenericEventId;
@property(nonatomic) _Bool hasScreenId; // @dynamic hasScreenId;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSpotifyId; // @dynamic hasSpotifyId;
@property(copy, nonatomic) NSString *screenId; // @dynamic screenId;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *spotifyId; // @dynamic spotifyId;

@end

