//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIButton, UILabel;

@interface _TtC6fiverr21OrderTipTableViewCell : UITableViewCell
{
    // Error parsing type: , name: motivationLabel
    // Error parsing type: , name: customAmountButton
    // Error parsing type: , name: tipButtons
    // Error parsing type: , name: thresholdPrice
    // Error parsing type: , name: tipPrices
    // Error parsing type: , name: tipPercentages
    // Error parsing type: , name: showTipsAsPercentages
    // Error parsing type: , name: delegate
    // Error parsing type: , name: formatter
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)sendTipButtonWasClicked:(id)arg1;
- (void)sendCustomAmountButtonClicked:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;
@property(nonatomic, copy) NSArray *tipButtons;
@property(nonatomic) __weak UIButton *customAmountButton; // @synthesize customAmountButton;
@property(nonatomic) __weak UILabel *motivationLabel; // @synthesize motivationLabel;

@end

