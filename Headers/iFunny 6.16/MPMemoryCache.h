//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/NSCacheDelegate-Protocol.h>

@class NSCache, NSString;

@interface MPMemoryCache : NSObject <NSCacheDelegate>
{
    NSCache *_memcache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *memcache; // @synthesize memcache=_memcache;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)init;
- (id)imageForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

