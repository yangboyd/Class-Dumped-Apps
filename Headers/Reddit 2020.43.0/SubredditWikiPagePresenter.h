//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, NSURL, RedditService, Subreddit, SubredditWikiIndex, SubredditWikiPage;
@protocol AccountContext, SubredditWikiPagePresentable;

@interface SubredditWikiPagePresenter : NSObject
{
    _Bool _isFetchingSubreddit;
    _Bool _isFetchingStyling;
    _Bool _isFetchingWikiPage;
    id <AccountContext> _accountContext;
    SubredditWikiPage *_wikiPage;
    id <SubredditWikiPagePresentable> _presentable;
    Subreddit *_subreddit;
    NSString *_subredditName;
    NSURL *_wikiPageURL;
    NSString *_pathName;
    SubredditWikiIndex *_wikiIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingWikiPage; // @synthesize isFetchingWikiPage=_isFetchingWikiPage;
@property(nonatomic) _Bool isFetchingStyling; // @synthesize isFetchingStyling=_isFetchingStyling;
@property(nonatomic) _Bool isFetchingSubreddit; // @synthesize isFetchingSubreddit=_isFetchingSubreddit;
@property(retain, nonatomic) SubredditWikiIndex *wikiIndex; // @synthesize wikiIndex=_wikiIndex;
@property(readonly, nonatomic) NSString *pathName; // @synthesize pathName=_pathName;
@property(retain, nonatomic) NSURL *wikiPageURL; // @synthesize wikiPageURL=_wikiPageURL;
@property(readonly, nonatomic) NSString *subredditName; // @synthesize subredditName=_subredditName;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(nonatomic) __weak id <SubredditWikiPagePresentable> presentable; // @synthesize presentable=_presentable;
@property(retain, nonatomic) SubredditWikiPage *wikiPage; // @synthesize wikiPage=_wikiPage;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(readonly, copy, nonatomic) NSAttributedString *footerTextString;
@property(readonly, copy, nonatomic) NSAttributedString *contentAttributedString;
- (id)formattedIndexPagesAttributedString;
@property(readonly, nonatomic) NSString *wikiPageTitle;
- (_Bool)isDeeplinkToSameWiki:(id)arg1;
- (void)fetchStyling;
- (void)fetchSubredditAndStyling;
- (void)fetchWikiIndex;
- (void)fetchWikiPage;
- (void)fetchSubredditWikiData;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithPresenter:(id)arg1 pathName:(id)arg2 wikiPageURL:(id)arg3;
- (id)initWithAccountContext:(id)arg1 subreddit:(id)arg2 pathName:(id)arg3 wikiPageURL:(id)arg4;
- (id)initWithAccountContext:(id)arg1 subredditName:(id)arg2 pathName:(id)arg3 wikiPageURL:(id)arg4;
- (id)initWithAccountContext:(id)arg1 pathName:(id)arg2 wikiPageURL:(id)arg3;

@end

