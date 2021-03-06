//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/AVAssetResourceLoaderDelegate-Protocol.h>
#import <Nbp/FPLicenseFetchDelegate-Protocol.h>

@class FPLicenseFetch, NSData, NSError, NSString;
@protocol KeyLoaderDelegateDelegate, OS_dispatch_queue, PlatformConfigProvider;

@interface KeyLoaderDelegate : NSObject <FPLicenseFetchDelegate, AVAssetResourceLoaderDelegate>
{
    _Bool _isRenewLicense;
    _Bool _useAVCKSForKeyLoading;
    _Bool _alreadyTriedToTellLoadingRequestAboutError;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSData *_fairplayAppCert;
    NSError *_licenseError;
    id <KeyLoaderDelegateDelegate> _keyLoaderDelegateDelegate;
    NSString *_identifier;
    NSString *_xid;
    id <PlatformConfigProvider> _config;
    FPLicenseFetch *_fpLicenseFetch;
}

@property(retain, nonatomic) FPLicenseFetch *fpLicenseFetch; // @synthesize fpLicenseFetch=_fpLicenseFetch;
@property(nonatomic) _Bool alreadyTriedToTellLoadingRequestAboutError; // @synthesize alreadyTriedToTellLoadingRequestAboutError=_alreadyTriedToTellLoadingRequestAboutError;
@property(retain, nonatomic) id <PlatformConfigProvider> config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <KeyLoaderDelegateDelegate> keyLoaderDelegateDelegate; // @synthesize keyLoaderDelegateDelegate=_keyLoaderDelegateDelegate;
@property(nonatomic) _Bool useAVCKSForKeyLoading; // @synthesize useAVCKSForKeyLoading=_useAVCKSForKeyLoading;
@property(retain, nonatomic) NSError *licenseError; // @synthesize licenseError=_licenseError;
@property(nonatomic) _Bool isRenewLicense; // @synthesize isRenewLicense=_isRenewLicense;
@property(retain, nonatomic) NSData *fairplayAppCert; // @synthesize fairplayAppCert=_fairplayAppCert;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void).cxx_destruct;
- (void)fpLicenseFetch:(id)arg1 didReceiveLicenseChallengeResponses:(id)arg2 rawResponse:(id)arg3 error:(id)arg4;
- (void)fpLicenseFetchWillStartLicenseRequest:(id)arg1 withRequestArguments:(id)arg2 ldl:(_Bool)arg3;
- (void)fpLicenseFetchDidEndLicenseRequest:(id)arg1 ldl:(_Bool)arg2;
- (_Bool)fpLicenseFetchIsConfigFlagTrue:(id)arg1 defaultIfNotPresent:(_Bool)arg2;
- (void)licenseReceived:(id)arg1 withError:(id)arg2 forLoadingRequest:(id)arg3;
- (void)handleAZORUS429licenseReceivedError:(id)arg1 forLoadingRequest:(id)arg2;
- (void)playlistReady:(id)arg1 withError:(id)arg2 forLoadingRequest:(id)arg3;
- (void)cancelLoading;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfKey:(id)arg2;
- (_Bool)shouldWaitForLoadingOfAVContentKeySessionKey:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfPlaylist:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)MD5:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 andPlaybackId:(id)arg2 andXid:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

