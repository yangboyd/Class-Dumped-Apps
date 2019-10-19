//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSCImageUrl.h"

@class PHAsset;

@interface GSCLocalAssetUrl : GSCImageUrl
{
    PHAsset *_phAsset;
    long long _movieThumbnailFrameMs;
    CDUnknownBlockType _customVideoThumbnailGenerationBlock;
    struct CGRect _normalizedCropRect;
}

+ (_Bool)isLocalFileUrlString:(id)arg1;
+ (_Bool)isLocalAssetUrlString:(id)arg1;
+ (int)assetRequestTypeForImageUrl:(id)arg1;
+ (id)imageUrlWithURLString:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType customVideoThumbnailGenerationBlock; // @synthesize customVideoThumbnailGenerationBlock=_customVideoThumbnailGenerationBlock;
@property(nonatomic) long long movieThumbnailFrameMs; // @synthesize movieThumbnailFrameMs=_movieThumbnailFrameMs;
@property(nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)urlString;
- (id)loadPHAsset;
- (id)initWithPHAsset:(id)arg1;
- (id)initWithLocalAssetUrl:(id)arg1;
- (id)initWithURLString:(id)arg1 format:(unsigned char)arg2;

@end

