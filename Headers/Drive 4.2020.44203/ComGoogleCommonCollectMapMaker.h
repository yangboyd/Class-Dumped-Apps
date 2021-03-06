//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonBaseEquivalence, ComGoogleCommonCollectMapMakerInternalMap_Strength;

@interface ComGoogleCommonCollectMapMaker : NSObject
{
    _Bool useCustomMap_;
    int initialCapacity_;
    int concurrencyLevel_;
    ComGoogleCommonCollectMapMakerInternalMap_Strength *keyStrength_;
    ComGoogleCommonCollectMapMakerInternalMap_Strength *valueStrength_;
    ComGoogleCommonBaseEquivalence *keyEquivalence_;
}

- (void)dealloc;
- (id)description;
- (id)makeMap;
- (id)getValueStrength;
- (id)setValueStrengthWithComGoogleCommonCollectMapMakerInternalMap_Strength:(id)arg1;
- (id)weakValues;
- (id)getKeyStrength;
- (id)setKeyStrengthWithComGoogleCommonCollectMapMakerInternalMap_Strength:(id)arg1;
- (id)weakKeys;
- (int)getConcurrencyLevel;
- (id)concurrencyLevelWithInt:(int)arg1;
- (int)getInitialCapacity;
- (id)initialCapacityWithInt:(int)arg1;
- (id)getKeyEquivalence;
- (id)keyEquivalenceWithComGoogleCommonBaseEquivalence:(id)arg1;
- (id)init;

@end

