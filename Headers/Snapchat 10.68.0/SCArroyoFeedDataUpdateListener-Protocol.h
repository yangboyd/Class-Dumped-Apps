//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, SCFriendsFeedFetchContext;

@protocol SCArroyoFeedDataUpdateListener
- (void)didFetchFeedCompleteFeedEntries:(NSArray *)arg1 fetchContext:(SCFriendsFeedFetchContext *)arg2;
- (void)didQueryFeedCompleteFeedEntries:(NSArray *)arg1 hasNoMore:(_Bool)arg2 fetchContext:(SCFriendsFeedFetchContext *)arg3;
- (void)didFetchAndSyncFeedCompleteUpdatedFeedEntries:(NSArray *)arg1 deletedFeedEntries:(NSArray *)arg2 fetchContext:(SCFriendsFeedFetchContext *)arg3;
- (void)didSyncFeedCompleteUpdatedFeedEntries:(NSArray *)arg1 deletedFeedEntries:(NSArray *)arg2 fetchContext:(SCFriendsFeedFetchContext *)arg3;
- (void)didUpdateFeedEntries:(NSArray *)arg1 deletedFeedEntries:(NSArray *)arg2;
@end

