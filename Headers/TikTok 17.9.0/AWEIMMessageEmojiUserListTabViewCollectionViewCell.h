//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEIMMessageEmojiUserListTabViewViewModel, UIImageView, UILabel, UIView;

@interface AWEIMMessageEmojiUserListTabViewCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    UILabel *_numberLabel;
    UIImageView *_emojiView;
    UIView *_selectedView;
    AWEIMMessageEmojiUserListTabViewViewModel *_viewModel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) AWEIMMessageEmojiUserListTabViewViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIImageView *emojiView; // @synthesize emojiView=_emojiView;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
- (void)layoutSubviews;
- (void)configWithViewModel:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

