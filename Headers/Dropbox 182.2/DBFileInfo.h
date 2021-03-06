//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBPath, NSDate, NSString;

@interface DBFileInfo : NSObject <NSCopying>
{
    _Bool _isFolder;
    _Bool _thumbExists;
    _Bool _readOnly;
    _Bool _noAccess;
    _Bool _isTeamMemberFolder;
    DBPath *_path;
    NSDate *_modifiedTime;
    long long _size;
    NSString *_iconName;
    NSString *_rev;
    NSString *_parentSharedFolderId;
    NSString *_sharedFolderId;
}

@property(readonly, nonatomic) NSString *sharedFolderId; // @synthesize sharedFolderId=_sharedFolderId;
@property(readonly, nonatomic) NSString *parentSharedFolderId; // @synthesize parentSharedFolderId=_parentSharedFolderId;
@property(readonly, nonatomic) _Bool isTeamMemberFolder; // @synthesize isTeamMemberFolder=_isTeamMemberFolder;
@property(readonly, nonatomic) _Bool noAccess; // @synthesize noAccess=_noAccess;
@property(readonly, nonatomic) NSString *rev; // @synthesize rev=_rev;
@property(readonly, nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, nonatomic) _Bool thumbExists; // @synthesize thumbExists=_thumbExists;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSDate *modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(readonly, nonatomic) _Bool isFolder; // @synthesize isFolder=_isFolder;
@property(readonly, nonatomic) DBPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInfoObject:(const struct FileInfo *)arg1;

@end

