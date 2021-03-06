//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUploadSynchronousController-Protocol.h>

@class GIMMe, IGDManager, NSString, YTUploadTaskStore;

@interface YTUploadIosGuardController : NSObject <YTUploadSynchronousController>
{
    YTUploadTaskStore *_uploadTaskStore;
    IGDManager *_iosguardManager;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)iosguardChallengeFailedForFrontendUploadID:(id)arg1 error:(id)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)generateIosguardChallengeWithFrontendUploadID:(id)arg1 responseWIthIosguardData:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (int)controllerLogType;
- (void)processUploadTask:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchNextUploadTaskWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

