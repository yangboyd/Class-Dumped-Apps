//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class Comment, CommentAwardsNode;

@interface CommentAwardsView : BaseView
{
    Comment *_comment;
    CommentAwardsNode *_node;
}

+ (struct CGSize)calculatedSizeWithData:(id)arg1;
@property(retain, nonatomic) CommentAwardsNode *node; // @synthesize node=_node;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithComment:(id)arg1;

@end

