//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIDownloadObserverDelegate-Protocol.h"

@class NFUIDownloadNotification, NSMutableArray, NSMutableDictionary, NSString;

@interface NFUISmartDownloadService : NSObject <NFUIDownloadObserverDelegate>
{
    _Bool _hasNotifiedUser;
    _Bool _shouldDeleteOldDownloadsFirst;
    NSMutableDictionary *_observers;
    NSMutableArray *_shouldDelete;
    NSMutableDictionary *_downloadToDelete;
    NFUIDownloadNotification *_notification;
    CDUnknownBlockType _completion;
    NSMutableArray *_shadowCacheIdsForDeletionWhenShouldDeleteFirst;
    NSMutableDictionary *_entityIdsToCLLoggingIds;
}

+ (id)pinForDownloadValidation;
@property(retain, nonatomic) NSMutableDictionary *entityIdsToCLLoggingIds; // @synthesize entityIdsToCLLoggingIds=_entityIdsToCLLoggingIds;
@property(retain, nonatomic) NSMutableArray *shadowCacheIdsForDeletionWhenShouldDeleteFirst; // @synthesize shadowCacheIdsForDeletionWhenShouldDeleteFirst=_shadowCacheIdsForDeletionWhenShouldDeleteFirst;
@property(nonatomic) _Bool shouldDeleteOldDownloadsFirst; // @synthesize shouldDeleteOldDownloadsFirst=_shouldDeleteOldDownloadsFirst;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool hasNotifiedUser; // @synthesize hasNotifiedUser=_hasNotifiedUser;
@property(retain, nonatomic) NFUIDownloadNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) NSMutableDictionary *downloadToDelete; // @synthesize downloadToDelete=_downloadToDelete;
@property(retain, nonatomic) NSMutableArray *shouldDelete; // @synthesize shouldDelete=_shouldDelete;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)cleanupFromPreviousSmartDownloadsInCaseOfCrash;
- (id)stringIdsThatShouldBeDeletedFromFalcorResults:(id)arg1;
- (unsigned long long)estimatedSpaceNeededForDownloadsFromWatchableIds:(id)arg1;
- (void)notifyUserDownloadsHaveCompleted;
- (void)completeSmartDownloadsAndOptionallyNotify:(_Bool)arg1;
- (void)finishAfterDownload:(id)arg1 removingShadowId:(id)arg2;
- (void)deleteDownloads:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cleanupAfterDownload:(id)arg1 shadowIdToRemove:(id)arg2;
- (void)handleFailedStateForDownload:(id)arg1;
- (void)handlePlayableStateForDownload:(id)arg1;
- (void)notifyUserDownloadHasStartedForDownload:(id)arg1 count:(long long)arg2;
- (void)addObserversForWatchableIds:(id)arg1;
- (void)addDownloadsForDownloadIds:(id)arg1 objectContext:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)processFalcorCallResults:(id)arg1 objectContext:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)callArgumentsForWatchableIds:(id)arg1;
- (id)unionOfWatchableIdsFromDownloadService:(id)arg1 andShadowCache:(id)arg2;
- (void)fetchPinForDownloadValidationWithObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadObserver:(id)arg1 observedDownload:(id)arg2 stateChange:(unsigned long long)arg3 fromState:(unsigned long long)arg4;
- (void)getSmartDownloadsWithObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

