//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, _TtC6fiverr14LeadBadgeLabel;

@interface _TtC6fiverr21FVRStudioExpandedCell : UITableViewCell
{
    // Error parsing type: , name: seperatorView
    // Error parsing type: , name: priceLabel
    // Error parsing type: , name: amountLabel
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: leadBadgeLabel
}

+ (double)cellHeightWithInfoData:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithInfoExpandedData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
@property(nonatomic) __weak _TtC6fiverr14LeadBadgeLabel *leadBadgeLabel; // @synthesize leadBadgeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel;
@property(nonatomic) __weak UIView *seperatorView; // @synthesize seperatorView;

@end

