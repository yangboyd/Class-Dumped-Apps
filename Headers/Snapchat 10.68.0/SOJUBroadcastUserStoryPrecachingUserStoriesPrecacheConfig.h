//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig-Protocol.h"

@class NSArray, NSString, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig, SOJUBroadcastUserStoryPrecachingPrecacheCounts;

@interface SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig : NSObject <SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig>
{
    NSArray *_precacheCountsPerStory;
    SOJUBroadcastUserStoryPrecachingPrecacheCounts *_defaultPrecacheCount;
    SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *_lookaheadPrecache;
    NSArray *_lookaheadPrecachePerSection;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *lookaheadPrecachePerSection; // @synthesize lookaheadPrecachePerSection=_lookaheadPrecachePerSection;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *lookaheadPrecache; // @synthesize lookaheadPrecache=_lookaheadPrecache;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *defaultPrecacheCount; // @synthesize defaultPrecacheCount=_defaultPrecacheCount;
@property(readonly, copy, nonatomic) NSArray *precacheCountsPerStory; // @synthesize precacheCountsPerStory=_precacheCountsPerStory;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrecacheCountsPerStory:(id)arg1 defaultPrecacheCount:(id)arg2 lookaheadPrecache:(id)arg3 lookaheadPrecachePerSection:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

