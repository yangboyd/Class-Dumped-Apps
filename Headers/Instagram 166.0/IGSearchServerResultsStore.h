//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSearchClientSideCachingConfiguration, NSMutableDictionary, NSString;

@interface IGSearchServerResultsStore : NSObject
{
    IGSearchClientSideCachingConfiguration *_cachingConfiguration;
    NSString *_lastQuery;
    NSString *_currentQuery;
    NSMutableDictionary *_searchSessionIDToSearchCacheEntryDictionary;
}

- (void).cxx_destruct;
- (id)_searchCacheWithSessionID:(id)arg1;
- (void)invalidateSearchCache;
- (void)setResponse:(id)arg1 query:(id)arg2 sessionID:(id)arg3 isPagination:(_Bool)arg4;
- (id)setCurrentQuery:(id)arg1 sessionID:(id)arg2;
- (id)initWithCachingConfiguration:(id)arg1;

@end

