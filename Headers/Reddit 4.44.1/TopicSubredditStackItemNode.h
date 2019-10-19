//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseButtonNode.h"

@class ASTextNode, Subreddit, SubscribableButtonNode;

@interface TopicSubredditStackItemNode : BaseButtonNode
{
    _Bool _isSeeMore;
    Subreddit *_subreddit;
    SubscribableButtonNode *_subredditIconNode;
    ASTextNode *_seeMoreTextNode;
    long long _seeMoreCount;
}

@property(nonatomic) long long seeMoreCount; // @synthesize seeMoreCount=_seeMoreCount;
@property(retain, nonatomic) ASTextNode *seeMoreTextNode; // @synthesize seeMoreTextNode=_seeMoreTextNode;
@property(retain, nonatomic) SubscribableButtonNode *subredditIconNode; // @synthesize subredditIconNode=_subredditIconNode;
@property(nonatomic) _Bool isSeeMore; // @synthesize isSeeMore=_isSeeMore;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
- (void).cxx_destruct;
- (void)didTapButton:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureNodes;
- (void)createNodes;
- (id)initWithSeeMoreCount:(long long)arg1;
- (id)initWithSubreddit:(id)arg1;

@end

