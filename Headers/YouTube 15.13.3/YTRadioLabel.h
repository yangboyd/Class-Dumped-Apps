//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"

@class FLXLayout, MDCInkTouchController, NSString, YTFormattedStringLabel, YTIFormattedString, YTQTMButton;
@protocol GA11YMixinImpl, YTRadioLabelDelegate;

@interface YTRadioLabel : UIControl <GA11YMixinEmbedder, MDCInkTouchControllerDelegate>
{
    MDCInkTouchController *_inkTouchController;
    FLXLayout *_layout;
    YTIFormattedString *_title;
    _Bool _isSelected;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTRadioLabelDelegate> _delegate;
    long long _index;
    YTFormattedStringLabel *_label;
    YTQTMButton *_radioButton;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) YTQTMButton *radioButton; // @synthesize radioButton=_radioButton;
@property(retain, nonatomic) YTFormattedStringLabel *label; // @synthesize label=_label;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) YTIFormattedString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <YTRadioLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapUp;
- (void)didTouchUpInside:(id)arg1 event:(id)arg2;
- (void)updateViewLayout;
- (void)updateLabelSizeForRadioLabelSize:(struct CGSize)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)resetLayout;
- (id)root;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

