//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (NFLX)
+ (id)colorImage:(id)arg1 withFrame:(struct CGRect)arg2;
+ (id)imageWithView:(id)arg1 ofSize:(struct CGSize)arg2;
+ (id)imageWithView:(id)arg1;
+ (id)threadSafeImageWithData:(id)arg1 scale:(double)arg2;
+ (id)af_safeImageWithData:(id)arg1;
- (id)darkenedAndBlurredImage;
- (id)darkened:(double)arg1 andBlurredImage:(double)arg2;
- (id)darkened:(double)arg1 andBlurredImage:(double)arg2 blendModeFilterName:(id)arg3;
- (id)imageToSquare;
- (_Bool)nflx_writeToURL:(id)arg1;
- (id)tintedImageWithColor:(id)arg1;
- (id)resizedImage:(struct CGSize)arg1 preserveAspect:(_Bool)arg2 opaque:(_Bool)arg3;
- (id)resizedImage:(struct CGSize)arg1 drawTransposed:(_Bool)arg2 interpolationQuality:(int)arg3;
- (id)imageScaledWithSize:(struct CGSize)arg1 preserveAspect:(_Bool)arg2 opaque:(_Bool)arg3;
- (id)imageDrawnUnderGradientLayer:(id)arg1;
- (id)imageCenteredInRect:(struct CGRect)arg1 withBackgroundColor:(id)arg2;
- (id)verticallyLetteboxedImageWithBackgroundColor:(id)arg1;
- (struct CGSize)screenWidthScale;
- (struct CGSize)screenHeightScale;
- (id)tintWIthColor:(id)arg1;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)applyTintEffectWithColor:(id)arg1;
- (id)applyDarkEffect;
- (id)applyExtraLightEffect;
- (id)applyLightEffect;
@end

