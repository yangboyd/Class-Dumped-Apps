//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCContextGeoLocation;

@interface SCContextCardsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appListGroupPreferencesArray; // @dynamic appListGroupPreferencesArray;
@property(readonly, nonatomic) unsigned long long appListGroupPreferencesArray_Count; // @dynamic appListGroupPreferencesArray_Count;
@property(nonatomic) unsigned int contextDepth; // @dynamic contextDepth;
@property(nonatomic) _Bool debug; // @dynamic debug;
@property(nonatomic) float devicePixelRatio; // @dynamic devicePixelRatio;
@property(nonatomic) _Bool hasUserLocation; // @dynamic hasUserLocation;
@property(nonatomic) int launchSource; // @dynamic launchSource;
@property(retain, nonatomic) NSMutableArray *queriesArray; // @dynamic queriesArray;
@property(readonly, nonatomic) unsigned long long queriesArray_Count; // @dynamic queriesArray_Count;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *strategy; // @dynamic strategy;
@property(retain, nonatomic) NSMutableDictionary *tweakParameters; // @dynamic tweakParameters;
@property(readonly, nonatomic) unsigned long long tweakParameters_Count; // @dynamic tweakParameters_Count;
@property(retain, nonatomic) SCContextGeoLocation *userLocation; // @dynamic userLocation;

@end

