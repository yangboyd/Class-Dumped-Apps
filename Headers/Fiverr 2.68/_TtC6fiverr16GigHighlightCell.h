//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, _TtC6fiverr15ImageTextButton;

@interface _TtC6fiverr16GigHighlightCell : UITableViewCell
{
    // Error parsing type: , name: iconImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: helpfulLabel
    // Error parsing type: , name: yesButton
    // Error parsing type: , name: noButton
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)clickedNo:(id)arg1;
- (void)clickedYes:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic) __weak _TtC6fiverr15ImageTextButton *noButton; // @synthesize noButton;
@property(nonatomic) __weak _TtC6fiverr15ImageTextButton *yesButton; // @synthesize yesButton;
@property(nonatomic) __weak UILabel *helpfulLabel; // @synthesize helpfulLabel;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView;

@end

