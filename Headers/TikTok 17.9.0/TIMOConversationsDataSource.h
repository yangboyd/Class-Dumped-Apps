//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMMessageStoreChangesObserver-Protocol.h"

@class NSArray, NSCache, NSMutableDictionary, NSString, NSTimer;
@protocol TIMMessageStoreProtocol, TIMOConversationsDataSourceDelegate;

@interface TIMOConversationsDataSource : NSObject <TIMMessageStoreChangesObserver>
{
    _Bool _includeEmptyConversation;
    _Bool _hasMore;
    _Bool _needsRefresh;
    _Bool _refreshing;
    unsigned long long _totalUnreadNumberForUnmutedConversations;
    unsigned long long _totalUnreadNumberForMutedConversations;
    CDUnknownBlockType _filterBlock;
    id <TIMOConversationsDataSourceDelegate> _delegate;
    NSArray *_arrInboxType;
    CDUnknownBlockType _rawFilterBlock;
    long long _loadLimit;
    NSArray *_currentConversations;
    NSMutableDictionary *_unreadCountInDBDict;
    id <TIMMessageStoreProtocol> _db;
    NSCache *_filterResultCache;
    NSTimer *_refreshTimer;
    NSString *_refreshingToken;
}

+ (void)fetchJoinedConversationsInInbox:(int)arg1 cursor:(long long)arg2 conversationType:(unsigned long long)arg3 sortType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)fetchCreateConversationsInInbox:(int)arg1 cursor:(long long)arg2 conversationType:(unsigned long long)arg3 sortType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)fetchAllConversationsInInbox:(int)arg1 cursor:(long long)arg2 conversationType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)fetchConversationInfo:(long long)arg1 conversationID:(id)arg2 type:(unsigned long long)arg3 inInbox:(int)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)fetchAllFavoritedConversationsInInbox:(int)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchAllStickOnTopConversationsInInbox:(int)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)compareConversation:(id)arg1 with:(id)arg2;
@property(copy) NSString *refreshingToken; // @synthesize refreshingToken=_refreshingToken;
@property(retain) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(retain, nonatomic) NSCache *filterResultCache; // @synthesize filterResultCache=_filterResultCache;
@property(retain, nonatomic) id <TIMMessageStoreProtocol> db; // @synthesize db=_db;
@property(retain, nonatomic) NSMutableDictionary *unreadCountInDBDict; // @synthesize unreadCountInDBDict=_unreadCountInDBDict;
@property(retain, nonatomic) NSArray *currentConversations; // @synthesize currentConversations=_currentConversations;
@property(nonatomic) long long loadLimit; // @synthesize loadLimit=_loadLimit;
@property(copy, nonatomic) CDUnknownBlockType rawFilterBlock; // @synthesize rawFilterBlock=_rawFilterBlock;
@property(retain, nonatomic) NSArray *arrInboxType; // @synthesize arrInboxType=_arrInboxType;
@property(nonatomic) __weak id <TIMOConversationsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool includeEmptyConversation; // @synthesize includeEmptyConversation=_includeEmptyConversation;
@property(nonatomic) unsigned long long totalUnreadNumberForMutedConversations; // @synthesize totalUnreadNumberForMutedConversations=_totalUnreadNumberForMutedConversations;
@property(nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations; // @synthesize totalUnreadNumberForUnmutedConversations=_totalUnreadNumberForUnmutedConversations;
- (void).cxx_destruct;
- (void)saveConversationsUnreads:(id)arg1;
- (id)filteredConversations:(id)arg1;
- (_Bool)shouldFilterConversation:(id)arg1;
- (void)dealWithUpdate:(id)arg1 updateType:(long long)arg2;
- (void)onConversationCleared:(id)arg1;
- (void)onMessagesCreated:(id)arg1 belongingConversationMap:(id)arg2 reason:(id)arg3;
- (void)onConversationsDeleted:(id)arg1;
- (void)onConversationsUpdated:(id)arg1;
- (void)onConversationsCreated:(id)arg1;
- (id)getConversationsByIdentifiers:(id)arg1;
- (id)sortedIdentifiersWithAdditionalItems:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *currentConversationIdentifiers;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)invalidConversationFilterResult:(id)arg1;
- (void)refreshFired:(id)arg1;
- (void)setNeedRefresh;
- (double)getDelayOfInboxes;
- (double)getDelayOfInbox:(int)arg1;
- (void)loadRemainingSessions;
- (void)loadSessions;
- (void)_refreshWithToken:(id)arg1;
- (void)_refresh;
- (void)refresh;
- (id)initWithRawFilter:(CDUnknownBlockType)arg1 includeEmpty:(_Bool)arg2 limit:(long long)arg3 inbox:(id)arg4;
- (id)initWithRawFilter:(CDUnknownBlockType)arg1 includeEmpty:(_Bool)arg2 inbox:(id)arg3;
- (id)initWithRawFilter:(CDUnknownBlockType)arg1 includeEmpty:(_Bool)arg2;
- (id)initWithFilter:(CDUnknownBlockType)arg1 includeEmpty:(_Bool)arg2 limit:(long long)arg3 inbox:(id)arg4 delegate:(id)arg5;
- (id)initWithFilter:(CDUnknownBlockType)arg1 includeEmpty:(_Bool)arg2 inbox:(id)arg3;
- (id)initWithFilter:(CDUnknownBlockType)arg1 includeEmpty:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

