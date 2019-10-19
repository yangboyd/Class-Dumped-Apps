//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingNetworkSource.h"

@class NSArray, NSDictionary, Post;

@interface CommentNetworkSource : ListingNetworkSource
{
    _Bool _isFetchingBottomComments;
    Post *_post;
    NSArray *_threadedComments;
    NSDictionary *_indexedComments;
}

@property(retain, nonatomic) NSDictionary *indexedComments; // @synthesize indexedComments=_indexedComments;
@property(nonatomic) _Bool isFetchingBottomComments; // @synthesize isFetchingBottomComments=_isFetchingBottomComments;
@property(copy, nonatomic) NSArray *threadedComments; // @synthesize threadedComments=_threadedComments;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTruncatedCommentsFetch;
- (_Bool)nodeHasChildren:(id)arg1;
- (void)deleteCommentTreeNode:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)insertCommentTreeNode:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)fetchBottomCommentsWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)fetchChildrenForNode:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)parseNodesToArray:(id)arg1 atDepth:(long long)arg2 forParent:(id)arg3;
- (void)parseMoreData:(id)arg1;
- (void)parseData:(id)arg1;
- (id)initWithPost:(id)arg1 fetchURLString:(id)arg2 parameters:(id)arg3;

@end

