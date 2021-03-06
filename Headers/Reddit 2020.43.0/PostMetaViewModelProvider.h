//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MetaBadgeManager, NSMutableArray, NSMutableDictionary, NextRunLoopScheduler, Subreddit, _TtC6Reddit33MetaSubredditPointBalanceProvider;
@protocol AccountContext;

@interface PostMetaViewModelProvider : NSObject
{
    id <AccountContext> _accountContext;
    MetaBadgeManager *_badgeManager;
    _TtC6Reddit33MetaSubredditPointBalanceProvider *_subredditPointBalanceProvider;
    Subreddit *_subreddit;
    NextRunLoopScheduler *_nextRunLoopScheduler;
    NSMutableDictionary *_postsByUsers;
    NSMutableDictionary *_viewModelsByPosts;
    NSMutableArray *_queuedUserPKs;
    NSMutableDictionary *_queuedPosts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *queuedPosts; // @synthesize queuedPosts=_queuedPosts;
@property(readonly, nonatomic) NSMutableArray *queuedUserPKs; // @synthesize queuedUserPKs=_queuedUserPKs;
@property(readonly, nonatomic) NSMutableDictionary *viewModelsByPosts; // @synthesize viewModelsByPosts=_viewModelsByPosts;
@property(readonly, nonatomic) NSMutableDictionary *postsByUsers; // @synthesize postsByUsers=_postsByUsers;
@property(readonly, nonatomic) NextRunLoopScheduler *nextRunLoopScheduler; // @synthesize nextRunLoopScheduler=_nextRunLoopScheduler;
@property(readonly, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(readonly, nonatomic) _TtC6Reddit33MetaSubredditPointBalanceProvider *subredditPointBalanceProvider; // @synthesize subredditPointBalanceProvider=_subredditPointBalanceProvider;
@property(readonly, nonatomic) MetaBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (id)postMetaViewModelForPost:(id)arg1;
- (void)fetchViewModelsForPosts:(id)arg1 viewModels:(id)arg2 service:(id)arg3;
- (void)updateWithBalances:(id)arg1;
- (void)updateViewModelsForPosts:(id)arg1;
- (void)updateViewModelsForUserPKs:(id)arg1;
- (id)initWithBadgeManager:(id)arg1 subreddit:(id)arg2 accountContext:(id)arg3;

@end

