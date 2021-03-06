//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBOfflineServingRecursiveRefresher-Protocol.h"

@class DBDropboxPath, NSMutableArray, NSOperationQueue;
@protocol DBMetadataUpdateProtocol;

@interface DBMetadataManagerOfflineServingRecursiveRefresher : NSObject <DBOfflineServingRecursiveRefresher>
{
    unsigned long long _maxNumMetadata;
    long long _maxTotalBytesOfFilesUnderFolder;
    long long _maxTotalBytesOfRootFile;
    id <DBMetadataUpdateProtocol> _metadataManager;
    DBDropboxPath *_startPath;
    NSMutableArray *_refreshQueue;
    _Bool _isCancelled;
    _Bool _shouldCountPotentiallyUnplayableMoviesIfDirectory;
    unsigned long long _numPotentiallyUnplayableMovies;
    CDUnknownBlockType _refreshCompletedBlock;
    NSOperationQueue *_completionQueue;
    CDUnknownBlockType _completionBlockFromCaller;
}

+ (id)db_offlineSupportingArrayFromMetadataArray:(id)arg1;
- (void).cxx_destruct;
- (void)db_processFetchedChildrenMetadata:(id)arg1 error:(id)arg2 currentNumMetadata:(unsigned long long)arg3 currentTotalBytesOfFilesUnderFolder:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)db_refreshWithPath:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)db_completionRecursiveRefreshWithSuccess:(_Bool)arg1 metadata:(id)arg2 numMetadataRefreshed:(unsigned long long)arg3 totalBytesOfMetadata:(long long)arg4 numPotentiallyUnplayableMoviesInDirectory:(unsigned long long)arg5 error:(id)arg6;
- (void)cancel;
- (void)recursivelyRefreshWithMaxNumMetadata:(unsigned long long)arg1 maxTotalBytesOfFilesUnderFolder:(long long)arg2 maxTotalBytesOfRootFile:(long long)arg3 shouldCountPotentiallyUnplayableMoviesIfDirectory:(_Bool)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithStartPath:(id)arg1 metadataManager:(id)arg2 refreshCompletedBlock:(CDUnknownBlockType)arg3;

@end

