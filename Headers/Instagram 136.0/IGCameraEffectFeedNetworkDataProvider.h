//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCameraEffectFeedDataSource-Protocol.h>

@class IGAnnouncer, IGCameraEffectGroupPreview, IGUserSession, NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol IGAPIClient, IGNetworkParser, IGRequestToken;

@interface IGCameraEffectFeedNetworkDataProvider : NSObject <IGCameraEffectFeedDataSource>
{
    IGAnnouncer *_announcer;
    IGUserSession *_userSession;
    NSString *_endpoint;
    unsigned long long _method;
    IGCameraEffectGroupPreview *_groupPreview;
    NSArray *_topics;
    long long _instanceKey;
    NSString *_topicIdentifier;
    long long _productSurface;
    NSString *_pageCursor;
    double _cacheExpirationTime;
    NSMutableOrderedSet *_sortedPreviewIdentifiers;
    NSMutableDictionary *_unsortedPreviews;
    id <IGAPIClient> _networker;
    id <IGNetworkParser> _parser;
    id <IGRequestToken> _previousRequestToken;
    _Bool _isShimmeringEnabled;
    _Bool _hasMoreAvailablePages;
    _Bool _isLoading;
    NSArray *_creators;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasMoreAvailablePages; // @synthesize hasMoreAvailablePages=_hasMoreAvailablePages;
@property(readonly, nonatomic) _Bool isShimmeringEnabled; // @synthesize isShimmeringEnabled=_isShimmeringEnabled;
@property(readonly, nonatomic) NSArray *creators; // @synthesize creators=_creators;
- (void).cxx_destruct;
- (void)_didFailToFetchDataWithError:(id)arg1;
- (void)_didFetchCachedData:(id)arg1;
- (void)_didFetchData:(id)arg1 loadingMore:(_Bool)arg2;
- (id)_requestWithMaxID:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)paramsForPageCursor:(id)arg1;
- (void)_fetchUsingCaching:(_Bool)arg1 prefetching:(_Bool)arg2 loadingMore:(_Bool)arg3;
- (void)prefetch;
- (void)fetchMore;
- (void)fetch;
@property(readonly, nonatomic) NSDictionary *unsortedPreviews;
@property(readonly, nonatomic) NSOrderedSet *sortedPreviewIdentifiers;
@property(readonly, nonatomic) IGCameraEffectGroupPreview *groupPreview;
@property(readonly, nonatomic) NSArray *topics;
@property(readonly, nonatomic) NSString *noResultsTitle;
@property(readonly, nonatomic) _Bool hasNoResults;
@property(readonly, nonatomic) NSString *loadingTitle;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 endpoint:(id)arg2 method:(unsigned long long)arg3 parser:(id)arg4 cacheExpirationTime:(double)arg5 loggingTopicIdentifier:(id)arg6 loggingProductSurface:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

