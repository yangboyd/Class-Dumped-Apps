//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTHotConfigObserver-Protocol.h"
#import "YTRetryTaskConfig-Protocol.h"

@class GIMMe, NSHashTable, NSMutableSet, NSString, YTImageService;

@interface YTOfflineImageController : NSObject <YTHotConfigObserver, YTRetryTaskConfig>
{
    YTImageService *_imageService;
    NSHashTable *_observers;
    NSMutableSet *_alreadyPinnedURLs;
    _Bool _enableConvertOfflinePlaylistThumbnailsToFilenamesFix;
    _Bool _enableRemoteURLFallback;
    _Bool _enableThumbnailFileOperationsOnBackgroundThread;
    GIMMe *_gimme;
}

+ (id)offlineThumbnailURLFromThumbnailDetails:(id)arg1;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyDidRepairOfflineImages;
- (void)notifyImageDidDeleteWithFilename:(id)arg1;
- (void)notifyImageDidSaveWithFilename:(id)arg1 videoIDs:(id)arg2 playlistIDs:(id)arg3 videoListIDs:(id)arg4;
- (void)performThumbnailUpdateBlock:(CDUnknownBlockType)arg1;
- (void)updateThumbnailURLsInOfflineVideo:(id)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (id)retryTimeSequence;
- (void)updateThumbnailURLsInOfflinePlaylists:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)updateThumbnailURLsInOfflineVideos:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)repairMissingDateAddedWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)repairMissingImagesWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)localURLFromFilename:(id)arg1;
- (id)localURLsFromFilenames:(id)arg1;
- (void)deleteImageForURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchDeletableImageWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchURLsNeedingImagesWithMaxCount:(long long)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)saveImageWithURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)unpinURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)savePinnedURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPinnedURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)removeOfflineImageControllerObserver:(id)arg1;
- (void)addOfflineImageControllerObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long searchPathDirectory;
- (id)imageDirectoryPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

