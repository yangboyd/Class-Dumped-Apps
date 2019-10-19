//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UILabel;
@protocol SCArcadiaInfoCellDelegate;

@interface SCArcadiaInfoCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_idLabel;
    UIButton *_shareButton;
    id <SCArcadiaInfoCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCArcadiaInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapShareButton;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *idText;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

