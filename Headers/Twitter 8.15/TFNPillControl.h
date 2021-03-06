//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, TFNPillTransformContainerView, UIColor, UIFont, UIImage, UIImageView, UILabel;
@protocol TFNPillAnimationProvider, TFNPillControlDelegate;

@interface TFNPillControl : UIView
{
    TFNPillTransformContainerView *_transformContainerView;
    UIImageView *_textIconView;
    unsigned long long _layoutConfig;
    _Bool _hideOnScroll;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_pillBackgroundColor;
    UIColor *_pillShadowColor;
    NSString *_text;
    UIImageView *_imageView;
    UIView *_customAccessoryView;
    double _textPromptSeconds;
    double _autoHideInterval;
    id <TFNPillControlDelegate> _delegate;
    id <TFNPillAnimationProvider> _animationProvider;
    unsigned long long _displayLocation;
    NSString *_navigateToEntryID;
    UILabel *_textLabel;
    NSDate *_timeFinishedPresenting;
}

@property(retain, nonatomic) NSDate *timeFinishedPresenting; // @synthesize timeFinishedPresenting=_timeFinishedPresenting;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *navigateToEntryID; // @synthesize navigateToEntryID=_navigateToEntryID;
@property(nonatomic) unsigned long long displayLocation; // @synthesize displayLocation=_displayLocation;
@property(nonatomic) _Bool hideOnScroll; // @synthesize hideOnScroll=_hideOnScroll;
@property(retain, nonatomic) id <TFNPillAnimationProvider> animationProvider; // @synthesize animationProvider=_animationProvider;
@property(nonatomic) __weak id <TFNPillControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double autoHideInterval; // @synthesize autoHideInterval=_autoHideInterval;
@property(nonatomic) double textPromptSeconds; // @synthesize textPromptSeconds=_textPromptSeconds;
@property(retain, nonatomic) UIView *customAccessoryView; // @synthesize customAccessoryView=_customAccessoryView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *pillShadowColor; // @synthesize pillShadowColor=_pillShadowColor;
@property(retain, nonatomic) UIColor *pillBackgroundColor; // @synthesize pillBackgroundColor=_pillBackgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
- (void).cxx_destruct;
- (void)scrollViewDidChangeContentOffset:(id)arg1;
- (double)_pillRemainVisibleInterval;
- (void)_hideAnimated:(_Bool)arg1 pillTapped:(_Bool)arg2 scrolled:(_Bool)arg3;
- (void)hideAnimated:(_Bool)arg1 pillTapped:(_Bool)arg2;
- (void)presentFromView:(id)arg1 withOffset:(double)arg2;
- (void)presentFromView:(id)arg1;
- (_Bool)tfn_dashGestureEnabled;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sendPillControlTappedDelegateMethod;
- (void)_setHighlighted:(_Bool)arg1 withDuration:(double)arg2;
- (void)_resetPillColors;
- (void)_updateLayout;
@property(nonatomic, getter=isTextHidden) _Bool textHidden;
@property(retain, nonatomic) UIImage *icon;
- (void)_resetImageFontAndColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutConfig:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

