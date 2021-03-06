//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSLiveGradientBackgroundView, UIImageView, UILabel;

@interface IESLiveMTAddCoverImageView : UIView
{
    _Bool _vertical;
    _Bool _useNewStyle;
    UIImageView *_coverImageView;
    HTSLiveGradientBackgroundView *_gradientBackgroundView;
    UILabel *_titleLabel;
    UILabel *_topLeftLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useNewStyle; // @synthesize useNewStyle=_useNewStyle;
@property(retain, nonatomic) UILabel *topLeftLabel; // @synthesize topLeftLabel=_topLeftLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HTSLiveGradientBackgroundView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
- (void)forceUpdateHint:(id)arg1;
- (void)setCoverImageStatus:(long long)arg1;
- (void)setCoverImageWithURLs:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)renderUI;
- (id)initWithNewStyle:(_Bool)arg1;

@end

