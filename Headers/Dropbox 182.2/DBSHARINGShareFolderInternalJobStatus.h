//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGInternalSharedFolderMetadata, DBSHARINGShareFolderError, NSString;

@interface DBSHARINGShareFolderInternalJobStatus : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGInternalSharedFolderMetadata *_complete;
    DBSHARINGShareFolderError *_failed;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isEqualToShareFolderInternalJobStatus:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isFailed;
- (_Bool)isComplete;
- (_Bool)isInProgress;
@property(readonly, nonatomic) DBSHARINGShareFolderError *failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) DBSHARINGInternalSharedFolderMetadata *complete; // @synthesize complete=_complete;
- (id)initWithFailed:(id)arg1;
- (id)initWithComplete:(id)arg1;
- (id)initWithInProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

