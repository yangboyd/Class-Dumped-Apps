//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIFont, UIImageView, UILabel;

@interface IGFancyTextSegment : UIControl
{
    _Bool _showFallbackIcon;
    UILabel *_titleLabel;
    UIImageView *_fallbackIconView;
    UIColor *_activeColor;
    UIColor *_inactiveColor;
    UIColor *_activeFallbackIconColor;
    UIColor *_inactiveFallbackIconColor;
    UIFont *_font;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *inactiveFallbackIconColor; // @synthesize inactiveFallbackIconColor=_inactiveFallbackIconColor;
@property(retain, nonatomic) UIColor *activeFallbackIconColor; // @synthesize activeFallbackIconColor=_activeFallbackIconColor;
@property(retain, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor=_inactiveColor;
@property(retain, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
@property(nonatomic) _Bool showFallbackIcon; // @synthesize showFallbackIcon=_showFallbackIcon;
- (void)_updateHighlightedColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(readonly, nonatomic) UIImageView *fallbackIconView; // @synthesize fallbackIconView=_fallbackIconView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)titleTooWideToFit;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 fallbackIcon:(id)arg2;

@end

