//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString, YTDataSyncNotifier;
@protocol YTIdentityProvider;

@interface YTDataSyncStore : NSObject <YTUserChangedObserver>
{
    NSMutableDictionary *_pathsToNodesDict;
    id <YTIdentityProvider> _identityProvider;
    NSString *_dataSyncID;
    GIMMe *_gimme;
    YTDataSyncNotifier *_notifier;
}

@property(readonly, nonatomic) YTDataSyncNotifier *notifier; // @synthesize notifier=_notifier;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)testingOnlyDisableIdentityChecks;
- (id)pathsToNodesDict;
- (id)buildChangeNotifications:(id)arg1;
- (void)deleteModelWithPath:(id)arg1 subtreeDeletion:(_Bool)arg2 outputChangeList:(id)arg3;
- (void)childPathsOfModelsWithPath:(id)arg1 collectedPaths:(id)arg2;
- (void)addChildPath:(id)arg1 parentNode:(id)arg2;
- (void)removeNodeWithPath:(id)arg1;
- (id)insertNodeWithPath:(id)arg1;
- (void)applyChange:(id)arg1 outputChangeList:(id)arg2;
- (void)enforceCorrectIdentity;
- (_Bool)isStoreIdentityEqualToActiveIdentity;
- (void)setStoreIdentityToActiveIdentity;
- (void)clear;
- (void)userDidChange;
- (id)dataSyncID;
- (id)childPathsWithParentPath:(id)arg1;
- (void)fetchModelsWithPaths:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)fetchModelWithPath:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)modelsWithPaths:(id)arg1;
- (id)modelWithPath:(id)arg1;
- (void)change:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

