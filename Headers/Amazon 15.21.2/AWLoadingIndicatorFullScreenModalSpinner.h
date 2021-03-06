//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWLoadingIndicatorViewBase.h"

@class UIImage, UIImageView;

@interface AWLoadingIndicatorFullScreenModalSpinner : AWLoadingIndicatorViewBase
{
    UIImageView *_spinnerImageView;
    UIImage *_spinnerImage;
}

+ (id)presentInView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *spinnerImage; // @synthesize spinnerImage=_spinnerImage;
@property(retain, nonatomic) UIImageView *spinnerImageView; // @synthesize spinnerImageView=_spinnerImageView;
- (void).cxx_destruct;
- (void)updateForScrollInsets:(struct UIEdgeInsets)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)performCloseAnimation:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)startSpinner;
- (void)cacheSpinnerImage;

@end

