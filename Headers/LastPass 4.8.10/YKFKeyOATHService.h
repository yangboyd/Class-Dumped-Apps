//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFKeyService.h"

#import "YKFKeyOATHServiceProtocol-Protocol.h"

@class NSString, YKFKeyOATHSelectApplicationResponse;
@protocol YKFKeyConnectionControllerProtocol;

@interface YKFKeyOATHService : YKFKeyService <YKFKeyOATHServiceProtocol>
{
    id <YKFKeyConnectionControllerProtocol> _connectionController;
    YKFKeyOATHSelectApplicationResponse *_cachedSelectApplicationResponse;
}

@property(retain, nonatomic) YKFKeyOATHSelectApplicationResponse *cachedSelectApplicationResponse; // @synthesize cachedSelectApplicationResponse=_cachedSelectApplicationResponse;
@property(retain, nonatomic) id <YKFKeyConnectionControllerProtocol> connectionController; // @synthesize connectionController=_connectionController;
- (void).cxx_destruct;
- (void)invalidateApplicationSelectionCache;
- (void)keyService:(id)arg1 willExecuteRequest:(id)arg2;
- (void)selectOATHApplicationWithCompletion:(CDUnknownBlockType)arg1;
- (void)executeOATHRequestWithoutApplicationSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeOATHRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeValidateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeSetCodeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeResetRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)executeListRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)executeCalculateAllRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)executeCalculateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeDeleteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executePutRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConnectionController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

