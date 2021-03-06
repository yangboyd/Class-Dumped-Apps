//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DocosDiscussionStatusHeaderView, DocosPECollaboratorsView, DocosPEStreamDiscussionData, GIPNetworkImageView, MDCCard, UILabel, UIStackView, UIView;

@interface DocosPEStreamCell : UITableViewCell
{
    DocosPEStreamDiscussionData *_discussionData;
    MDCCard *_containerView;
    UIStackView *_mainStackView;
    UIView *_footerContainerView;
    UIStackView *_headPostDetailsStackView;
    UIStackView *_footerStackView;
    GIPNetworkImageView *_headPostAvatarImageView;
    UILabel *_headPostAuthorLabel;
    UILabel *_headPostTimestampLabel;
    UILabel *_quoteLabel;
    UILabel *_headPostContentLabel;
    UILabel *_footerLabel;
    DocosDiscussionStatusHeaderView *_headerView;
    DocosPECollaboratorsView *_collaboratorsView;
}

+ (id)quoteLabel;
+ (id)contentLabel;
+ (id)captionLabel;
+ (id)authorLabel;
+ (id)avatarImageView;
+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) DocosPECollaboratorsView *collaboratorsView; // @synthesize collaboratorsView=_collaboratorsView;
@property(readonly, nonatomic) DocosDiscussionStatusHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) UILabel *headPostContentLabel; // @synthesize headPostContentLabel=_headPostContentLabel;
@property(readonly, nonatomic) UILabel *quoteLabel; // @synthesize quoteLabel=_quoteLabel;
@property(readonly, nonatomic) UILabel *headPostTimestampLabel; // @synthesize headPostTimestampLabel=_headPostTimestampLabel;
@property(readonly, nonatomic) UILabel *headPostAuthorLabel; // @synthesize headPostAuthorLabel=_headPostAuthorLabel;
@property(readonly, nonatomic) GIPNetworkImageView *headPostAvatarImageView; // @synthesize headPostAvatarImageView=_headPostAvatarImageView;
@property(readonly, nonatomic) UIStackView *footerStackView; // @synthesize footerStackView=_footerStackView;
@property(readonly, nonatomic) UIStackView *headPostDetailsStackView; // @synthesize headPostDetailsStackView=_headPostDetailsStackView;
@property(readonly, nonatomic) UIView *footerContainerView; // @synthesize footerContainerView=_footerContainerView;
@property(readonly, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(readonly, nonatomic) MDCCard *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) DocosPEStreamDiscussionData *discussionData; // @synthesize discussionData=_discussionData;
- (id)a11yLabelForFooter;
- (id)a11yLabelForStream;
- (void)configureWithDocosStreamDiscussionData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

