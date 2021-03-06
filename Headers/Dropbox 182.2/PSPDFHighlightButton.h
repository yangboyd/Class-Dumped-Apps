//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, NSLayoutConstraint, NSString, PSPDFButton, UIColor, UIImage;

@interface PSPDFHighlightButton : UIControl
{
    double _borderWidth;
    double _itemSpacing;
    double _imageBottomInset;
    CAShapeLayer *_imageCircle;
    PSPDFButton *_imageButton;
    PSPDFButton *_labelButton;
    UIColor *_baseColor;
    UIColor *_imageCircleColor;
    double _imageSize;
    NSLayoutConstraint *_itemSpacingConstraint;
    NSLayoutConstraint *_itemBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *itemBottomConstraint; // @synthesize itemBottomConstraint=_itemBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *itemSpacingConstraint; // @synthesize itemSpacingConstraint=_itemSpacingConstraint;
@property(nonatomic) double imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIColor *imageCircleColor; // @synthesize imageCircleColor=_imageCircleColor;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
@property(retain, nonatomic) PSPDFButton *labelButton; // @synthesize labelButton=_labelButton;
@property(retain, nonatomic) PSPDFButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) CAShapeLayer *imageCircle; // @synthesize imageCircle=_imageCircle;
@property(nonatomic) double imageBottomInset; // @synthesize imageBottomInset=_imageBottomInset;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)shouldHighlight;
@property(retain, nonatomic) UIColor *imageBackgroundColor;
@property(retain, nonatomic) UIColor *imageColor;
@property(retain, nonatomic) UIColor *labelColor;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) double buttonHeight;
- (void)updateImageCirclePath;
- (void)updateColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setupImageButton:(id)arg1 labelButton:(id)arg2;
- (id)initWithImageSize:(double)arg1;

@end

