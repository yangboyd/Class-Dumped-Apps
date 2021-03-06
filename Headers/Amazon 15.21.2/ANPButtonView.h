//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ANPButtonSpec, CALayer, UIImageView, UILabel;

@interface ANPButtonView : UIView
{
    ANPButtonSpec *_spec;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    CALayer *_backgroundLayer;
}

@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ANPButtonSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)didReceiveTap:(id)arg1;
- (void)exitHighlightMode;
- (void)enterHighlightMode;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)availableContentSizeWithPaddings:(struct UIEdgeInsets)arg1;
- (struct CGRect)imageRect;
- (struct CGRect)titleRect;
- (struct CGPoint)contentOriginWithHorizontalAlignment:(unsigned long long)arg1 verticalAlignment:(unsigned long long)arg2 AvailableSize:(struct CGSize)arg3 contentSize:(struct CGSize)arg4 paddings:(struct UIEdgeInsets)arg5;
- (struct CGRect)borderRect;
- (long long)imageContentMode;
- (void)applyImageUri;
- (void)layoutImageView;
- (void)layoutTitleLabel;
- (void)layoutBackgroundLayer;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

