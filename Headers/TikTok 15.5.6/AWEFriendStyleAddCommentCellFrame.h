//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEFriendStyleCommentBaseCellFrame.h"

@interface AWEFriendStyleAddCommentCellFrame : AWEFriendStyleCommentBaseCellFrame
{
    struct CGRect _iconFrame;
    struct CGRect _labelFrame;
}

@property(nonatomic) struct CGRect labelFrame; // @synthesize labelFrame=_labelFrame;
@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
- (_Bool)canShowCommentInputView;
- (double)cellHeight;
- (void)calculateLayoutWithContainerWidth:(double)arg1;
- (id)init;

@end

