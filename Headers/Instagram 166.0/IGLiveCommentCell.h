//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGLiveCommentModel, IGLiveUserPaySupporterBadgeView, IGProfilePictureImageView, UIImageView, UILabel;

@interface IGLiveCommentCell : UICollectionViewCell
{
    UIImageView *_verifiedBadgeView;
    IGLiveUserPaySupporterBadgeView *_supporterBadgeView;
    UILabel *_commentBodyLabel;
    IGLiveCommentModel *_comment;
    _Bool _isCommentRedesignEnabled;
    UILabel *_commentHeadingLabel;
    IGProfilePictureImageView *_profileImageView;
}

+ (double)cellHeightForCommentWithUserName:(id)arg1 commentText:(id)arg2 thatFits:(struct CGSize)arg3 isHeadingHidden:(_Bool)arg4 isBodyHidden:(_Bool)arg5 isCommentRedesignEnabled:(_Bool)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(readonly, nonatomic) UILabel *commentHeadingLabel; // @synthesize commentHeadingLabel=_commentHeadingLabel;
@property(nonatomic) _Bool isCommentRedesignEnabled; // @synthesize isCommentRedesignEnabled=_isCommentRedesignEnabled;
@property(readonly, nonatomic) IGLiveCommentModel *comment; // @synthesize comment=_comment;
- (void)layoutSubviews;
- (void)configureWithComment:(id)arg1 module:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

