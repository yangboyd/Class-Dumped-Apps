//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncInternalSyncOrder.h"

@class ComGoogleCommonUtilConcurrentSettableFuture, DYNSExecutorsJobPriority, DYNSSyncInternalSyncRequest;
@protocol JavaxInjectProvider;

@interface DYNSSyncInternalAutoValue_SyncOrder : DYNSSyncInternalSyncOrder
{
    DYNSSyncInternalSyncRequest *request_;
    id <JavaxInjectProvider> syncerProvider_;
    DYNSExecutorsJobPriority *priority_;
    ComGoogleCommonUtilConcurrentSettableFuture *syncSettable_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getSyncSettable;
- (id)getPriority;
- (id)getSyncerProvider;
- (id)getRequest;

@end

