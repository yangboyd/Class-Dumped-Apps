//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <drive_extension_framework/GDKHelpKitService-Protocol.h>
#import <drive_extension_framework/GHKAPIDelegate-Protocol.h>
#import <drive_extension_framework/GHKViewControllerDelegate-Protocol.h>

@class GTMSessionFetcherService, NSString;
@protocol DXPFeedbackPSDGenerator, GDKFlagObserving, GDKViewControllerPresenting, GDKViewControllerToken;

@interface GDAHelpService : NSObject <GHKAPIDelegate, GHKViewControllerDelegate, GDKHelpKitService>
{
    _Bool _canCreateTeamDrives;
    id <GDKViewControllerPresenting> _viewPresenter;
    GTMSessionFetcherService *_fetcherService;
    id <DXPFeedbackPSDGenerator> _dxpFeedbackPSDGenerator;
    NSString *_customerType;
    NSString *_helpKitContext;
    id <GDKFlagObserving> _userFlags;
    long long _helpContext;
    id <GDKViewControllerToken> _vcToken;
}

+ (void)updateFeedbackConfig:(id)arg1 forContext:(int)arg2;
+ (id)helpKitConfigurationWithFetcher:(id)arg1 dxpFeedbackPSDGenerator:(id)arg2 customerType:(id)arg3 userFlags:(id)arg4 canCreateTeamDrives:(_Bool)arg5 helpContext:(id)arg6 enableScreenshot:(_Bool)arg7;
+ (id)helpKitVCForFetcherService:(id)arg1 helpKitVCExitDelegate:(id)arg2;
+ (id)feedbackServiceForFetcher:(id)arg1 dxpFeedbackPSDGenerator:(id)arg2 customerType:(id)arg3 userFlags:(id)arg4 canCreateTeamDrives:(_Bool)arg5 helpContext:(id)arg6 enableScreenshot:(_Bool)arg7 context:(int)arg8;
+ (void)startGCMWithDeviceToken:(id)arg1;
+ (void)handleRemoteNotification:(id)arg1;
+ (_Bool)shouldHandleRemoteNotification:(id)arg1;
+ (void)synchronizeHelpKitWithFetcherService:(id)arg1;
+ (void)registerHelpKitWithFetcherService:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GDKViewControllerToken> vcToken; // @synthesize vcToken=_vcToken;
@property(nonatomic) long long helpContext; // @synthesize helpContext=_helpContext;
@property(nonatomic) _Bool canCreateTeamDrives; // @synthesize canCreateTeamDrives=_canCreateTeamDrives;
@property(retain, nonatomic) id <GDKFlagObserving> userFlags; // @synthesize userFlags=_userFlags;
@property(copy, nonatomic) NSString *helpKitContext; // @synthesize helpKitContext=_helpKitContext;
@property(copy, nonatomic) NSString *customerType; // @synthesize customerType=_customerType;
@property(readonly, nonatomic) id <DXPFeedbackPSDGenerator> dxpFeedbackPSDGenerator; // @synthesize dxpFeedbackPSDGenerator=_dxpFeedbackPSDGenerator;
@property(retain, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(nonatomic) __weak id <GDKViewControllerPresenting> viewPresenter; // @synthesize viewPresenter=_viewPresenter;
- (void)presentHelpKitViewController:(id)arg1;
- (void)resumeHelpKit;
- (void)exitHelpKitWithStatus:(long long)arg1;
- (void)displayHelp;
- (void)displayHelpFromContext:(long long)arg1;
- (id)initWithFetcher:(id)arg1 dxpFeedbackPSDGenerator:(id)arg2 customerType:(id)arg3 userFlags:(id)arg4 canCreateTeamDrives:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

