//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDSignoutController.h>

@class MSIDSSOExtensionSignoutRequest;

@interface MSIDSSOExtensionSignoutController : MSIDSignoutController
{
    _Bool _shouldWipeAccount;
    MSIDSSOExtensionSignoutRequest *_currentSSORequest;
    id _sceneNotificationObserver;
}

+ (_Bool)canPerformRequest;
- (void).cxx_destruct;
@property(retain, nonatomic) id sceneNotificationObserver; // @synthesize sceneNotificationObserver=_sceneNotificationObserver;
@property(retain, nonatomic) MSIDSSOExtensionSignoutRequest *currentSSORequest; // @synthesize currentSSORequest=_currentSSORequest;
@property(readonly, nonatomic) _Bool shouldWipeAccount; // @synthesize shouldWipeAccount=_shouldWipeAccount;
- (void)waitForSceneActivationAndCompleteSignout:(CDUnknownBlockType)arg1;
- (void)executeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRequestParameters:(id)arg1 shouldSignoutFromBrowser:(_Bool)arg2 shouldWipeAccount:(_Bool)arg3 oauthFactory:(id)arg4 error:(id *)arg5;

@end

