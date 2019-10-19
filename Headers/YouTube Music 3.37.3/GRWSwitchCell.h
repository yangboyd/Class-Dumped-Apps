//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRWCollectionViewTextCell.h"

@class UISwitch;

@interface GRWSwitchCell : GRWCollectionViewTextCell
{
    CDUnknownBlockType _switchChanged;
    UISwitch *_accessorySwitch;
}

@property(readonly, nonatomic) UISwitch *accessorySwitch; // @synthesize accessorySwitch=_accessorySwitch;
@property(copy, nonatomic) CDUnknownBlockType switchChanged; // @synthesize switchChanged=_switchChanged;
- (void).cxx_destruct;
- (void)applyStyleColor;
- (void)prepareForReuse;
- (void)setSwitchOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)accessorySwitchChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

