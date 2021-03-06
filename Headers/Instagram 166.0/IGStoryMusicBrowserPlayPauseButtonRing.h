//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, IGStoryMusicProgressLoadingMask, NSArray, UIColor;

@interface IGStoryMusicBrowserPlayPauseButtonRing : UIView
{
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_circleOutlineLayer;
    CAShapeLayer *_playbackProgressLayer;
    IGStoryMusicProgressLoadingMask *_loadingMask;
    NSArray *_defaultGradientProgressColors;
    _Bool _loading;
    double _playbackProgress;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) NSArray *defaultGradientProgressColors;
@property(retain, nonatomic) NSArray *gradientProgressColors;
@property(retain, nonatomic) UIColor *ringColor;
- (void)endLoadingAnimationInstantly;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

