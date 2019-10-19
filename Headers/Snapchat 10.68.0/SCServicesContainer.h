//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCServicesExposer.h"

#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSString;
@protocol SCServicesContainerDelegate;

@interface SCServicesContainer : SCServicesExposer <SCTraceEnabled>
{
    id _services;
    NSOperationQueue *_operationQueue;
    id <SCServicesContainerDelegate> _delegate;
    NSMutableArray *_waitingConsumers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id services;
- (void)onExpose:(CDUnknownBlockType)arg1;
- (void)exposeServices:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

