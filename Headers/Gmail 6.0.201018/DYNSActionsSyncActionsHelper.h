//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSNetworkConnectivityOfflineExceptionHandler, DYNSSyncV2CoordinatorsCatchUpManager, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2GetGroupSyncLauncher;
@protocol DYNSNetworkConnectivityNetworkConnectionState, JavaxInjectProvider;

@interface DYNSActionsSyncActionsHelper : NSObject
{
    DYNSSyncV2CoordinatorsCatchUpManager *catchUpManager_;
    DYNSSyncV2GetGroupSyncLauncher *getGroupSyncLauncher_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    DYNSNetworkConnectivityOfflineExceptionHandler *offlineExceptionHandler_;
    id <JavaxInjectProvider> executorProvider_;
}

- (void)dealloc;
- (id)trySyncGroupMetadataWithDYNSCommonGroupId:(id)arg1;

@end

