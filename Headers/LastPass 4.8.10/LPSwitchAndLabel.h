//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel, UISwitch;

@interface LPSwitchAndLabel : UIControl
{
    UILabel *_label;
    UISwitch *_uiswitch;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UISwitch *uiswitch; // @synthesize uiswitch=_uiswitch;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit_LPSwitchAndLabel;

@end

