//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DocsLSDocumentDeleter, DocsLSFileStorageProvider;
@protocol DocsLSStorageProvider;

@interface DocsLSCrossDocumentStorageAsync : NSObject
{
    NSObject<DocsLSStorageProvider> *_databaseStorageProvider;
    DocsLSFileStorageProvider *_fileStorageProvider;
    DocsLSDocumentDeleter *_documentDeleter;
}

- (void).cxx_destruct;
- (_Bool)commitOrRollbackTransaction:(id)arg1 error:(id *)arg2;
- (id)crossDocumentStorageTransaction:(id *)arg1;
- (void)fontFamiliesForAllDocumentsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateMetadataForDocumentId:(id)arg1 withModifications:(id)arg2 lockManager:(id)arg3 lockHolder:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)documentMetadataForDocumentId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)allDocumentMetadataInitializedOnly:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)documentMetadataWithPendingChangesForDocumentType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)documentMetadataWithoutSnapshotsForDocumentType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteDocumentForDocumentId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithDatabaseStorageProvider:(id)arg1 fileStorageProvider:(id)arg2;
- (id)init;

@end

