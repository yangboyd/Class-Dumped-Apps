//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class Label, NSLayoutConstraint, UIButton, UISwitch;
@protocol LabelInfoSwitchCellDelegate;

@interface LabelInfoSwitchCell : UITableViewCell
{
    Label *_label;
    UISwitch *_switchButton;
    UIButton *_infoButton;
    id <LabelInfoSwitchCellDelegate> _delegate;
    NSLayoutConstraint *_leadingSpaceToSuperviewH;
    NSLayoutConstraint *_trailingSpaceToSuperviewH;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *trailingSpaceToSuperviewH; // @synthesize trailingSpaceToSuperviewH=_trailingSpaceToSuperviewH;
@property(retain, nonatomic) NSLayoutConstraint *leadingSpaceToSuperviewH; // @synthesize leadingSpaceToSuperviewH=_leadingSpaceToSuperviewH;
@property __weak id <LabelInfoSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) Label *label; // @synthesize label=_label;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)configureAccessibility;
- (void)updateConstraints;
- (void)switchValueChanged:(id)arg1;
- (void)hitInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)height;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

