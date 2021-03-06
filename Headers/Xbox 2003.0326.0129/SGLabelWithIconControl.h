//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXStackPanelView.h"

@class UILabel;

@interface SGLabelWithIconControl : XBXStackPanelView
{
    UILabel *_icon;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UILabel *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setStyleName:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setFontSize:(double)arg1;
- (void)setLabelStyleName:(id)arg1;
- (void)setIconStyleName:(id)arg1;
- (void)initializeLabelWithIconControl;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

