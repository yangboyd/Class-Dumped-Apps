//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPTrackEventInfo, BDPUniqueID, NSString;

@interface BDPAppLoadContext : NSObject
{
    _Bool _useInnerPkg;
    _Bool _didExecGetModelCallback;
    BDPUniqueID *_uniqueId;
    NSString *_appId;
    NSString *_versionType;
    NSString *_token;
    BDPTrackEventInfo *_trackInfo;
    CDUnknownBlockType _getModelCallback;
    CDUnknownBlockType _getPkgCompletion;
    CDUnknownBlockType _getUpdatedModelCallback;
    CDUnknownBlockType _getUpdatedPkgCompletion;
    CDUnknownBlockType _shouldDownloadPkgBlk;
    CDUnknownBlockType _md5InvalidNotifBlk;
    CDUnknownBlockType _delayGetPkgCompletionBlk;
}

@property(copy, nonatomic) CDUnknownBlockType delayGetPkgCompletionBlk; // @synthesize delayGetPkgCompletionBlk=_delayGetPkgCompletionBlk;
@property(nonatomic) _Bool didExecGetModelCallback; // @synthesize didExecGetModelCallback=_didExecGetModelCallback;
@property(copy, nonatomic) CDUnknownBlockType md5InvalidNotifBlk; // @synthesize md5InvalidNotifBlk=_md5InvalidNotifBlk;
@property(copy, nonatomic) CDUnknownBlockType shouldDownloadPkgBlk; // @synthesize shouldDownloadPkgBlk=_shouldDownloadPkgBlk;
@property(copy, nonatomic) CDUnknownBlockType getUpdatedPkgCompletion; // @synthesize getUpdatedPkgCompletion=_getUpdatedPkgCompletion;
@property(copy, nonatomic) CDUnknownBlockType getUpdatedModelCallback; // @synthesize getUpdatedModelCallback=_getUpdatedModelCallback;
@property(copy, nonatomic) CDUnknownBlockType getPkgCompletion; // @synthesize getPkgCompletion=_getPkgCompletion;
@property(copy, nonatomic) CDUnknownBlockType getModelCallback; // @synthesize getModelCallback=_getModelCallback;
@property(retain, nonatomic) BDPTrackEventInfo *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) _Bool useInnerPkg; // @synthesize useInnerPkg=_useInnerPkg;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *versionType; // @synthesize versionType=_versionType;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) BDPUniqueID *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isReleasedApp;
- (void)triggerGetPkgCompletionWithError:(id)arg1 meta:(id)arg2;
- (void)triggerGetModelCallbackWithError:(id)arg1 meta:(id)arg2 reader:(id)arg3;

@end

