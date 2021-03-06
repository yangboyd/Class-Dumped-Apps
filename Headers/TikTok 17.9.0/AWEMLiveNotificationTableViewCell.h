//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMTNotificationBaseTableViewCell.h"

@class AWEMusLiveNotificationModel, AWEUserNameLabel, NSArray, TIKTOKNotificationButton, UIImageView, UILabel;

@interface AWEMLiveNotificationTableViewCell : AWEMTNotificationBaseTableViewCell
{
    NSArray *_liveUserModels;
    double _watchButtonWidth;
    UIImageView *_avatarView;
    UILabel *_descLabel;
    AWEUserNameLabel *_nameLabel;
    TIKTOKNotificationButton *_watchButton;
    AWEMusLiveNotificationModel *_liveModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEMusLiveNotificationModel *liveModel; // @synthesize liveModel=_liveModel;
@property(retain, nonatomic) TIKTOKNotificationButton *watchButton; // @synthesize watchButton=_watchButton;
@property(retain, nonatomic) AWEUserNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) double watchButtonWidth; // @synthesize watchButtonWidth=_watchButtonWidth;
@property(copy, nonatomic) NSArray *liveUserModels; // @synthesize liveUserModels=_liveUserModels;
- (double)contentLabelWidth;
- (void)didTapUserView:(id)arg1;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)transferToLiveWithUserInfo:(id)arg1;
- (void)watchLiveButtonPressed:(id)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

