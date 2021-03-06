//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FKFeedbackServiceDelegate-Protocol.h"
#import "GSCFeedbackService-Protocol.h"

@class GSCFeedbackOptions, NSSet, NSString;
@protocol GIPAccountID, GSCNavigationService, SSOService;

@interface GSCFeedbackServiceImpl : NSObject <FKFeedbackServiceDelegate, GSCFeedbackService>
{
    GSCFeedbackOptions *_feedbackOptions;
    id <GIPAccountID> _accountID;
    id <SSOService> _ssoService;
    id <GSCNavigationService> _navigationService;
    NSSet *_lastCrashReportIds;
    double _waitForReportStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) double waitForReportStartTime; // @synthesize waitForReportStartTime=_waitForReportStartTime;
@property(retain, nonatomic) NSSet *lastCrashReportIds; // @synthesize lastCrashReportIds=_lastCrashReportIds;
- (id)dialogColorScheme;
- (void)showAlert:(id)arg1;
- (void)closeViewController:(id)arg1;
- (id)breakpadCacheDir;
- (id)crashUrlWithReportIds:(id)arg1 useStaging:(_Bool)arg2;
- (id)uploadedReportIdsInReportIds:(id)arg1;
- (id)fetchCrashReportIds;
- (void)showAlertForCrashWithUrl:(id)arg1;
- (id)checkIfCrashReportsAreUploaded;
- (id)waitForCrashReportsToUpload;
- (id)viewControllerForNewReportWithCrashURL:(id)arg1 screenshot:(id)arg2 productSpecificData:(id)arg3;
- (_Bool)viewControllerShouldDismissFeedbackFlow:(id)arg1 dismissalState:(long long)arg2;
- (id)viewControllerForNewReportWithProductSpecificData:(id)arg1;
- (id)viewControllerForNewReportWithScreenshot:(id)arg1;
- (id)viewControllerForNewReport;
- (void)promptCrashFeedback;
- (id)initWithAccountID:(id)arg1 navigationService:(id)arg2 SSOService:(id)arg3 options:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

