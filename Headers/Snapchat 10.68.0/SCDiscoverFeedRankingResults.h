//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCDiscoverFeedRankingResults : NSObject <NSCopying>
{
    NSArray *_rankedStories;
    NSArray *_storySlots;
}

@property(readonly, copy, nonatomic) NSArray *storySlots; // @synthesize storySlots=_storySlots;
@property(readonly, copy, nonatomic) NSArray *rankedStories; // @synthesize rankedStories=_rankedStories;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRankedStories:(id)arg1 storySlots:(id)arg2;

@end

