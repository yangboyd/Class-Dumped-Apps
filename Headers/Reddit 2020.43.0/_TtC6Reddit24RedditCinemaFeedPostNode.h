//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCollectionViewCellNode.h"

@class ASDisplayNode, FeedPostCommentBarNode, FeedPostEventBarNode, FeedPostTextWithThumbnailNode, FeedPostTitleNode, Post, _TtC6Reddit21RedditCinemaVideoNode, _TtC7Economy18FeedPostAwardsNode;

@interface _TtC6Reddit24RedditCinemaFeedPostNode : BaseCollectionViewCellNode
{
    // Error parsing type: , name: post
    // Error parsing type: , name: viewContext
    // Error parsing type: , name: options
    // Error parsing type: , name: delegate
    // Error parsing type: , name: postVisibilityDelegate
    // Error parsing type: , name: headerNode
    // Error parsing type: , name: eventBarNode
    // Error parsing type: , name: textNode
    // Error parsing type: , name: contentNode
    // Error parsing type: , name: actionBarNode
    // Error parsing type: , name: awardsNode
    // Error parsing type: , name: awardTotalsObservation
    // Error parsing type: , name: upNextTitleNode
    // Error parsing type: , name: viewCountTextNode
    // Error parsing type: , name: shouldShowUpNextTitle
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewControllerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithVisibilityTracker:(id)arg1 visibilityOptions:(id)arg2;
- (void)dealloc;
@property(nonatomic) _Bool shouldShowUpNextTitle; // @synthesize shouldShowUpNextTitle;
@property(nonatomic, retain) _TtC7Economy18FeedPostAwardsNode *awardsNode; // @synthesize awardsNode;
@property(nonatomic, retain) FeedPostCommentBarNode *actionBarNode; // @synthesize actionBarNode;
@property(nonatomic, retain) ASDisplayNode *contentNode; // @synthesize contentNode;
@property(nonatomic, retain) FeedPostTextWithThumbnailNode *textNode; // @synthesize textNode;
@property(nonatomic, retain) FeedPostEventBarNode *eventBarNode; // @synthesize eventBarNode;
@property(nonatomic, retain) FeedPostTitleNode *headerNode; // @synthesize headerNode;
@property(nonatomic, readonly) _TtC6Reddit21RedditCinemaVideoNode *videoNode;
@property(nonatomic, retain) Post *post; // @synthesize post;

@end

