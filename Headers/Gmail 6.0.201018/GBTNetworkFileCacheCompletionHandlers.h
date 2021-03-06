//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GBTNetworkFileCacheCompletionHandlers : NSObject
{
    NSMutableDictionary *_completions;
}

- (void).cxx_destruct;
- (void)callCompletionsForCacheKey:(id)arg1 fileURL:(id)arg2 error:(id)arg3;
- (void)callAllCompletionsWithError:(id)arg1;
- (void)callCompletionsForCacheKey:(id)arg1 error:(id)arg2;
- (void)callCompletionsForCacheKey:(id)arg1 fileURL:(id)arg2;
- (void)removeCompletionsForCacheKey:(id)arg1;
- (void)removeLastCompletionForCacheKey:(id)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1 forCacheKey:(id)arg2;
- (id)init;

@end

