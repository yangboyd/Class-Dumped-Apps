//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPaymentsSettingsTableViewCell.h"

@class UIImageView;

@interface SCPaymentsAddItemTableViewCell : SCPaymentsSettingsTableViewCell
{
    UIImageView *_plusIconImageView;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setCellType:(unsigned long long)arg1;
- (_Bool)isCellSelected;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

