//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FNContentArrayDelegate-Protocol.h>
#import <Funny/FNContentDataSourceProtocol-Protocol.h>
#import <Funny/FNUploadManagerObserver-Protocol.h>
#import <Funny/IFAdFeedDataSource-Protocol.h>
#import <Funny/IFProjectElementFeedMediatorDelegate-Protocol.h>

@class FNContentArray, FNContentDataSourceObserveManager, IFApplicationBadgeService, IFFeedInfo, IFProjectElementFeedMediator, NSArray, NSMutableSet, NSString;
@protocol FeedEstimatorService, IFNetworkContentListService;

@interface FNContentFeedDataSource : NSObject <FNContentArrayDelegate, IFAdFeedDataSource, FNUploadManagerObserver, IFProjectElementFeedMediatorDelegate, FNContentDataSourceProtocol>
{
    NSString *nextCursor;
    _Bool hasNext;
    NSString *prevCursor;
    _Bool hasPrev;
    FNContentArray *contentArray;
    NSArray *preloadedContent;
    _Bool refreshingData;
    _Bool shouldPreloadContent;
    _Bool _isFirstFetch;
    _Bool _loadingNext;
    _Bool _loadingPrev;
    NSString *_firstContentId;
    unsigned long long _initialContentIndex;
    long long _initialNumberOfUnviewedContent;
    long long _numberOfViewedContent;
    long long _lastViewedContentIndex;
    unsigned long long _shotStatusFilter;
    unsigned long long _isAbusedFilter;
    id <FeedEstimatorService> _feedEstimatorService;
    NSString *_middleItemFetch;
    IFFeedInfo *_feedInfo;
    id <IFNetworkContentListService> _networkContentListService;
    IFProjectElementFeedMediator *_projectElementMediator;
    IFApplicationBadgeService *_badgeService;
    NSMutableSet *_deletedCids;
    FNContentDataSourceObserveManager *_observerManager;
}

+ (id)getSavedSubscribtionLastSessionCID;
+ (void)saveSubscribtionLastSessionCID:(id)arg1;
+ (id)stringForKey:(id)arg1;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (void)setLocalizedString:(id)arg1 forKey:(id)arg2;
+ (id)localizedStringForKey:(id)arg1;
+ (void)convertSessionSavedIDForKey:(id)arg1 newKey:(id)arg2;
+ (void)convertSessionSavedIDsToLocalizedDictionary;
+ (id)buildNativeAddItemByData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool loadingPrev; // @synthesize loadingPrev=_loadingPrev;
@property(nonatomic) _Bool loadingNext; // @synthesize loadingNext=_loadingNext;
@property(retain, nonatomic) FNContentDataSourceObserveManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSMutableSet *deletedCids; // @synthesize deletedCids=_deletedCids;
@property(retain, nonatomic) IFApplicationBadgeService *badgeService; // @synthesize badgeService=_badgeService;
@property(retain, nonatomic) IFProjectElementFeedMediator *projectElementMediator; // @synthesize projectElementMediator=_projectElementMediator;
@property(retain, nonatomic) id <IFNetworkContentListService> networkContentListService; // @synthesize networkContentListService=_networkContentListService;
@property(retain, nonatomic) IFFeedInfo *feedInfo; // @synthesize feedInfo=_feedInfo;
@property(copy, nonatomic) NSString *middleItemFetch; // @synthesize middleItemFetch=_middleItemFetch;
@property(nonatomic) _Bool isFirstFetch; // @synthesize isFirstFetch=_isFirstFetch;
@property(retain, nonatomic) id <FeedEstimatorService> feedEstimatorService; // @synthesize feedEstimatorService=_feedEstimatorService;
@property(nonatomic) unsigned long long isAbusedFilter; // @synthesize isAbusedFilter=_isAbusedFilter;
@property(nonatomic) unsigned long long shotStatusFilter; // @synthesize shotStatusFilter=_shotStatusFilter;
@property(nonatomic) long long lastViewedContentIndex; // @synthesize lastViewedContentIndex=_lastViewedContentIndex;
@property(nonatomic) long long numberOfViewedContent; // @synthesize numberOfViewedContent=_numberOfViewedContent;
@property(nonatomic) long long initialNumberOfUnviewedContent; // @synthesize initialNumberOfUnviewedContent=_initialNumberOfUnviewedContent;
@property(nonatomic) unsigned long long initialContentIndex; // @synthesize initialContentIndex=_initialContentIndex;
@property(copy, nonatomic) NSString *firstContentId; // @synthesize firstContentId=_firstContentId;
- (void)insertEstimatorIfNeededAtIndex:(unsigned long long)arg1;
- (_Bool)needToNotifyAboutNotifications;
- (_Bool)shouldObserveUploadingContent;
- (void)didUnblockedUser:(id)arg1;
- (void)didBlockedUser:(id)arg1;
- (void)uploadManager:(id)arg1 didFinishUploading:(id)arg2 uploadedContent:(id)arg3;
- (void)contentUpdated:(id)arg1 type:(long long)arg2;
- (void)updateCountersOfItem:(id)arg1 withItemAtIndex:(long long)arg2;
- (void)insertElement:(id)arg1 atIndex:(long long)arg2;
- (void)createContentListServiceWithMemCategory:(id)arg1;
- (void)initContentArray;
- (void)markInFeedUser:(id)arg1 asBlocked:(_Bool)arg2;
- (id)contentFeedLoadingItemsLoadingForThumbs;
- (void)updateVisibleItemIndex:(unsigned long long)arg1;
- (void)reloadWithContentList:(id)arg1 atDirection:(unsigned long long)arg2;
- (void)reloadForMiddleItemWithContentList:(id)arg1;
- (void)updateCursorsWithPaging:(id)arg1 fetchDirection:(unsigned long long)arg2 bothDirections:(_Bool)arg3;
- (long long)indexOfMiddleItemInReceivedData:(id)arg1;
- (void)updateContentFriendsInCommentsWithContentList:(id)arg1;
- (void)updateContentFriendsInCommentForAllContent;
- (void)loadContentListAtDirection:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)loadAtDirection:(unsigned long long)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)setLoadingStatus:(_Bool)arg1 forDirection:(unsigned long long)arg2;
- (id)contentToAddByReceivedData:(id)arg1;
- (_Bool)compareFeedOldContent:(id)arg1 newContent:(id)arg2;
- (void)removeDeletedCid:(id)arg1;
- (void)addDeletedCid:(id)arg1;
- (void)removeNativeAdElements;
- (void)removeObject:(id)arg1;
- (void)appendFirstObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)resetDataSource;
- (void)cancelAllLoads;
- (void)loadNewData;
- (void)setPreloadedContent:(id)arg1;
@property(readonly, nonatomic) _Bool hasMiddleElement;
@property(readonly, nonatomic) _Bool hasPrevElement;
@property(readonly, nonatomic) _Bool hasNextElement;
- (long long)indexOfData:(id)arg1;
- (id)dataAtIndex:(long long)arg1;
- (long long)numberOfContentBeforeIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfContent;
- (id)initWithContentType:(long long)arg1 contentId:(id)arg2 middleCommentId:(id)arg3 middleContentId:(id)arg4;
- (id)initWithContentType:(long long)arg1;
- (id)initWithContentType:(long long)arg1 searchText:(id)arg2;
- (id)initWithContentType:(long long)arg1 searchIdentifier:(id)arg2 searchText:(id)arg3;
- (id)initWithContentType:(long long)arg1 memCategory:(id)arg2;
- (id)initWithContentType:(long long)arg1 user:(id)arg2;
- (id)initWithContentType:(long long)arg1 searchText:(id)arg2 memCategory:(id)arg3 content:(id)arg4;
- (id)initWithContentType:(long long)arg1 contentIds:(id)arg2;
- (id)initWithContentType:(long long)arg1 clusterId:(id)arg2 firstContentId:(id)arg3;
@property(retain, nonatomic) NSString *currentSessionCID;
@property(retain, nonatomic) NSString *lastSessionCID;
- (void)saveLastLoadedNativeAd:(id)arg1;
- (long long)numberOfContentWithoutAd;
- (void)itemsCountChanged;
- (void)adPlacer:(id)arg1 didLoadAdAtIndexPath:(id)arg2;
- (void)resetSmilesUnsmilesForNativeAds;
- (id)streamAdPlacer;
- (void)resetStreamAdPlacer;
- (void)setStreamAdPlacerProvider:(id)arg1;
- (id)streamAdPlacerProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

