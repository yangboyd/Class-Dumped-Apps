//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDropboxPath, NSString;

@interface DBUnverifiedEmailEntryInfo : NSObject
{
    // Error parsing type: , name: cloudDocTypeString
    // Error parsing type: , name: path
    // Error parsing type: , name: entryName
    // Error parsing type: , name: fileType
    // Error parsing type: , name: fileSizeString
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)initWithCloudDocTypeString:(id)arg1 path:(id)arg2 entryName:(id)arg3 fileType:(unsigned long long)arg4 fileSizeString:(id)arg5;
@property(nonatomic, readonly) NSString *fileSizeString;
@property(nonatomic, readonly) unsigned long long fileType; // @synthesize fileType;
@property(nonatomic, readonly) NSString *entryName;
@property(nonatomic, readonly) DBDropboxPath *path; // @synthesize path;
@property(nonatomic, readonly) NSString *cloudDocTypeString;

@end

