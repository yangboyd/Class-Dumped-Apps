//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGDismissableViewController-Protocol.h>
#import <InstagramAppCoreFramework/IGSettingsFollowAndInviteViewControllerDelegate-Protocol.h>

@class IG4BLogger, IGBottomButtonsView, IGBusinessSelectionFlowHeaderView, IGGroupedTableViewController, IGUserSession, NSArray, NSString;
@protocol IGProInviteFollowersShareAccountViewControllerDelegate;

@interface IGProInviteFollowersShareAccountViewController : IGViewController <IGDismissableViewController, IGSettingsFollowAndInviteViewControllerDelegate>
{
    IGBottomButtonsView *_bottomButtonsView;
    IGUserSession *_userSession;
    IGGroupedTableViewController *_settingsFollowAndInviteVC;
    NSArray *_additionalItems;
    id <IGProInviteFollowersShareAccountViewControllerDelegate> _flowDelegate;
    IG4BLogger *_logger;
    _Bool _shouldUseBottomButtonNavigation;
    _Bool _isStepComplete;
    IGBusinessSelectionFlowHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStepComplete; // @synthesize isStepComplete=_isStepComplete;
@property(retain, nonatomic) IGBusinessSelectionFlowHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)_logTappedFollowInviteRow:(long long)arg1;
- (void)_logSubmitError:(id)arg1;
- (void)_logSubmit;
- (void)_logContinueTapComponent;
- (void)_logSkip;
- (void)_logCancel;
- (void)_logStartStep;
- (void)_handleAccountSettingsViewControllerDidSelectSettingsActionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)accountSettingsViewControllerDidSelectSettingsAction:(long long)arg1;
- (void)didDismissViewController;
- (void)_setupHeaderView;
- (void)_skipButtonTapped;
- (void)_doneButtonTapped;
- (void)_setupNavigation;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 additionalItems:(id)arg2 logger:(id)arg3 shouldUseBottomButtonNavigation:(_Bool)arg4 isPresentedInNUX:(_Bool)arg5 flowDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

