//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class BadgeMetadata, GPBInt32Array, GPBInt32Int32Dictionary, GPBInt32ObjectDictionary, NSData, NSMutableArray, NSString, SCSCORETweaks, SCSSMAdsClientInfo, SCSSMClientInfo, SCSSMCognacClientInfo, SCSSMStoriesRequest_DeltaFetchInfo, SCSSMStoriesRequest_LensMetadata;

@interface SCSSMStoriesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSSMAdsClientInfo *adsClientInfo; // @dynamic adsClientInfo;
@property(retain, nonatomic) BadgeMetadata *badgeMetadata; // @dynamic badgeMetadata;
@property(copy, nonatomic) NSString *clientDfSessionId; // @dynamic clientDfSessionId;
@property(retain, nonatomic) SCSSMClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) SCSSMCognacClientInfo *cognacClientInfo; // @dynamic cognacClientInfo;
@property(nonatomic) int debug; // @dynamic debug;
@property(retain, nonatomic) SCSSMStoriesRequest_DeltaFetchInfo *deltaFetchInfo; // @dynamic deltaFetchInfo;
@property(nonatomic) int feedType; // @dynamic feedType;
@property(retain, nonatomic) GPBInt32Array *feedTypesArray; // @dynamic feedTypesArray;
@property(readonly, nonatomic) unsigned long long feedTypesArray_Count; // @dynamic feedTypesArray_Count;
@property(nonatomic) _Bool hasAdsClientInfo; // @dynamic hasAdsClientInfo;
@property(nonatomic) _Bool hasBadgeMetadata; // @dynamic hasBadgeMetadata;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasCognacClientInfo; // @dynamic hasCognacClientInfo;
@property(nonatomic) _Bool hasDeltaFetchInfo; // @dynamic hasDeltaFetchInfo;
@property(nonatomic) _Bool hasLensMetadata; // @dynamic hasLensMetadata;
@property(nonatomic) _Bool hasTweaks; // @dynamic hasTweaks;
@property(copy, nonatomic) NSData *lastMetaStreamToken; // @dynamic lastMetaStreamToken;
@property(copy, nonatomic) NSData *lastStreamToken; // @dynamic lastStreamToken;
@property(retain, nonatomic) GPBInt32ObjectDictionary *lastStreamTokens; // @dynamic lastStreamTokens;
@property(readonly, nonatomic) unsigned long long lastStreamTokens_Count; // @dynamic lastStreamTokens_Count;
@property(retain, nonatomic) SCSSMStoriesRequest_LensMetadata *lensMetadata; // @dynamic lensMetadata;
@property(nonatomic) int nextScrollOffset; // @dynamic nextScrollOffset;
@property(retain, nonatomic) GPBInt32Int32Dictionary *numStories; // @dynamic numStories;
@property(readonly, nonatomic) unsigned long long numStories_Count; // @dynamic numStories_Count;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) int requestSource; // @dynamic requestSource;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;
@property(retain, nonatomic) NSMutableArray *studyInfoArray; // @dynamic studyInfoArray;
@property(readonly, nonatomic) unsigned long long studyInfoArray_Count; // @dynamic studyInfoArray_Count;
@property(nonatomic) int trigger; // @dynamic trigger;
@property(retain, nonatomic) SCSCORETweaks *tweaks; // @dynamic tweaks;

@end

