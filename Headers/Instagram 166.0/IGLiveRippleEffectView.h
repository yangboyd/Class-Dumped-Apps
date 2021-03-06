//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEmitterCell, CAEmitterLayer, IGGradientRippleConfiguration;

@interface IGLiveRippleEffectView : UIView
{
    CAEmitterCell *_emitterCell;
    CAEmitterLayer *_emitterLayer;
    long long _emitterImageSize;
    IGGradientRippleConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGradientRippleConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_configureEmitterCellLowResImage;
- (void)_setEmitterImageSize:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

@end

