//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class ColorVariationPickerView, NSString, UIButton, UIImageView, UIView;

@interface QWBGColorPickerView : UIScrollView
{
    ColorVariationPickerView *colorVariationPickerView_;
    UIButton *_noColorButton;
    UIImageView *_checkMarkView;
    _Bool _showNoColorOption;
    NSString *_noColorString;
    long long _interfaceOrientation;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(retain, nonatomic) NSString *noColorString; // @synthesize noColorString=_noColorString;
@property(nonatomic) _Bool showNoColorOption; // @synthesize showNoColorOption=_showNoColorOption;
- (struct CGRect)containerViewBounds;
- (void)setNoColorIsChecked:(_Bool)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (double)variationPadding;
- (void)updateNoColorState;
- (void)noColorTapped:(id)arg1;
- (double)expectedHeight;
- (void)layoutCheckmark;
- (void)layoutNoColorButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 variationView:(id)arg2;

@end

