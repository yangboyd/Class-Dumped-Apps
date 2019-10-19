//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRegistrationRouter-Protocol.h"

@class NSString, SCBusinessLogicHarness, SCIdentityLoggerServices;
@protocol SCDeviceCheckTokenFetching, SCUIContainer;

@interface SCRegistrationNavRouter : NSObject <SCRegistrationRouter>
{
    SCBusinessLogicHarness *_birthdayBusinessLogicHarness;
    SCBusinessLogicHarness *_displayNameBusinessLogicHarness;
    SCBusinessLogicHarness *_usernameBusinessLogicHarness;
    SCBusinessLogicHarness *_passwordBusinessLogicHarness;
    SCIdentityLoggerServices *_loggerServices;
    id <SCDeviceCheckTokenFetching> _deviceCheckManager;
    id <SCUIContainer> _registrationUIContainer;
}

- (void).cxx_destruct;
- (void)showSuggestedUsernamePageWithDelegate:(id)arg1 usernameSuggester:(id)arg2;
- (void)showUsernamePageWithUsername:(id)arg1 delegate:(id)arg2 usernameSuggester:(id)arg3;
- (void)showPasswordPage:(id)arg1 withUnauthenticatedUser:(id)arg2;
- (void)showBirthdayPageWithBirthday:(id)arg1 delegate:(id)arg2;
- (void)showDisplayNamePageWithFirstName:(id)arg1 lastName:(id)arg2 delegate:(id)arg3;
- (id)initWithUIContainer:(id)arg1 loggerServices:(id)arg2 deviceCheckManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

