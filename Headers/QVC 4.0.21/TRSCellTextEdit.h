//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UITextField;

@interface TRSCellTextEdit : UITableViewCell
{
    UILabel *label;
    UITextField *field;
    UIImageView *downBorder;
    UIImageView *topDivider;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *topDivider; // @synthesize topDivider;
@property(retain, nonatomic) UIImageView *downBorder; // @synthesize downBorder;
@property(retain, nonatomic) UITextField *field; // @synthesize field;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

