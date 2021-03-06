//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDropboxPath, NSString;

@interface DBImportUserConfig : NSObject
{
    _Bool _overwrite;
    NSString *_fileName;
    NSString *_localFilePath;
    DBDropboxPath *_selectedFolderPath;
    NSString *_userId;
    NSString *_fileRev;
}

+ (id)configWithFileName:(id)arg1 localFilePath:(id)arg2 selectedFolderPath:(id)arg3 userId:(id)arg4 overwrite:(_Bool)arg5 fileRev:(id)arg6;
@property(readonly, copy, nonatomic) NSString *fileRev; // @synthesize fileRev=_fileRev;
@property(readonly, nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) DBDropboxPath *selectedFolderPath; // @synthesize selectedFolderPath=_selectedFolderPath;
@property(readonly, copy, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (id)initWithFileName:(id)arg1 localFilePath:(id)arg2 selectedFolderPath:(id)arg3 userId:(id)arg4 overwrite:(_Bool)arg5 fileRev:(id)arg6;

@end

