//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, SCCameraBarButtonBlurView, SCShapeView, UIImage, UIImageView, UILabel, UIView;

@interface SCCameraBarButton : UIControl
{
    _Bool _blurHidden;
    NSString *_title;
    UIImage *_image;
    long long _titleAlignment;
    double _titleAlpha;
    UIView *_customView;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    SCCameraBarButtonBlurView *_blurView;
    UIImageView *_shadowImageView;
    SCShapeView *_blurMaskView;
    struct CGSize _previousBoundsSize;
}

@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) SCShapeView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) SCCameraBarButtonBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *customView; // @synthesize customView=_customView;
@property(nonatomic, getter=isBlurHidden) _Bool blurHidden; // @synthesize blurHidden=_blurHidden;
@property(nonatomic) double titleAlpha; // @synthesize titleAlpha=_titleAlpha;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)_resetBlurMask;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

