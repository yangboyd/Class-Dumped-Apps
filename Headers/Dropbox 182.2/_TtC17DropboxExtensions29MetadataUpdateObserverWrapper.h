//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC17DropboxExtensions29MetadataUpdateObserverWrapper : NSObject
{
    // Error parsing type: , name: modelCollection
    // Error parsing type: , name: filePath
}

- (void).cxx_destruct;
- (id)init;
- (void)metadataManager:(id)arg1 didRenameOldPath:(id)arg2 toNewPath:(id)arg3 updatedMetadata:(id)arg4;
- (void)metadataManager:(id)arg1 didCreateEntries:(id)arg2;
- (void)metadataManager:(id)arg1 didMoveEntries:(id)arg2 toPath:(id)arg3 updatedMetadataEntries:(id)arg4;
- (void)metadataManager:(id)arg1 didDeleteEntries:(id)arg2;
- (void)metadataManager:(id)arg1 didFailToUpdateMetadataWithFilePath:(id)arg2 error:(id)arg3;
- (void)metadataManager:(id)arg1 didUpdateMetadata:(id)arg2;

@end

