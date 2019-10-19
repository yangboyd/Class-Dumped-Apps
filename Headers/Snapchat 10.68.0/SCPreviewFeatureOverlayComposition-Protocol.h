//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue, SCPreviewFeatureOverlayCompositionDelegate;

@protocol SCPreviewFeatureOverlayComposition
@property(nonatomic) __weak id <SCPreviewFeatureOverlayCompositionDelegate> delegate;
- (void)watermarkOverlayAsynchronouslyWithCompletionBlock:(void (^)(UIImage *))arg1;
- (void)getScreenshotAsynchronouslyWithOriginalImageIncluded:(_Bool)arg1 filteredImageIncluded:(_Bool)arg2 videoOverlayImageIncluded:(_Bool)arg3 captionIncluded:(_Bool)arg4 filterOverlayImageIncluded:(_Bool)arg5 shouldGenerateOverlayImageForMask:(_Bool)arg6 shouldGenerateVideoThumbnailImageWithOverlay:(_Bool)arg7 shouldGenerateLensAppliedImage:(_Bool)arg8 croppingAspectRatio:(double)arg9 maxOutputShortSideLength:(double)arg10 callbackQueue:(NSObject<OS_dispatch_queue> *)arg11 completionBlock:(void (^)(UIImage *, NSData *, UIImage *, UIImage *, UIImage *, UIImage *, NSArray *))arg12;
- (void)getOverlayForVideoShouldGenerateThumbnail:(_Bool)arg1 croppingAspectRatio:(double)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(UIImage *, NSData *, UIImage *, UIImage *, UIImage *, UIImage *, NSArray *))arg4;
- (void)getOverlayAndVideoTrackedImagesWithCroppingAspectRatio:(double)arg1 completion:(void (^)(UIImage *, NSArray *))arg2;
- (void)getScreenshotAndOverlaysAsynchronouslyWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 croppingAspectRatio:(double)arg2 maxOutputShortSideLength:(double)arg3 completionBlock:(void (^)(UIImage *, UIImage *, UIImage *))arg4;
- (void)watermarkedScreenshotAsynchronouslyWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 croppingAspectRatio:(double)arg2 completionBlock:(void (^)(UIImage *))arg3;
- (void)getScreenshotAsynchronouslyWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 croppingAspectRatio:(double)arg2 completionBlock:(void (^)(UIImage *))arg3;
@end

