//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsOfflinesearchIndexingOfflineSearchIndexer_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> jobQueueProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> countersApiProvider_;
    id <JavaxInjectProvider> indexBumpMessagesForOfflineSearchProvider_;
    id <JavaxInjectProvider> indexStorageStateProvider_;
    id <JavaxInjectProvider> itemsTableControllerProvider_;
    id <JavaxInjectProvider> itemMessagesCoordinatorProvider_;
    id <JavaxInjectProvider> itemTombstonesTableControllerProvider_;
    id <JavaxInjectProvider> itemMessageTombstonesTableControllerProvider_;
    id <JavaxInjectProvider> syncReasonsTableControllerProvider_;
    id <JavaxInjectProvider> writeSequenceIdTableControllerProvider_;
    id <JavaxInjectProvider> systemPropertiesClientProvider_;
    id <JavaxInjectProvider> writeToExternalClientProvider_;
    id <JavaxInjectProvider> observableSyncStatusProvider_;
    id <JavaxInjectProvider> webOfflineProvider_;
    id <JavaxInjectProvider> useXplatDbProvider_;
    id <JavaxInjectProvider> transactionPromiseFactoryProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

