//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CommentTreeHeaderNode, NSURL;

@protocol CommentTreeHeaderNodeDelegate <NSObject>
- (void)commentTreeHeaderNodeDidLongPress:(CommentTreeHeaderNode *)arg1;
- (void)commentTreeHeaderNodeDidTapReports:(CommentTreeHeaderNode *)arg1;
- (void)commentTreeHeaderNode:(CommentTreeHeaderNode *)arg1 didTapLinkURL:(NSURL *)arg2;
- (void)commentTreeHeaderNodeDidTap:(CommentTreeHeaderNode *)arg1;
@end

