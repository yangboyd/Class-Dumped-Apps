//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapStatusRPCService-Protocol.h"

@class NSString, SCMapSnapTokenService, SCQueuePerformer;
@protocol SCMapPeopleFriendsProvider;

@interface SCMapStatusRPCService : NSObject <SCMapStatusRPCService>
{
    NSString *_currentUserId;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    SCMapSnapTokenService *_mapSnapTokenService;
    SCQueuePerformer *_performer;
    unsigned long long _numberOfFailedDeletionAttempts;
    unsigned long long _numberOfFailedBatchViewAttempts;
}

- (void).cxx_destruct;
- (void)submitViewEvents:(id)arg1;
- (void)deleteMyStatus:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)fetchMyStatusesWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)fetchExploreItemsWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (id)initWithCurrentUserId:(id)arg1 mapPeopleFriendsProvider:(id)arg2 mapSnapTokenService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

