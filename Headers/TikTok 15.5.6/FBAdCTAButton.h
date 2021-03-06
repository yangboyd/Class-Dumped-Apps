//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface FBAdCTAButton : UIButton
{
    unsigned long long _ctaButtonStyle;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned long long ctaButtonStyle; // @synthesize ctaButtonStyle=_ctaButtonStyle;
- (void).cxx_destruct;
- (id)lightColor;
- (id)darkColor;
- (void)layoutSubviews;
- (void)setupBackgroundLayerWithColor:(id)arg1 cornerRadius:(double)arg2 shadowEnabled:(_Bool)arg3 animationDuration:(double)arg4;
- (void)setCtaButtonStyle:(unsigned long long)arg1 animationDuration:(double)arg2;
- (void)setupWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;

@end

