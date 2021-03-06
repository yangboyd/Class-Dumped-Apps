//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OGLPrivacyPolicyToSASMController-Protocol.h"

@class GIDOptions, NSString;
@protocol SSOAccountDataSource, SSOService;

@interface OGLAccountSettingsPrivacyPolicyToSController : NSObject <OGLPrivacyPolicyToSASMController>
{
    id <SSOService> _ssoService;
    id <SSOAccountDataSource> _accountDataSource;
    GIDOptions *_GIDOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GIDOptions *GIDOptions; // @synthesize GIDOptions=_GIDOptions;
- (id)topmostViewControllerWithWindow:(id)arg1;
- (void)showASMScreen:(long long)arg1 forAccount:(id)arg2 window:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showCustomLinkForAccount:(id)arg1 window:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)customLinkText;
- (_Bool)showCustomLinkButton;
- (int)buttonTextMode;
- (void)showTermsOfServiceForAccount:(id)arg1 window:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showPrivacyPolicyForAccount:(id)arg1 window:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSSOService:(id)arg1;
- (id)initWithSSOService:(id)arg1 accountDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

