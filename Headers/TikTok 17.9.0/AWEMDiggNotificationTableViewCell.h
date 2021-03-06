//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMTNotificationBaseTableViewCell.h"

@class AWENotificationMutiAvatarView, UIImageView, UILabel, UIView, YYLabel;

@interface AWEMDiggNotificationTableViewCell : AWEMTNotificationBaseTableViewCell
{
    UIImageView *_avatarImageView;
    AWENotificationMutiAvatarView *_mutiAvatarImageView;
    YYLabel *_nameLabel;
    UILabel *_descLabel;
    UIImageView *_videoCoverImageView;
    UIView *_quoteView;
    UILabel *_quoteCommentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *quoteCommentLabel; // @synthesize quoteCommentLabel=_quoteCommentLabel;
@property(retain, nonatomic) UIView *quoteView; // @synthesize quoteView=_quoteView;
@property(retain, nonatomic) UIImageView *videoCoverImageView; // @synthesize videoCoverImageView=_videoCoverImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) YYLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AWENotificationMutiAvatarView *mutiAvatarImageView; // @synthesize mutiAvatarImageView=_mutiAvatarImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)p_trackerInnerMessage;
- (_Bool)isNew;
- (double)contentLabelWidth;
- (void)didTapUserView:(id)arg1;
- (void)transferToDiggList;
- (void)transferToAweme;
- (void)setLikesPushOpenAlertIfNeeded;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

