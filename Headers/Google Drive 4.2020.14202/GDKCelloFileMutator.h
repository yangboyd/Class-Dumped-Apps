//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileMutating-Protocol.h"

@class NSString;
@protocol GDKCelloExecuting, GDKChangelogPolling, GDKFileFetcher;

@interface GDKCelloFileMutator : NSObject <GDKFileMutating>
{
    id <GDKCelloExecuting> _cello;
    id <GDKChangelogPolling> _changelogPoller;
    id <GDKFileFetcher> _fileFetcher;
}

+ (unsigned long long)nextOfflineStatusForFile:(id)arg1 willMarkForOffline:(_Bool)arg2;
@property(readonly, nonatomic) id <GDKFileFetcher> fileFetcher; // @synthesize fileFetcher=_fileFetcher;
@property(readonly, nonatomic) id <GDKChangelogPolling> changelogPoller; // @synthesize changelogPoller=_changelogPoller;
@property(readonly, nonatomic) id <GDKCelloExecuting> cello; // @synthesize cello=_cello;
- (void).cxx_destruct;
- (void)copyItem:(id)arg1 onMutateResult:(CDUnknownBlockType)arg2;
- (void)deleteItem:(id)arg1 onDeleted:(CDUnknownBlockType)arg2;
- (void)removeItem:(id)arg1 onMutateResult:(CDUnknownBlockType)arg2;
- (void)updateItem:(id)arg1 onMutateResult:(CDUnknownBlockType)arg2;
- (void)createItem:(id)arg1 downloadURL:(id)arg2 onCreate:(CDUnknownBlockType)arg3;
- (void)createItem:(id)arg1 onCreate:(CDUnknownBlockType)arg2;
- (id)localDateProperty:(id)arg1 date:(id)arg2;
- (id)localDataProperty:(id)arg1 value:(id)arg2;
- (id)localStringProperty:(id)arg1 value:(id)arg2;
- (id)localIntProperty:(id)arg1 value:(long long)arg2;
- (id)localBoolProperty:(id)arg1 value:(_Bool)arg2;
- (id)updateRequestForFile:(id)arg1 offlineStatus:(unsigned long long)arg2 offlineFilename:(id)arg3 offlineMimeType:(id)arg4 offlineLastModifiedDate:(id)arg5;
- (id)errorForNoFileIdentifier;
- (void)performUpdateRequest:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)subscribeFile:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)updateFile:(id)arg1 markedForOfflineBySystem:(_Bool)arg2 markedForOfflineByUser:(_Bool)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (void)deleteFile:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)untrashFile:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)removeReadOnlyLockFromFile:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)addReadOnlyLockToFile:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)restoreFile:(id)arg1 toFolderId:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)removeFile:(id)arg1 fromFolderId:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)copyFileWithID:(id)arg1 newTitle:(id)arg2 moveToFolder:(id)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (void)moveFile:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (void)addFile:(id)arg1 toFolder:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 localMIMEType:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 offlineDownloadProgress:(long long)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 offlineStatus:(unsigned long long)arg2 offlineFilename:(id)arg3 offlineMimeType:(id)arg4 offlineLastModifiedDate:(id)arg5 onCompletion:(CDUnknownBlockType)arg6;
- (void)updateFile:(id)arg1 offlineStatus:(unsigned long long)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 markedForOfflineBySystem:(_Bool)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 markedForOfflineByUser:(_Bool)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 filesAppFavoriteRank:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 filesAppTagData:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 hasLocalThumbnail:(_Bool)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateLastViewedForFile:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)updateFolder:(id)arg1 colorPaletteIndex:(long long)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 starred:(_Bool)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)updateFile:(id)arg1 title:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)createFileLocallyWithId:(id)arg1 inFolder:(id)arg2 withTitle:(id)arg3 mimeType:(id)arg4 downloadURL:(id)arg5 onCompletion:(CDUnknownBlockType)arg6;
- (void)createFolderWithTitle:(id)arg1 inFolder:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (id)initWithCello:(id)arg1 changelogPoller:(id)arg2 fileFetcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

