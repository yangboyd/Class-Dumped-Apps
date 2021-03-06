//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMUAssetIteratorDelegate-Protocol.h"
#import "GMUAutoBackupControllerDelegate-Protocol.h"

@class GABPhotoBackupSettings, GABUploadResult, GMUAutoBackupController, GMUQuotaRequest, GMUUploadRequestCredentials, NSDate, NSString;
@protocol GABPhotoBackupManagerDelegate, OS_dispatch_queue, SSOIdentity, SSOService;

@interface GABPhotoBackupManager : NSObject <GMUAssetIteratorDelegate, GMUAutoBackupControllerDelegate>
{
    _Bool _didNotifyLowStorage;
    _Bool _backupRunning;
    int _alreadyExistingPhotos;
    id <GABPhotoBackupManagerDelegate> _delegate;
    NSString *_autoBackupUserEmail;
    GMUAutoBackupController *_backupController;
    id <SSOService> _ssoService;
    id <SSOIdentity> _signedInUser;
    GMUUploadRequestCredentials *_credentials;
    GMUQuotaRequest *_quotaRequest;
    GABPhotoBackupSettings *_carbonSettings;
    NSDate *_lastLibraryScanCompletedDate;
    long long _averagePhotoSize;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
    GABUploadResult *_uploadResult;
    unsigned long long _reachabilityState;
}

+ (_Bool)photosPermissionIsDenied;
+ (void)askForPhotosPermissionWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(nonatomic) int alreadyExistingPhotos; // @synthesize alreadyExistingPhotos=_alreadyExistingPhotos;
@property(retain, nonatomic) GABUploadResult *uploadResult; // @synthesize uploadResult=_uploadResult;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long averagePhotoSize; // @synthesize averagePhotoSize=_averagePhotoSize;
@property(retain, nonatomic) NSDate *lastLibraryScanCompletedDate; // @synthesize lastLibraryScanCompletedDate=_lastLibraryScanCompletedDate;
@property(nonatomic, getter=isBackupRunning) _Bool backupRunning; // @synthesize backupRunning=_backupRunning;
@property(retain, nonatomic) GABPhotoBackupSettings *carbonSettings; // @synthesize carbonSettings=_carbonSettings;
@property(nonatomic) _Bool didNotifyLowStorage; // @synthesize didNotifyLowStorage=_didNotifyLowStorage;
@property(retain, nonatomic) GMUQuotaRequest *quotaRequest; // @synthesize quotaRequest=_quotaRequest;
@property(retain, nonatomic) GMUUploadRequestCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) id <SSOIdentity> signedInUser; // @synthesize signedInUser=_signedInUser;
@property(retain, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) GMUAutoBackupController *backupController; // @synthesize backupController=_backupController;
@property(copy, nonatomic) NSString *autoBackupUserEmail; // @synthesize autoBackupUserEmail=_autoBackupUserEmail;
@property(nonatomic) __weak id <GABPhotoBackupManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)autoBackupControllerIsReachableViaWiFi:(id)arg1;
- (_Bool)autoBackupControllerIsReachable:(id)arg1;
- (void)autoBackupController:(id)arg1 didCompleteUpload:(id)arg2 result:(long long)arg3 resultantMediaItem:(id)arg4;
- (void)autoBackupController:(id)arg1 asset:(id)arg2 didProgress:(double)arg3;
- (void)autoBackupController:(id)arg1 didBeginUploadingAsset:(id)arg2;
- (void)autoBackupController:(id)arg1 didUpdateStatus:(id)arg2;
- (_Bool)autoBackupController:(id)arg1 shouldConsiderAsset:(id)arg2;
- (id)autoBackupController:(id)arg1 mediaKeyForFingerprint:(id)arg2;
- (_Bool)autoBackupController:(id)arg1 phodeoExistsForPhotoFingerprint:(id)arg2;
- (_Bool)autoBackupController:(id)arg1 fingerprintExistsInAccount:(id)arg2;
- (void)assetIterator:(id)arg1 didDiscoverRemovedAssets:(id)arg2;
- (void)assetIterator:(id)arg1 didDiscoverInsertedAssets:(id)arg2;
- (void)reportBackupProgress;
- (void)checkQuotaWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseBackupWithLowStorage;
- (void)didAuthorizeForPrebackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateReachabilityState:(unsigned long long)arg1;
- (_Bool)autoBackupEnabledInDriveAppForAnotherUser;
- (_Bool)autoBackupEnabledInDriveAppForCurrentUser;
- (_Bool)autoBackupEnabledInDriveApp;
- (void)backupCompleted:(_Bool)arg1;
- (void)cancelBackup;
- (void)pauseBackup;
- (void)resumeBackup;
- (void)beginBackupWithHighQualitySetting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginPreBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeBackupController;
- (id)initWithSignedInUser:(id)arg1 ssoService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

