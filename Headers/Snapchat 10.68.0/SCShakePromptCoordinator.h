//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBTweakViewControllerDelegate-Protocol.h"
#import "SCBetaShakeReportViewControllerDelegate-Protocol.h"
#import "SCOperaShakeToReportOperator-Protocol.h"
#import "SCShakeReportDelegate-Protocol.h"

@class NSString, SCAlertView, SCEventListenerAnnouncer, SCLazy, SCOperaViewController, UIViewController, UIWindow;
@protocol SCShakeToReportExternalImageAttachmentProvider;

@interface SCShakePromptCoordinator : NSObject <FBTweakViewControllerDelegate, SCShakeReportDelegate, SCOperaShakeToReportOperator, SCBetaShakeReportViewControllerDelegate>
{
    _Bool _isOperaPresenterShowing;
    SCOperaViewController *_operaViewController;
    UIViewController *_topVC;
    UIWindow *_window;
    UIViewController *_presentingReportVC;
    SCAlertView *_alertView;
    SCLazy *_lazyEventAnnouncer;
    id <SCShakeToReportExternalImageAttachmentProvider> _externalImageAttachmentProvider;
}

+ (id)announcerIdentifier;
+ (id)sharedCoordinator;
@property(nonatomic) __weak id <SCShakeToReportExternalImageAttachmentProvider> externalImageAttachmentProvider; // @synthesize externalImageAttachmentProvider=_externalImageAttachmentProvider;
@property(readonly, nonatomic) SCLazy *lazyEventAnnouncer; // @synthesize lazyEventAnnouncer=_lazyEventAnnouncer;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) NSString *announcerIdentifier;
@property(readonly, nonatomic) SCEventListenerAnnouncer *eventAnnouncer;
- (void)operaDidDisappear;
- (void)operaDidAppear:(id)arg1;
- (void)tweakViewControllerPressedDone:(id)arg1;
- (void)reportSubmitted:(id)arg1 projectName:(id)arg2 subProjectName:(id)arg3;
- (void)resumeShakeReport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shakeReportDidComplete:(id)arg1;
- (id)_betafeatureNames;
- (void)_exitShakePrompt;
- (void)_setViewControllerNameAndFeature:(id)arg1;
- (id)_getJiraMetaInfo;
- (id)_defaultSubProjectName;
- (id)_getDefaultProjectName;
- (_Bool)_shouldCensorScreenshot:(id)arg1;
- (void)_launchTweaks;
- (void)_launchBetaReportView:(id)arg1 screenshot:(id)arg2 time:(long long)arg3 mode:(long long)arg4;
- (void)_launchInternalReportView:(id)arg1 shakeCaptureData:(id)arg2 time:(long long)arg3 configuration:(id)arg4 mode:(long long)arg5;
- (id)_topViewControllerForRootViewController:(id)arg1;
- (id)_topViewController;
- (id)_topViewControllerForProjectConfig;
- (_Bool)_isDisplayingReportViewOrPrompt;
- (_Bool)_isDisplayingReportView;
- (void)_displayPrompt:(id)arg1 message:(id)arg2 actions:(id)arg3;
- (void)_displayExternalPrompt:(id)arg1 screenshot:(id)arg2 reportCreationTime:(long long)arg3;
- (void)_displayInternalPrompt:(id)arg1 shakeCaptureData:(id)arg2 reportCreationTime:(long long)arg3 configuration:(id)arg4;
- (_Bool)_shouldObsecureScreenshotOnCurrentPage;
- (_Bool)_userSessionExist;
- (id)_prepareScreenshotObsecured:(_Bool)arg1;
- (long long)_prepareShakeStart:(id)arg1;
- (_Bool)_shouldDisabledShakeOnCurrentPage;
- (void)_handleProdShakeWorkFlow;
- (void)_handleBetaShakeWorkFlow;
- (void)_handleInternalShakeWorkFlow:(id)arg1;
- (void)showShakePrompt:(id)arg1 configuration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

