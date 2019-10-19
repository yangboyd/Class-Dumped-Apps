//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FVRSearchUserItem, UIImageView, UILabel, UIView;

@interface FVRUserResultCell : UITableViewCell
{
    UIImageView *_userProfileImageView;
    UIView *_onlienView;
    UIImageView *_userLevelImageView;
    UILabel *_userNameLabel;
    UILabel *_userRatingLabel;
    UILabel *_userAVGResponseTimeLabel;
    FVRSearchUserItem *_userItem;
}

+ (double)getCellHeight;
@property(retain, nonatomic) FVRSearchUserItem *userItem; // @synthesize userItem=_userItem;
@property(nonatomic) __weak UILabel *userAVGResponseTimeLabel; // @synthesize userAVGResponseTimeLabel=_userAVGResponseTimeLabel;
@property(nonatomic) __weak UILabel *userRatingLabel; // @synthesize userRatingLabel=_userRatingLabel;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak UIImageView *userLevelImageView; // @synthesize userLevelImageView=_userLevelImageView;
@property(nonatomic) __weak UIView *onlienView; // @synthesize onlienView=_onlienView;
@property(nonatomic) __weak UIImageView *userProfileImageView; // @synthesize userProfileImageView=_userProfileImageView;
- (void).cxx_destruct;
- (void)setupUserLevel:(id)arg1;
- (id)getAVGResponseTimeFormat:(id)arg1;
- (id)getRatingFormatedString:(id)arg1 ratingCount:(id)arg2;
- (void)layoutSubviews;
- (void)configureWith:(id)arg1;
- (void)awakeFromNib;

@end

