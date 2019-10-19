//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIDownloadProtocol-Protocol.h"

@class NFUIDownloadContext, NFUIDownloadError, NFUIDownloadExpiry, NSError, NSNumber, NSString;
@protocol NfOfflineDownloadInfo, NfOfflineLicenseInfo;

@interface NFUIDownload : NSObject <NFUIDownloadProtocol>
{
    _Bool _isAttemptKnownRetry;
    id <NfOfflineDownloadInfo> _lastReportedDownloadInfo;
    double _lastReportedProgress;
    NSError *_lastReportedError;
    _Bool _needsUpdate;
    _Bool _needsUpdateState;
    _Bool _needsUpdateProgress;
    id <NfOfflineLicenseInfo> _pendingLicenseInfo;
    NFUIDownloadExpiry *_lastReportedExpiry;
    _Bool _loading;
    _Bool _waiting;
    _Bool _queued;
    NSString *_entityId;
    NFUIDownloadError *_error;
    NSNumber *_fileSize;
    double _progress;
    unsigned long long _state;
    NFUIDownloadContext *_context;
    NSNumber *_loggerSessionId;
    NFUIDownloadExpiry *_expiry;
}

+ (id)preferredDownloadQuality;
@property(retain, nonatomic) NFUIDownloadExpiry *expiry; // @synthesize expiry=_expiry;
@property(retain, nonatomic) NSNumber *loggerSessionId; // @synthesize loggerSessionId=_loggerSessionId;
@property(nonatomic) _Bool queued; // @synthesize queued=_queued;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, copy, nonatomic) NFUIDownloadContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NFUIDownloadError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
- (void).cxx_destruct;
- (void)refreshDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)nflxDownloadUpdatedLicense:(id)arg1;
- (void)nflxDownloadUpdatedProgress:(double)arg1;
- (void)nflxDownloadResumed:(id)arg1;
- (void)nflxDownloadSuspended:(id)arg1;
- (void)nflxDownloadEnded:(id)arg1;
- (void)nflxDownloadOpened:(id)arg1;
- (void)initiateDownload:(CDUnknownBlockType)arg1;
- (void)setToLoading;
- (void)setToLoadingWithoutStateNotification;
- (id)internalDebugState;
- (void)handleNflxDownloadInfo:(id)arg1;
- (void)setNeedsUpdateExpiryWithLicenseInfo:(id)arg1;
- (void)updateExpiryIfNeeded;
- (void)setNeedsUpdateProgress;
- (void)updateProgressIfNeeded;
- (void)setNeedsUpdateState;
- (void)logStateChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)updateStateIfNeeded;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (_Bool)updateLastReportedProgress:(double)arg1;
- (void)updateLastReportedDownloadInfo:(id)arg1;
- (void)updateLastReportedError:(id)arg1;
- (double)nextProgress;
- (void)checkForDownloadableState:(id)arg1;
- (unsigned long long)nextState;
- (void)dealloc;
- (id)initWithId:(id)arg1 context:(id)arg2 forcedError:(id)arg3;
- (id)initWithId:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

