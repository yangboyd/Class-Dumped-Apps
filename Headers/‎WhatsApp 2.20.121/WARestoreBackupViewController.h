//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "WARestoreBackupViewControllerRestoreProviderDelegate-Protocol.h"

@class NSDate, NSLayoutConstraint, NSNumber, NSString, UIBarButtonItem, UILabel, UIView, WAActivityIndicatorView, WABackupInfoTableViewCell, WAPreviousBackup, WAReferenceCountToken, WAWeakTimer, WamEventICloudRestore;
@protocol WARestoreBackupViewControllerDelegate, WARestoreBackupViewControllerRestoreProvider, WARestoreBackupViewControllerRestoreProviderGenerating;

@interface WARestoreBackupViewController : WATableViewController <WARestoreBackupViewControllerRestoreProviderDelegate>
{
    _Bool _skipButtonOverride;
    _Bool _skipButtonTableView;
    NSNumber *_eventStartTime;
    NSNumber *_integrityCheckResult;
    WAPreviousBackup *_previousBackup;
    WAWeakTimer *_timer;
    _Bool _shouldUploadLogs;
    NSString *_lastStatusMessage;
    WAReferenceCountToken *_rageShakeEnabledToken;
    id <WARestoreBackupViewControllerRestoreProvider> _restoreProvider;
    id <WARestoreBackupViewControllerRestoreProviderGenerating> _restoreProviderGenerator;
    _Bool _allowsUserToSkipRestore;
    _Bool _didFinishEntireRestore;
    _Bool _showFooterView;
    _Bool _restoring;
    UIBarButtonItem *_barButtonSkip;
    UIBarButtonItem *_barButtonRestore;
    UIBarButtonItem *_barButtonNext;
    id <WARestoreBackupViewControllerDelegate> _delegate;
    WABackupInfoTableViewCell *_cellBackupInfo;
    NSLayoutConstraint *_noiCloudTextTopMargin;
    NSLayoutConstraint *_noiCloudTextBottomMargin;
    UIView *_viewNoiCloud;
    UILabel *_labelNoiCloud;
    NSString *_footerProgressText;
    NSString *_footerHelperText;
    UIView *_footerView;
    UILabel *_footerTextLabel;
    WAActivityIndicatorView *_activityIndicator;
    NSDate *_loggedPreviousBackupDate;
    NSNumber *_numberOfMessagesRestored;
    WamEventICloudRestore *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WamEventICloudRestore *event; // @synthesize event=_event;
@property(nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(retain, nonatomic) NSNumber *numberOfMessagesRestored; // @synthesize numberOfMessagesRestored=_numberOfMessagesRestored;
@property(retain, nonatomic) NSDate *loggedPreviousBackupDate; // @synthesize loggedPreviousBackupDate=_loggedPreviousBackupDate;
@property(retain, nonatomic) WAActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *footerTextLabel; // @synthesize footerTextLabel=_footerTextLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *footerHelperText; // @synthesize footerHelperText=_footerHelperText;
@property(copy, nonatomic) NSString *footerProgressText; // @synthesize footerProgressText=_footerProgressText;
@property(nonatomic) _Bool showFooterView; // @synthesize showFooterView=_showFooterView;
@property(retain, nonatomic) UILabel *labelNoiCloud; // @synthesize labelNoiCloud=_labelNoiCloud;
@property(retain, nonatomic) UIView *viewNoiCloud; // @synthesize viewNoiCloud=_viewNoiCloud;
@property(nonatomic) __weak NSLayoutConstraint *noiCloudTextBottomMargin; // @synthesize noiCloudTextBottomMargin=_noiCloudTextBottomMargin;
@property(nonatomic) __weak NSLayoutConstraint *noiCloudTextTopMargin; // @synthesize noiCloudTextTopMargin=_noiCloudTextTopMargin;
@property(retain, nonatomic) WABackupInfoTableViewCell *cellBackupInfo; // @synthesize cellBackupInfo=_cellBackupInfo;
@property(nonatomic) __weak id <WARestoreBackupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didFinishEntireRestore; // @synthesize didFinishEntireRestore=_didFinishEntireRestore;
@property(nonatomic) _Bool allowsUserToSkipRestore; // @synthesize allowsUserToSkipRestore=_allowsUserToSkipRestore;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadNoICloudHelperText;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)startRestoreIfRequested;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)nextAction:(id)arg1;
- (void)restoreAction:(id)arg1;
- (void)skipAction:(id)arg1;
- (void)notifyDelegateDidFinish;
- (void)runFinishActions;
- (void)submitFieldStatsEvent;
- (void)countNumberOfMessagesRestored;
- (void)integrityCheck:(id)arg1;
- (void)updateUserDefaults;
- (void)updateForPreviousBackup;
- (void)restoreProvider:(id)arg1 didChangePreviousBackup:(id)arg2;
- (void)restoreProviderDidUpdateCloudStatus:(id)arg1;
- (void)restoreProvider:(id)arg1 didEndRestorePhase:(unsigned long long)arg2;
- (void)restoreFromBackupIfAvailable;
- (void)startRestoreSequenceFromUserInteraction:(_Bool)arg1;
- (void)startRestoreSequence:(_Bool)arg1;
- (void)presentIcloudSignedOutAlert;
- (void)presentCouldntRestoreChatHistoryAlert;
- (void)presentIcloudNotEnoughSpaceToRestoreAlert;
@property(readonly, nonatomic) UIBarButtonItem *barButtonNext; // @synthesize barButtonNext=_barButtonNext;
@property(readonly, nonatomic) UIBarButtonItem *barButtonRestore; // @synthesize barButtonRestore=_barButtonRestore;
@property(readonly, nonatomic) UIBarButtonItem *barButtonSkip; // @synthesize barButtonSkip=_barButtonSkip;
- (void)updateBarButtonItems;
- (void)overrideSkipButton;
- (void)updateBackupDetails;
- (void)setFooterProgressText:(id)arg1 helperText:(id)arg2;
- (void)stopTimerIfNeeded;
- (void)startTimerIfNeeded;
- (void)updateProgressText;
- (void)stopAnimatingGears;
- (void)startAnimatingGears;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 restoreProviderGenerator:(id)arg2;

@end

