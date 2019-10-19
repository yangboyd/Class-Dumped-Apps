//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTalkRPC-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCTalkRPCImpl : NSObject <SCTalkRPC>
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_createCallbackForSingleResultBlock:(CDUnknownBlockType)arg1;
- (void)_submitAuthRequestWithDict:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchSharedARAuthForExperienceId:(id)arg1 participantId:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchCognacAuthForConvoId:(id)arg1 cognacId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchTalkAuthForConvoIds:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)sendPushNotification:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

