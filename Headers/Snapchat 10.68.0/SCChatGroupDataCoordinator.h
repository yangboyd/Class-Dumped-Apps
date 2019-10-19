//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;
@protocol SCChatGroup, SCGroupManager;

@interface SCChatGroupDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating>
{
    id <SCGroupManager> _groupManager;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
    id <SCChatGroup> _group;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)cachedGroupForId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithGroupManager:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

