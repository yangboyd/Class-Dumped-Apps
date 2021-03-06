//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@protocol NSObject><NSCoding;

@interface UIImage (libFunny)
+ (id)userClusterWithId:(long long)arg1;
+ (id)contentClusterWithId:(long long)arg1;
+ (id)blurAvatarWithId:(long long)arg1;
+ (id)af_safeImageWithData:(id)arg1;
+ (id)sd_decodedAndScaledDownImageWithImage:(id)arg1 limitBytes:(unsigned long long)arg2;
+ (id)sd_decodedAndScaledDownImageWithImage:(id)arg1;
+ (id)sd_decodedImageWithImage:(id)arg1;
+ (id)sd_imageWithGIFData:(id)arg1;
+ (id)sd_imageWithData:(id)arg1 scale:(double)arg2 firstFrameOnly:(_Bool)arg3;
+ (id)sd_imageWithData:(id)arg1 scale:(double)arg2;
+ (id)sd_imageWithData:(id)arg1;
+ (id)sd_imageWithWebPData:(id)arg1;
+ (id)GMSx_goo_imageByApplyingAlpha:(double)arg1 toImage:(id)arg2;
+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)suffixForScale:(double)arg1;
+ (id)imageForPath:(id)arg1 scale:(double)arg2;
+ (id)IA_resourcesImageNamed:(id)arg1;
+ (_Bool)snapshotOfView:(id)arg1 isDifferentThanImage:(id)arg2;
+ (id)snapshotImageOfView:(id)arg1;
+ (id)sma_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 drawingBlock:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)stkBitmap;
+ (CDUnknownBlockType)imageRef;
+ (id)if_named:(id)arg1;
+ (CDUnknownBlockType)flatImage;
- (id)base64URI;
- (id)mdf_imageWithHorizontallyFlippedOrientation;
@property(retain, nonatomic) id <NSObject><NSCoding> sd_extendedObject;
@property(nonatomic) _Bool sd_isDecoded;
@property(nonatomic) unsigned long long sd_memoryCost;
@property(nonatomic) _Bool sd_isIncremental;
@property(nonatomic) long long sd_imageFormat;
@property(readonly, nonatomic) _Bool sd_isVector;
@property(readonly, nonatomic) _Bool sd_isAnimated;
@property(nonatomic) unsigned long long sd_imageLoopCount;
- (id)sd_imageDataAsFormat:(long long)arg1 compressionQuality:(double)arg2 firstFrameOnly:(_Bool)arg3;
- (id)sd_imageDataAsFormat:(long long)arg1 compressionQuality:(double)arg2;
- (id)sd_imageDataAsFormat:(long long)arg1;
- (id)sd_imageData;
- (id)sd_filteredImageWithFilter:(id)arg1;
- (id)sd_blurredImageWithRadius:(double)arg1;
- (id)sd_colorsWithRect:(struct CGRect)arg1;
- (id)sd_colorAtPoint:(struct CGPoint)arg1;
- (id)sd_tintedImageWithColor:(id)arg1;
- (id)sd_flippedImageWithHorizontal:(_Bool)arg1 vertical:(_Bool)arg2;
- (id)sd_rotatedImageWithAngle:(double)arg1 fitSize:(_Bool)arg2;
- (id)sd_roundedCornerImageWithRadius:(double)arg1 corners:(unsigned long long)arg2 borderWidth:(double)arg3 borderColor:(id)arg4;
- (id)sd_croppedImageWithRect:(struct CGRect)arg1;
- (id)sd_resizedImageWithSize:(struct CGSize)arg1 scaleMode:(unsigned long long)arg2;
- (void)sd_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 scaleMode:(unsigned long long)arg3 clipsToBounds:(_Bool)arg4;
- (id)croppedImageWithRect:(struct CGRect)arg1;
- (id)drawImageInBounds:(struct CGRect)arg1;
- (id)resizedImageWithMaximumSize:(struct CGSize)arg1;
- (id)resizedImageWithMinimumSize:(struct CGSize)arg1;
- (id)resizedImageByHeight:(unsigned long long)arg1;
- (id)resizedImageByWidth:(unsigned long long)arg1;
- (struct CGImage *)CGImageWithCorrectOrientation;
- (id)resizedImageByMagick:(id)arg1;
- (id)vks_roundCornersImage:(double)arg1 resultSize:(struct CGSize)arg2;
- (void)vks_addRoundedRectToPath:(struct CGContext *)arg1 rect:(struct CGRect)arg2 width:(float)arg3 height:(float)arg4 toCorners:(int)arg5;
- (id)GMSx_mdf_imageWithHorizontallyFlippedOrientation;
- (id)GMSx_goo_imageWithBlendMode:(int)arg1 color:(id)arg2;
- (id)gid_imageWithBlendMode:(int)arg1 color:(id)arg2;
- (id)resizeImagetoSize:(double)arg1;
- (id)imageAsBase64StringWithQuality:(double)arg1;
- (id)scaleImageToSize:(struct CGSize)arg1 aspectFill:(_Bool)arg2;
- (id)yal_imageWithRoundedCorner:(double)arg1 andSize:(struct CGSize)arg2;
- (id)yal_imageWithRoundedCornersAndSize:(struct CGSize)arg1;
- (id)prepareForItem:(id)arg1;
@end

