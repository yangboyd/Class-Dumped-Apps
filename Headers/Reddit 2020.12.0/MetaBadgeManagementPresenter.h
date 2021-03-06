//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MetaUsernameDecoration, NSDictionary, NSString, RedditService, Subreddit, UIColor;
@protocol MetaBadgeManagementPresenterDelegate;

@interface MetaBadgeManagementPresenter : NSObject
{
    NSDictionary *_viewModels;
    id <MetaBadgeManagementPresenterDelegate> _delegate;
    RedditService *_redditService;
    Subreddit *_subreddit;
    NSString *_userPK;
    UIColor *_contentColor;
}

@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(nonatomic) __weak RedditService *redditService; // @synthesize redditService=_redditService;
@property(nonatomic) __weak id <MetaBadgeManagementPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *viewModels; // @synthesize viewModels=_viewModels;
- (void).cxx_destruct;
@property(readonly, nonatomic) MetaUsernameDecoration *usernameDecoration;
- (void)updateSelectedBadgeViewModel:(id)arg1;
- (void)modifyRemoteSelectedBadgeViewModel:(id)arg1;
- (void)modifySelectedBadgeViewModel:(id)arg1;
- (void)replaceViewModels:(id)arg1;
- (id)groupViewModelsByPlacement:(id)arg1;
- (id)convertProductsToViewModels:(id)arg1;
- (id)convertBadgesToViewModels:(id)arg1;
- (id)placementViewModelsFromBadgeViewModels:(id)arg1 placement:(id)arg2 productCollections:(id)arg3;
- (void)didFetchRemoteBadgeProducts:(id)arg1 ownedBadges:(id)arg2 productCollections:(id)arg3 errors:(id)arg4;
- (void)reloadData;
- (id)initWithService:(id)arg1 subreddit:(id)arg2 userPK:(id)arg3;

@end

