//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommentBarNodeDelegate-Protocol.h"
#import "FeedPostContentNodeDelegate-Protocol.h"
#import "FeedPostEventBarNodeDelegate-Protocol.h"
#import "_TtP6Reddit26FeedPostHeaderNodeDelegate_-Protocol.h"
#import "_TtP6Reddit28FeedPostMetadataNodeDelegate_-Protocol.h"
#import "_TtP6Reddit29FeedPostActionBarNodeDelegate_-Protocol.h"
#import "_TtP6Reddit32FeedPostModActionBarNodeDelegate_-Protocol.h"

@class _TtC6Reddit18FeedPostCellNodeV2;

@protocol _TtP6Reddit26FeedPostCellNodeV2Delegate_ <_TtP6Reddit29FeedPostActionBarNodeDelegate_, _TtP6Reddit26FeedPostHeaderNodeDelegate_, _TtP6Reddit28FeedPostMetadataNodeDelegate_, _TtP6Reddit32FeedPostModActionBarNodeDelegate_, CommentBarNodeDelegate, FeedPostContentNodeDelegate, FeedPostEventBarNodeDelegate>
- (void)cellNodeDidTap:(_TtC6Reddit18FeedPostCellNodeV2 *)arg1;
@end

