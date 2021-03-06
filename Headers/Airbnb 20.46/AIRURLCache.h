//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TMCache;

@interface AIRURLCache : NSObject
{
    TMCache *_cache;
}

+ (id)sharedURLCache;
- (void).cxx_destruct;
@property(retain, nonatomic) TMCache *cache; // @synthesize cache=_cache;
- (id)decompressedResponseFromCompressedData:(id)arg1;
- (id)compressedDataForResponse:(id)arg1 compressionAlgorithm:(int)arg2;
- (id)querySortedAbsoluteStringOfURL:(id)arg1;
- (void)removeAllCachedResponses;
- (id)cachedResponseForRequest:(id)arg1;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (_Bool)isResponseStatusCodeCacheable:(long long)arg1;
- (id)keyForRequest:(id)arg1;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;

@end

