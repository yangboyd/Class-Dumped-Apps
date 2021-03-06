//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class LPToggleButtonGroup, NSMutableArray, UILabel;

@interface LPToggleButton : UIControl
{
    UILabel *_titleLabel;
    NSMutableArray *_titleStrings;
    NSMutableArray *_titleColors;
    NSMutableArray *_backgroundColors;
    LPToggleButtonGroup *_group;
}

- (void).cxx_destruct;
@property(nonatomic) LPToggleButtonGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) NSMutableArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(readonly, nonatomic) NSMutableArray *titleColors; // @synthesize titleColors=_titleColors;
@property(readonly, nonatomic) NSMutableArray *titleStrings; // @synthesize titleStrings=_titleStrings;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)applySelectedStateToGroup;
- (void)applyAdditionalAttributes;
- (void)stateChanged;
- (unsigned long long)appearanceAttributeIndexForState:(unsigned long long)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit_LPToggleButton;

@end

