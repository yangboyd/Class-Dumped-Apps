//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YTImageView;

@interface YTRequiredSignInBackgroundView : UIView
{
    YTImageView *_backgroundImageView;
    YTImageView *_logoImageView;
}

+ (double)backgroundImageHeight;
+ (double)visibleHeight;
@property(retain, nonatomic) YTImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) YTImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

