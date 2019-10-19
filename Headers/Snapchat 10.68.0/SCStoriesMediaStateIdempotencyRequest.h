//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesMediaStateIdempotencyRequest : NSObject <NSCopying>
{
    NSString *_cacheKey;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCacheKey:(id)arg1 state:(long long)arg2;

@end

