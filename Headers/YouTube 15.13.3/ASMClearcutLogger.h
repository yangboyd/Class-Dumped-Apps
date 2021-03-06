//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ASMLogger-Protocol.h>

@class NSArray, NSString, SSOService;
@protocol ASMOptions;

@interface ASMClearcutLogger : NSObject <ASMLogger>
{
    SSOService *_SSOService;
    id <ASMOptions> _options;
    NSArray *_supportedNativeActionIDs;
    NSArray *_supportedIconIDs;
}

- (void).cxx_destruct;
- (void)logToClearcut:(id)arg1;
- (id)createMenuEventWithAction:(int)arg1;
- (id)createScreenDisplayedWithLoadSource:(int)arg1 alternativeType:(int)arg2;
- (id)createClientCapabilities;
- (id)createClientInfo;
- (id)formatErrorCode:(id)arg1;
- (id)createMobileRPCForRPCName:(id)arg1 APIVersion:(id)arg2 errorCode:(id)arg3 hostName:(id)arg4 latencyMS:(int)arg5;
- (void)logRpcSucceededForScreenID:(id)arg1 RPCName:(id)arg2 APIVersion:(id)arg3 hostName:(id)arg4 latencyMS:(int)arg5;
- (void)logRpcFailedForScreenID:(id)arg1 RPCName:(id)arg2 APIVersion:(id)arg3 error:(id)arg4 hostName:(id)arg5 latencyMS:(int)arg6;
- (void)logDisplayedScreen:(long long)arg1 alternativeType:(long long)arg2 loadSource:(long long)arg3;
- (void)logDisplayedError:(id)arg1;
- (void)logDataRefreshedForScreen:(long long)arg1;
- (void)logSentToNativeUI:(long long)arg1;
- (void)logSentToBrowserWithScreen:(long long)arg1;
- (void)logMenuLaunchedWithScreen:(long long)arg1;
- (void)logRefreshScreen:(long long)arg1;
- (void)logNavigateToScreen:(long long)arg1;
- (void)logNavigateBackToScreen:(long long)arg1;
- (void)logUploadingProfilePhotoSucceededWithRPCIdentifier:(id)arg1;
- (void)logUploadingProfilePhotoFailedWithError:(id)arg1 rpcIdentifier:(id)arg2;
- (void)logProfilePhotoDialogSetPicture;
- (void)logProfilePhotoDialogDismiss;
- (void)logProfilePhotoDialogDisplayed;
- (id)authorizationForIdentity:(id)arg1;
- (id)clearcutLogger;
- (void)updateWithSSOService:(id)arg1 options:(id)arg2 supportedNativeActionIDs:(id)arg3 supportedIconIDs:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

