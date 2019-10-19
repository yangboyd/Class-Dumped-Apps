//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGallerySendItemsTask, SCQueuePerformer, SCUserSession;
@protocol SCCache;

@interface SCGalleryStorySaver : NSObject
{
    SCUserSession *_userSession;
    id <SCCache> _storySnapCache;
    SCQueuePerformer *_savePerformer;
    SCGallerySendItemsTask *_sendItemTask;
}

- (void).cxx_destruct;
- (void)saveToGalleryAndPostDiscoverStory:(id)arg1 configuration:(id)arg2 postToMyStory:(_Bool)arg3 additionalText:(id)arg4 shouldShowToast:(_Bool)arg5;
- (void)postToMyStory:(id)arg1 snap:(id)arg2 shouldShowToast:(_Bool)arg3 fromContext:(id)arg4;
- (void)_postToMyStory:(id)arg1 additionalText:(id)arg2 shouldShowToast:(_Bool)arg3;
- (id)_creationDateForSavedCopyOfStory:(id)arg1;
- (void)cleanupStorySnap:(id)arg1;
- (void)generateStorySnap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_galleryTempURLForStory:(id)arg1 type:(int)arg2;
- (id)_galleryTempOverlayURLForStory:(id)arg1;
- (void)_flattenVideoFromMedia:(id)arg1 isSpectaclesVideo:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_saveStoryVideoToGallery:(id)arg1 clientId:(id)arg2 sharedStoryInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_saveStoryPhotoToGallery:(id)arg1 clientId:(id)arg2 sharedStoryInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveAndPostStoryToGallery:(id)arg1 postToMyStory:(_Bool)arg2 additionalText:(id)arg3 shouldShowToast:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)saveStoryToGallery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveDataToStoriesMediaCoordinatorWithMediaInfo:(id)arg1 mediaData:(id)arg2 overlayData:(id)arg3 overlayMetadata:(id)arg4;
- (void)_storeOriginalDataToMyStoriesMediaCoordinatorWithCacheKey:(id)arg1 mediaData:(id)arg2 overlayData:(id)arg3 sojuOverlay:(id)arg4;
- (void)storeStoryWithClientID:(id)arg1 originalVideo:(id)arg2 overlayFormat:(id)arg3 sojuOverlay:(id)arg4 sojuMediaType:(int)arg5 servletMediaFormat:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)storeStoryWithClientID:(id)arg1 originalPhoto:(id)arg2 overlayFormat:(id)arg3 sojuOverlay:(id)arg4 sojuMediaType:(int)arg5 servletMediaFormat:(id)arg6 snap3DAssetMetadata:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithUserSession:(id)arg1;

@end

