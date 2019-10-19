//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCCognacLeaderboardEntry, SCSnapchatter;

@interface SCCognacLeaderboardExtendedEntry : NSObject <NSCopying>
{
    SCCognacLeaderboardEntry *_leaderboardEntry;
    SCSnapchatter *_snapchatter;
}

@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, copy, nonatomic) SCCognacLeaderboardEntry *leaderboardEntry; // @synthesize leaderboardEntry=_leaderboardEntry;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLeaderboardEntry:(id)arg1 snapchatter:(id)arg2;

@end

