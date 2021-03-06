//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDiscoverAccountsHeroModules, IGDiscoverAccountsPinnedData, IGUserSession, NSArray, NSMutableDictionary, NSString;
@protocol IGDiscoverAccountsDataSourceAnnouncer;

@interface IGDiscoverAccountsDataSource : NSObject
{
    IGUserSession *_userSession;
    IGDiscoverAccountsPinnedData *_pinnedData;
    long long _entryPoint;
    NSArray *_allFetchedTopicIdentifiers;
    id <IGDiscoverAccountsDataSourceAnnouncer> _announcer;
    NSMutableDictionary *_topicsForIdentifiers;
    NSMutableDictionary *_suggestionsForIdentifiers;
    NSMutableDictionary *_topicsForSuggestionIdentifiers;
    _Bool _canLoadMoreTopics;
    _Bool _isFetchingHeroModules;
    _Bool _shouldPaginateLastUnit;
    _Bool _shouldShowConnectFBBanner;
    _Bool _shouldShowConnectContactsBanner;
    NSString *_title;
    long long _currentTopicsFetchAction;
    NSArray *_topics;
    long long _currentSuggestionsFetchAction;
    IGDiscoverAccountsHeroModules *_heroModuleCollection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowConnectContactsBanner; // @synthesize shouldShowConnectContactsBanner=_shouldShowConnectContactsBanner;
@property(readonly, nonatomic) _Bool shouldShowConnectFBBanner; // @synthesize shouldShowConnectFBBanner=_shouldShowConnectFBBanner;
@property(readonly, nonatomic) _Bool shouldPaginateLastUnit; // @synthesize shouldPaginateLastUnit=_shouldPaginateLastUnit;
@property(readonly, nonatomic) IGDiscoverAccountsHeroModules *heroModuleCollection; // @synthesize heroModuleCollection=_heroModuleCollection;
@property(readonly, nonatomic) _Bool isFetchingHeroModules; // @synthesize isFetchingHeroModules=_isFetchingHeroModules;
@property(readonly, nonatomic) long long currentSuggestionsFetchAction; // @synthesize currentSuggestionsFetchAction=_currentSuggestionsFetchAction;
@property(readonly, nonatomic) _Bool canLoadMoreTopics; // @synthesize canLoadMoreTopics=_canLoadMoreTopics;
@property(readonly, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(readonly, nonatomic) long long currentTopicsFetchAction; // @synthesize currentTopicsFetchAction=_currentTopicsFetchAction;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateLookupDictionariesWithTopics:(id)arg1;
- (void)_announceDidFailToLoad;
- (void)_announceDidUpdate;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)topicForSuggestionWithIdentifier:(id)arg1;
- (id)suggestionWithIdentifier:(id)arg1;
- (id)topicWithIdentifier:(id)arg1;
- (void)dismissSuggestionWithIdentifier:(id)arg1;
- (void)dismissTopicWithIdentifier:(id)arg1;
- (void)requestMoreSuggestionsForTopicWithIdentifier:(id)arg1;
- (void)requestTopicsWithAction:(long long)arg1;
- (void)requestHeroModuleCollection;
- (id)initWithUserSession:(id)arg1 title:(id)arg2 pinnedData:(id)arg3 entryPoint:(long long)arg4;

@end

