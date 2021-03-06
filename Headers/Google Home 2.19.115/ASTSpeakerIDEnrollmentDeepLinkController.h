//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTPhoneSpeakerIDEnrollmentFlowControllerDelegate-Protocol.h"
#import "ASTSettingsViewControllerDelegate-Protocol.h"
#import "ASTSpeakerIDEnrollmentFlowControllerDelegate-Protocol.h"

@class ASTSettingsMenuService, NSString, NSURL, UIViewController, ULRManager;
@protocol ASTSpeakerIDEnrollmentDeepLinkStrategy;

@interface ASTSpeakerIDEnrollmentDeepLinkController : NSObject <ASTSettingsViewControllerDelegate, ASTSpeakerIDEnrollmentFlowControllerDelegate, ASTPhoneSpeakerIDEnrollmentFlowControllerDelegate>
{
    NSURL *_url;
    ASTSettingsMenuService *_settingsService;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _enrollmentDeepLinkCallback;
    id <ASTSpeakerIDEnrollmentDeepLinkStrategy> _deepLinkStrategy;
    _Bool _navigationStarted;
    ULRManager *_ulrManager;
}

+ (_Bool)isSpeakerIDEnrollmentURL:(id)arg1;
@property(nonatomic, getter=isNavigationStarted) _Bool navigationStarted; // @synthesize navigationStarted=_navigationStarted;
@property(retain, nonatomic) ULRManager *ulrManager; // @synthesize ulrManager=_ulrManager;
- (void).cxx_destruct;
- (void)phoneSpeakerIDEnrollmentFlowController:(id)arg1 didCancelWithPresentedNavigationController:(id)arg2;
- (void)phoneSpeakerIDEnrollmentFlowController:(id)arg1 didFinishWithPresentedNavigationController:(id)arg2;
- (void)phoneSpeakerIDEnrollmentFlowController:(id)arg1 didStartWithNavigationControllerToPresent:(id)arg2;
- (void)speakerIDEnrollmentFlowController:(id)arg1 didCancelWithPresentedNavigationController:(id)arg2;
- (void)speakerIDEnrollmentFlowController:(id)arg1 didFinishWithPresentedNavigationController:(id)arg2 enrolledDeviceIDs:(id)arg3;
- (void)speakerIDEnrollmentFlowController:(id)arg1 didStartWithNavigationControllerToPresent:(id)arg2;
- (void)speakerIDEnrollmentFlowController:(id)arg1 shouldDisplaySpinnerWithNavigationControllerToPresent:(id)arg2;
- (void)assistantSettingsViewControllerNeedsDismissal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 settingsMenuService:(id)arg2 presentingViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

