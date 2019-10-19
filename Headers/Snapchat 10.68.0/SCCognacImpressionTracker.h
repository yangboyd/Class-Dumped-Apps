//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacImpressionTracking-Protocol.h"

@class NSMutableDictionary, NSString, SCCognacBlizzardEventLoggingController, SCCognacDataStorage, SCQueuePerformer;

@interface SCCognacImpressionTracker : NSObject <SCCognacImpressionTracking>
{
    SCQueuePerformer *_queuePerformer;
    NSMutableDictionary *_trackingItems;
    SCCognacDataStorage *_dataStorage;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
}

- (void).cxx_destruct;
- (void)_mutateTrackingItemsWithItem:(id)arg1 add:(_Bool)arg2 uniqueId:(id)arg3;
- (void)_handleEndImpressionTrackingWithImpressionItem:(id)arg1;
- (void)_handleStartImpressionTrackingWithImpressionItem:(id)arg1;
- (void)cancelTrackingImpressionWithUniqueId:(id)arg1 context:(unsigned long long)arg2;
- (void)startTrackingImpressionWithUniqueId:(id)arg1 appId:(id)arg2 buildId:(id)arg3 context:(unsigned long long)arg4;
- (id)initWithDataStorage:(id)arg1 eventLoggingController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

