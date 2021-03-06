//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState, ComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds, ComGoogleAppsBigtopDataItemsItemsInternalProto_StoredChange, ComGoogleAppsBigtopDataItemsItemsProto_Change_Type, ComGoogleAppsBigtopDataStorageSchemaItemChange, ComGoogleAppsXplatStorageDbTransactionPromise;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataStorageSchemaItemChangeDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByItemRowIdAndChangeStateWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByItemRowIdsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByClusterRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByItemRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateForRowIdSetStoredChangeAndLocalOnlyWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_StoredChange:(ComGoogleAppsBigtopDataItemsItemsInternalProto_StoredChange *)arg2 withBoolean:(_Bool)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateForRowIdSetStoredChangeWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_StoredChange:(ComGoogleAppsBigtopDataItemsItemsInternalProto_StoredChange *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectRetryableErrorCountByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectItemRowIdByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countByChangeGroupIdAndIsLocalOnlyAndChangeStateWithLong:(long long)arg1 withBoolean:(_Bool)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectChangeGroupIdByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectRowIdsByChangeStateAndLocalApplyTimeMsBelowWithComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectRowIdsByChangeTypeAndChangeOrderWithComGoogleAppsBigtopDataItemsItemsProto_Change_Type:(ComGoogleAppsBigtopDataItemsItemsProto_Change_Type *)arg1 withInt:(int)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectAnyRowIdByChangeTypeAndChangeStateWithComGoogleAppsBigtopDataItemsItemsProto_Change_Type:(ComGoogleAppsBigtopDataItemsItemsProto_Change_Type *)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectRowIdsBy5ChangeTypesWithComGoogleAppsBigtopDataItemsItemsProto_Change_Type:(ComGoogleAppsBigtopDataItemsItemsProto_Change_Type *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_Change_Type:(ComGoogleAppsBigtopDataItemsItemsProto_Change_Type *)arg2 withComGoogleAppsBigtopDataItemsItemsProto_Change_Type:(ComGoogleAppsBigtopDataItemsItemsProto_Change_Type *)arg3 withComGoogleAppsBigtopDataItemsItemsProto_Change_Type:(ComGoogleAppsBigtopDataItemsItemsProto_Change_Type *)arg4 withComGoogleAppsBigtopDataItemsItemsProto_Change_Type:(ComGoogleAppsBigtopDataItemsItemsProto_Change_Type *)arg5;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectRowIdByChangeStateAndMaxServerVersionWithComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByChangeOrderItemRowIdAndWasRolledBackWithInt:(int)arg1 withLong:(long long)arg2 withBoolean:(_Bool)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectForRowIdWasRolledBackAndIsLocalOnlyWithLong:(long long)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByChangeGroupIdWasRolledBackAndLocalOnlyWithLong:(long long)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectChangeOrder;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectMaxChangeGroupId;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateForRowIdSetRetryableErrorCountAndNextRetryTimestampWithLong:(long long)arg1 withInt:(int)arg2 withLong:(long long)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateForRowIdSetAckedItemServerPermIdsWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateForRowIdSetWasRolledBackWithLong:(long long)arg1 withBoolean:(_Bool)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateForRowIdSetChangeStateWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateForRowIdSetChangeStateAndServerVersionWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2 withLong:(long long)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectRowIdsByItemRowIdAndChangeOrderWithLong:(long long)arg1 withInt:(int)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectRowIdsByClusterRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectItemRowIdByItemRowIdAnd2ChangeStatesWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countByItemRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByItemRowIdAndChangeStateWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectStoredChangeByClusterRowIdAndChangeStateWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectStoredChangeByItemRowIdAnd2ChangeStatesWithLong:(long long)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countChangeGroupIdByChangeStateAndLocalOnlyWithComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg1 withBoolean:(_Bool)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByGroupIdsChangeStateAndLocalOnlyWithJavaUtilList:(id <JavaUtilList>)arg1 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg2 withBoolean:(_Bool)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByChangeStateAndLocalOnlyWithLimitWithComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg1 withBoolean:(_Bool)arg2 withInt:(int)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countByChangeStateAndLocalOnlyWithComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState:(ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeState *)arg1 withBoolean:(_Bool)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertWithComGoogleAppsBigtopDataStorageSchemaItemChange:(ComGoogleAppsBigtopDataStorageSchemaItemChange *)arg1;
@end

