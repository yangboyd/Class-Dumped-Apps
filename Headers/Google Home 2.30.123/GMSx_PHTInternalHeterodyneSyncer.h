//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PHTHeterodyneSyncerProtocol-Protocol.h"

@class GMSx_GIPPseudonymousIDStore, GMSx_PHTBreakableLock, GMSx_PHTPhenotypeSyncAfterConfiguration, NSURL;
@protocol CCTClockProtocol, OS_dispatch_queue, PHTInternalPhenotypeFlagsProtocol;

@interface GMSx_PHTInternalHeterodyneSyncer : NSObject <PHTHeterodyneSyncerProtocol>
{
    NSURL *_serverURL;
    _Bool _allowHTTP;
    id <CCTClockProtocol> _clock;
    GMSx_GIPPseudonymousIDStore *_pseudonymousIDStore;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GMSx_PHTBreakableLock *_lock;
    _Bool _debugForceSyncs;
    id <PHTInternalPhenotypeFlagsProtocol> _flags;
    GMSx_PHTPhenotypeSyncAfterConfiguration *_syncAfterConfiguration;
}

+ (id)syncMetadataWithError:(id *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) GMSx_PHTPhenotypeSyncAfterConfiguration *syncAfterConfiguration; // @synthesize syncAfterConfiguration=_syncAfterConfiguration;
- (_Bool)isInternalHeterodyneSyncer;
- (id)phenotypeRegistrationDataWithURLs:(id)arg1 error:(id *)arg2;
- (_Bool)isNoInternetError:(id)arg1;
- (id)updateMetadataWithSyncedScopes:(id)arg1;
- (id)mergePartition:(id)arg1 withPartition:(id)arg2;
- (id)mergeResponse:(id)arg1 withResponse:(id)arg2;
- (id)createClientProperties:(id)arg1;
- (void)processResponse:(id)arg1 account:(id)arg2 syncedScopes:(id)arg3 requestedPackages:(id)arg4 requestError:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)syncHoldingLockWithSyncedScopes:(id)arg1 fetchReason:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)syncWithCallback:(CDUnknownBlockType)arg1;
- (int)fetchReason:(id *)arg1;
- (id)initWithOverrideServerURL:(id)arg1 allowHTTP:(_Bool)arg2 clock:(id)arg3 pseudonymousIDStore:(id)arg4 debugForceSyncs:(_Bool)arg5 flags:(id)arg6 callbackQueue:(id)arg7;

@end

