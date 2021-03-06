//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSString;

@interface DBHOMEDisplayType : NSObject <DBSerializable, NSCopying>
{
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (_Bool)isEqualToDisplayType:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (_Bool)isOther;
- (_Bool)isCameraUploads;
- (_Bool)isRestrictedFolder;
- (_Bool)isSharedReadOnly;
- (_Bool)isTeamReadOnly;
- (_Bool)isTeamMemberFolder;
- (_Bool)isPaperPublicFolder;
- (_Bool)isTeamFolder;
- (_Bool)isSharedFolder;
- (_Bool)isSpreadsheet;
- (_Bool)isPdf;
- (_Bool)isMsdoc;
- (_Bool)isPaperProject;
- (_Bool)isPaperFolder;
- (_Bool)isPaperDocument;
- (_Bool)isFolder;
- (_Bool)isFile;
- (id)initWithOther;
- (id)initWithCameraUploads;
- (id)initWithRestrictedFolder;
- (id)initWithSharedReadOnly;
- (id)initWithTeamReadOnly;
- (id)initWithTeamMemberFolder;
- (id)initWithPaperPublicFolder;
- (id)initWithTeamFolder;
- (id)initWithSharedFolder;
- (id)initWithSpreadsheet;
- (id)initWithPdf;
- (id)initWithMsdoc;
- (id)initWithPaperProject;
- (id)initWithPaperFolder;
- (id)initWithPaperDocument;
- (id)initWithFolder;
- (id)initWithFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

