//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPNGImageCache : NSObject
{
    // Error parsing type: , name: baseURL
    // Error parsing type: , name: fileManager
    // Error parsing type: , name: localKeyValueStore
    // Error parsing type: , name: expirationInterval
    // Error parsing type: , name: pngStaticImageCache
    // Error parsing type: , name: pngAnimatedImageCache
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)removeExpiredWithLimit:(unsigned long long)arg1 hasMore:(_Bool *)arg2;
- (void)clearCachedItems;
- (id)cachedAnimatedImageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedFirstFrameOfAnimatedImageForKey:(id)arg1;
- (id)cachedLastFrameOfAnimatedImageForKey:(id)arg1;
- (_Bool)hasAnimatedImageForKey:(id)arg1;
- (id)cachedStaticImageForKey:(id)arg1;
- (_Bool)hasStaticImageForKey:(id)arg1;
- (void)cacheImage:(id)arg1 forKey:(id)arg2 atScale:(double)arg3;
- (id)initWithDirectoryURL:(id)arg1 localKeyValueStore:(id)arg2;

@end

