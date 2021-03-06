//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, OGLTextWithImageViewLayoutConfiguration, OGLTextWithImageViewTextStyle, UIColor, UIImageView, UILabel;

@interface OGLTextWithImageView : UIView
{
    UIImageView *_imageView;
    _Bool _isDisabled;
    OGLTextWithImageViewLayoutConfiguration *_layoutConfiguration;
    OGLTextWithImageViewTextStyle *_textStyleConfiguration;
    UIColor *_imageTintColor;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_leadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *leadingView; // @synthesize leadingView=_leadingView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(retain, nonatomic) OGLTextWithImageViewTextStyle *textStyleConfiguration; // @synthesize textStyleConfiguration=_textStyleConfiguration;
@property(retain, nonatomic) OGLTextWithImageViewLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
- (id)accessibilityLabel;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (double)imageViewSide;
- (id)imageView;
- (void)addSubviewsToHierarchy;
@property(readonly, nonatomic) double textLeadingSpace;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) double subtitleCenterY;
@property(readonly, nonatomic) double subtitleRight;
@property(readonly, nonatomic) double titleRight;
- (void)updateWithTitle:(id)arg1 subtitle:(id)arg2 leadingView:(id)arg3;
- (void)updateWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void)OGLTextWithImageViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

