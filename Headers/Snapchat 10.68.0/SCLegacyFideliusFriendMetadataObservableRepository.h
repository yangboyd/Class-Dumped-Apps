//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFideliusFriendMetadataObservableRepository-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCBehaviorSubject, SCLegacyFideliusFriendMetadataCoordinator, SCQueuePerformer;
@protocol SCSnapchattersDataTracking;

@interface SCLegacyFideliusFriendMetadataObservableRepository : NSObject <SCSnapchattersDataRequestListener, SCFideliusFriendMetadataObservableRepository>
{
    SCLegacyFideliusFriendMetadataCoordinator *_fideliusFriendMetadataCoordinator;
    id <SCSnapchattersDataTracking> _snapchattersDataTracker;
    SCQueuePerformer *_performer;
    struct NSDictionary *_diffFideliusFriendMetadataMapForDelete;
    SCBehaviorSubject *_diffFideliusFriendMetadataSubject;
    struct mutex _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_nextDiffFideliusFriendMetadataMap:(struct NSDictionary *)arg1 snapchattersDataRequest:(id)arg2;
- (void)_nextFetchDataRequestWithNotification:(id)arg1;
- (void)_nextDeleteSnapchatterDataRequest:(id)arg1;
- (void)_nextAddSnapchatterDataRequest:(id)arg1;
- (struct NSDictionary *)_diffFideliusFriendMetadataMapWithUserIds:(id)arg1;
- (void)nextFetchDataRequestWithNotification:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)diffFideliusFriendMetadataObservable;
- (id)initWithfideliusFriendMetadataCoordinator:(id)arg1 snapchattersDataTracker:(id)arg2 notificationCenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

