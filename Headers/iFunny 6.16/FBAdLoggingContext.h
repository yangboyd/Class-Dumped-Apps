//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FBAdLoggingContext : NSObject
{
    NSMutableDictionary *_cacheDebugMap;
}

+ (id)sharedContext;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheDebugMap; // @synthesize cacheDebugMap=_cacheDebugMap;
- (id)cacheKeyForKey:(id)arg1 context:(id)arg2;
- (void)clearContext;
- (void)markCacheEventLoggedForKey:(id)arg1 requestId:(id)arg2 cacheEventTypeCode:(long long)arg3 context:(id)arg4;
- (void)markInMemoryWriteFailureCacheEventLoggedForKey:(id)arg1 requestId:(id)arg2 context:(id)arg3;
- (void)markCacheHitOrMissEventLoggedForKey:(id)arg1 requestId:(id)arg2 context:(id)arg3;
- (void)mapCacheDebugData:(id)arg1 forKey:(id)arg2 context:(id)arg3;
- (id)cacheDebugDataForKey:(id)arg1 context:(id)arg2;

@end

