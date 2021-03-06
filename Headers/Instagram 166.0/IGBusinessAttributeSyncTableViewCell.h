//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGTableViewCell.h>

@class IGSwitch, UILabel;
@protocol IGBusinessAttributeSyncTableViewCellDelegate;

@interface IGBusinessAttributeSyncTableViewCell : IGTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGSwitch *_toggle;
    id <IGBusinessAttributeSyncTableViewCellDelegate> _delegate;
}

+ (double)cellHeightForText:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBusinessAttributeSyncTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_switchValueIsOn:(_Bool)arg1;
- (void)_setup;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

