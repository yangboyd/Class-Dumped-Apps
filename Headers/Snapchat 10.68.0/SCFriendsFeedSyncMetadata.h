//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCFriendsFeedSyncMetadata : NSObject <NSCopying>
{
    NSArray *_syncTokens;
}

@property(readonly, copy, nonatomic) NSArray *syncTokens; // @synthesize syncTokens=_syncTokens;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSyncTokens:(id)arg1;

@end

