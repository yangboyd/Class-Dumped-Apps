//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface TIKTOKFeedSurveyChoiceTableViewCell : UITableViewCell
{
    long long _type;
    UILabel *_titleLabel;
    UIImageView *_selectImageView;
}

+ (double)cellHeightWithTableViewWidth:(double)arg1 title:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)updateImage;
- (void)setTitle:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

