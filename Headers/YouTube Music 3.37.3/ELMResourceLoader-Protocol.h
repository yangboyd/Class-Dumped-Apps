//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;
@protocol ELMResourceLoaderSubscriber;

@protocol ELMResourceLoader <NSObject>
- (void)unsubscribe:(id <ELMResourceLoaderSubscriber>)arg1 fromURI:(NSString *)arg2;
- (void)subscribe:(id <ELMResourceLoaderSubscriber>)arg1 toURI:(NSString *)arg2;
- (void)clearCachedResources;
- (void)cacheResource:(NSData *)arg1 withURI:(NSString *)arg2;
- (NSData *)cachedResourceForURI:(NSString *)arg1;
- (_Bool)hasResourceWithURI:(NSString *)arg1;
- (void)resourceForURI:(NSString *)arg1 completionBlock:(void (^)(NSData *, NSError *))arg2;
@end

