//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter;
@protocol JavaUtilSet;

@interface ComGoogleAppsBigtopDataItemsChangesApplierChangeApplier : NSObject
{
    id <JavaUtilSet> threadAppliers_;
    id <JavaUtilSet> clusterAppliers_;
    ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter *singleItemChangeConverter_;
}

+ (void)initialize;
- (void)dealloc;
- (id)applyLocalChangeWithComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ClusterChange:(id)arg2;
- (id)applyRemoteChangeWithComGoogleAppsBigtopDataStorageSchemaItemEntry:(id)arg1 withJBTSSingleItemChangeFromServer:(id)arg2 withJavaLangLong:(id)arg3;
- (id)applyLocalChangeWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_SingleItemChange:(id)arg2;
- (id)applyLocalChangeWithComGoogleAppsBigtopDataStorageSchemaItemEntry:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_SingleItemChange:(id)arg2 withJavaLangLong:(id)arg3;
- (id)getMessageOperationForInsertingFetchedMessageOrDetailedMessageWithJBTSFetchedMessage:(id)arg1 withComGoogleAppsBigtopDataItemsItemsSlicesProtos_DetailedMessage:(id)arg2;
- (id)getMessageOperationForRemoteChangeWithComGoogleAppsBigtopDataStorageSchemaItemEntry:(id)arg1 withJBTSSingleItemCommandFromServer:(id)arg2;
- (id)getInvalidateMessageOperationsOnThreadUpdateWithComGoogleAppsBigtopDataStorageSchemaItemEntry:(id)arg1 withComGoogleAppsBigtopDataItemsItemsSlicesProtos_ItemSummary:(id)arg2;
- (id)getMessageOperationsForLocalChangeWithJavaUtilList:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2;

@end

