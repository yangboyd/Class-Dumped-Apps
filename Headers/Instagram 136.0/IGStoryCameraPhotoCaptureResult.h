//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryMediaAsset-Protocol.h>

@class IGAsyncTask, NSString, UIImage;

@interface IGStoryCameraPhotoCaptureResult : NSObject <IGStoryMediaAsset>
{
    UIImage *_previewImage;
    IGAsyncTask *_imageCreationTask;
    struct CGSize _imageSize;
    CDStruct_c68f086b _captureMetadata;
}

@property(readonly, nonatomic) CDStruct_c68f086b captureMetadata; // @synthesize captureMetadata=_captureMetadata;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) IGAsyncTask *imageCreationTask; // @synthesize imageCreationTask=_imageCreationTask;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (void)fetchPhotoBoothAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchBoomerangAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchVideoWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchSampleBufferOfSize:(struct CGSize)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)fetchImageOfSize:(struct CGSize)arg1 atTime:(CDStruct_1b6d18a9)arg2 resultHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) long long assetType;
@property(readonly, nonatomic) struct CGSize mediaSize;
- (id)newByAddingCaptureMetadata:(CDStruct_c68f086b)arg1;
- (id)initWithImageCreationTask:(id)arg1 imageSize:(struct CGSize)arg2 previewImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

