//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaWatchedStateUpdateListener-Protocol.h"
#import "SCOperaPlaylistDataSource-Protocol.h"

@class NSDictionary, NSString, SCStreamingMediaPrefetcher, SCUserSession;
@protocol SCOperaMediaManager, SCOperaPlaylistItemController, SCStreamingURLProviding;

@interface SCLongformShowOperaDataSource : NSObject <SCImpalaWatchedStateUpdateListener, SCOperaPlaylistDataSource>
{
    SCUserSession *_userSession;
    NSDictionary *_groupIdToDataSource;
    NSDictionary *_groupIdToShowDataModel;
    id <SCOperaMediaManager> _mediaManager;
    id <SCStreamingURLProviding> _streamingURLProvider;
    SCStreamingMediaPrefetcher *_longformMediaPrefetcher;
    id <SCOperaPlaylistItemController> _playlistItemController;
}

@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
- (void).cxx_destruct;
- (void)_prefetchHLSManinestFilesForLongformShow:(id)arg1;
- (id)_showDataSourceForGroupId:(id)arg1;
- (void)watchedStateUpdateSubmitted:(id)arg1;
- (id)playlistItemGroupForDataModel:(id)arg1;
- (_Bool)canResolvePlaylistItemGroupDataModel:(id)arg1;
- (void)removeMediaForItem:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dataModelForGroup:(id)arg1;
- (void)teardownDataModelForItem:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (_Bool)needToPrepareMediaBeforeDisplay;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 mediaManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

