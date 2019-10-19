//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLFairPlayLicenseRequest.h"

#import "MLFairPlayPlayerItemErrorLogMonitorObserver-Protocol.h"

@class AVAssetResourceLoadingRequest, NSString;

@interface MLFairPlayResourceLoadingLicenseRequest : MLFairPlayLicenseRequest <MLFairPlayPlayerItemErrorLogMonitorObserver>
{
    _Bool _terminated;
}

- (void)terminateRequestWithError:(id)arg1;
- (void)playerItem:(id)arg1 hasNewError:(id)arg2 withMessage:(id)arg3 forRequestWithURI:(id)arg4;
- (void)createLicenseRequestDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCancelled;
@property(readonly, nonatomic) AVAssetResourceLoadingRequest *resourceLoadingRequest;
- (id)initWithRequest:(id)arg1 fairPlayConfig:(id)arg2 forOffline:(_Bool)arg3 videoID:(id)arg4 DRMParams:(id)arg5 DRMSessionID:(id)arg6 CPN:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

