//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveVerifyConfig-Protocol.h"

@class AWELiveMTVerifyApi, AWELiveMTZMCertManager, NSString;

@interface AWELiveMTVerifyConfigImp : NSObject <IESLiveVerifyConfig>
{
    AWELiveMTVerifyApi *_verifyApi;
    AWELiveMTZMCertManager *_zmCertManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWELiveMTZMCertManager *zmCertManager; // @synthesize zmCertManager=_zmCertManager;
@property(retain, nonatomic) AWELiveMTVerifyApi *verifyApi; // @synthesize verifyApi=_verifyApi;
- (void)needZMAuthenticationWithController:(id)arg1;
- (void)needZMAuthenticationWithController:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2;
- (void)openZYLivingBodyAuthenticationWithParams:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2;
- (void)needWithdrawAuthenticationWithController:(id)arg1;
- (_Bool)isPhoneBinded;
- (void)needPhoneAuthenticationWithController:(id)arg1;
- (void)needZMAssertWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)needIdentityAuthenticationWithController:(id)arg1 enterTrack:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)needIdentityAuthenticationWithController:(id)arg1 enterFrom:(id)arg2;
- (void)needIdentityAuthenticationWithCompleteBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

