//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TGMediaAssetImageSignals : NSObject
{
}

+ (_Bool)usesPhotoFramework;
+ (long long)videoOrientationOfAVAsset:(id)arg1;
+ (id)avAssetForVideoAsset:(id)arg1 allowNetworkAccess:(_Bool)arg2;
+ (id)avAssetForVideoAsset:(id)arg1;
+ (id)playerItemForVideoAsset:(id)arg1;
+ (id)saveUncompressedVideoForAsset:(id)arg1 toPath:(id)arg2 allowNetworkAccess:(_Bool)arg3;
+ (id)saveUncompressedVideoForAsset:(id)arg1 toPath:(id)arg2;
+ (id)videoThumbnailForAVAsset:(id)arg1 size:(struct CGSize)arg2 timestamp:(CDStruct_1b6d18a9)arg3;
+ (id)videoThumbnailForAsset:(id)arg1 size:(struct CGSize)arg2 timestamp:(CDStruct_1b6d18a9)arg3;
+ (id)videoThumbnailsForAVAsset:(id)arg1 size:(struct CGSize)arg2 timestamps:(id)arg3;
+ (id)videoThumbnailsForAsset:(id)arg1 size:(struct CGSize)arg2 timestamps:(id)arg3;
+ (id)_thumbnailQueue;
+ (void)stopCachingImagesForAllAssets;
+ (void)stopCachingImagesForAssets:(id)arg1 imageType:(int)arg2 size:(struct CGSize)arg3;
+ (void)startCachingImagesForAssets:(id)arg1 imageType:(int)arg2 size:(struct CGSize)arg3;
+ (id)fileAttributesForAsset:(id)arg1;
+ (id)imageMetadataForAsset:(id)arg1;
+ (id)imageDataForAsset:(id)arg1 allowNetworkAccess:(_Bool)arg2;
+ (id)imageDataForAsset:(id)arg1;
+ (id)livePhotoForAsset:(id)arg1 allowNetworkAccess:(_Bool)arg2;
+ (id)livePhotoForAsset:(id)arg1;
+ (id)imageForAsset:(id)arg1 imageType:(int)arg2 size:(struct CGSize)arg3 allowNetworkAccess:(_Bool)arg4;
+ (id)imageForAsset:(id)arg1 imageType:(int)arg2 size:(struct CGSize)arg3;
+ (void)load;

@end

