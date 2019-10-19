//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWorker.h"

#import "YTOfflineImageControllerObserver-Protocol.h"
#import "YTOfflinePlaylistControllerObserver-Protocol.h"
#import "YTOfflineVideoControllerObserver-Protocol.h"
#import "YTOfflineVideoListControllerObserver-Protocol.h"
#import "YTWorker-Protocol.h"

@class GIMMe, NSString, YTOfflineImageController, YTOfflinePlaylistController, YTOfflineVideoController, YTOfflineVideoListController;
@protocol YTWorkerDelegate;

@interface YTImageDownloadWorker : YTBaseWorker <YTOfflinePlaylistControllerObserver, YTOfflineVideoControllerObserver, YTOfflineImageControllerObserver, YTOfflineVideoListControllerObserver, YTWorker>
{
    YTOfflineImageController *_offlineImageController;
    YTOfflinePlaylistController *_offlinePlaylistController;
    YTOfflineVideoController *_offlineVideoController;
    YTOfflineVideoListController *_offlineVideoListController;
    long long _maxConcurrentTaskCount;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (void)didRepairOfflineImages;
- (void)didSaveMetadataWithVideoListID:(id)arg1;
- (void)didSaveMetadataWithPlaylistID:(id)arg1;
- (void)didUpdateMetadataForVideoID:(id)arg1;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (long long)workerRequirements;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

