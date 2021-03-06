//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBDropboxPath, DBUserState, NSArray, NSString;

@interface DBFileDeleteOperation : NSObject <DBLinkableStateObserverProtocol>
{
    DBDropboxPath *_filePath;
    NSArray *_confirmedFsws;
    DBUserState *_userState;
    CDUnknownBlockType _handler;
    DBFileDeleteOperation *_strongSelf;
}

+ (void)deleteFile:(id)arg1 confirmedFsws:(id)arg2 withUserState:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)db_clearUserState;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_invokeHandlerWithSuccess:(_Bool)arg1 errorMessage:(id)arg2 filesystemWarnings:(id)arg3;
- (void)db_startWithUserState:(id)arg1;
- (id)initWithFilePath:(id)arg1 confirmedFsws:(id)arg2 withUserState:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

