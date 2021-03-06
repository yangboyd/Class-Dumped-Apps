//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, UIImageView, UILabel;
@protocol IGTwoFactorTrustedDevicesCellDelegate;

@interface IGTwoFactorTrustedDevicesCell : UICollectionViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGTapButton *_moreButton;
    id <IGTwoFactorTrustedDevicesCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTwoFactorTrustedDevicesCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapOnMoreButton;
- (id)getCellSubtitle;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

