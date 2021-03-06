//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FKFeedbackServiceDelegate-Protocol.h"
#import "HUBHostFeedbackService-Protocol.h"
#import "HUBSnackbarManagerDelegate-Protocol.h"

@class HUBFeedbackData, HUBHostFeedbackServiceImplOptions, NSDate, NSString, UIImage, UIViewController;
@protocol GIKAuthorizationService, GSCNavigationService, HUBHostAuthorizationScopesService, HUBSnackbarManager, SSOService;

@interface HUBHostFeedbackServiceImpl : NSObject <FKFeedbackServiceDelegate, HUBSnackbarManagerDelegate, HUBHostFeedbackService>
{
    HUBHostFeedbackServiceImplOptions *_options;
    struct {
        int appId;
        id feedbackServiceProvider;
        HUBFeedbackData *feedbackData;
    } _hubGuestAppData[3];
    id <GIKAuthorizationService> _authorizationService;
    id <HUBHostAuthorizationScopesService> _hubHostScopesService;
    int _activeGuestApplication;
    id <GSCNavigationService> _navigationService;
    id <HUBSnackbarManager> _snackbarManager;
    UIViewController *_presentingController;
    NSDate *_feedbackStartDate;
    id <SSOService> _ssoService;
    UIImage *_screenShotImage;
    UIViewController *_currentFeedbackViewController;
}

+ (id)deviceIdentifier;
- (void).cxx_destruct;
- (double)snackbarBottomOffset;
- (id)createAutenticatedFetcher;
- (id)feedbackServiceWithScreenshot:(id)arg1 dxpFeedbackGenerator:(id)arg2;
- (_Bool)viewControllerShouldDismissFeedbackFlow:(id)arg1 dismissalState:(long long)arg2;
- (void)pushFeedbackControllerWithDXPFeedbackGenerator:(id)arg1 screenshot:(id)arg2;
- (void)collectHubFeedbackDataFromGuest:(id)arg1 feedbackData:(id)arg2;
- (void)collectHubFeedbackDataFromGuests;
- (void)storeScreenShot:(id)arg1;
- (void)uploadPendingFeedbackReports;
- (void)presentFeedbackWithScreenShotImage:(id)arg1 guestAppIdentifier:(int)arg2;
- (void)presentFeedbackWithScreenShotImage:(id)arg1 dxpFeedbackGenerator:(id)arg2 guestAppIdentifier:(int)arg3;
- (id)initWithDeps:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

