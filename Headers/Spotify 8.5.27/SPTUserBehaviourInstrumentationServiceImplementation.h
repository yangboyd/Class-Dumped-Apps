//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUserBehaviourInstrumentationService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTDebugService, SPTEventSenderService;

@interface SPTUserBehaviourInstrumentationServiceImplementation : NSObject <SPTUserBehaviourInstrumentationService>
{
    id <SPTEventSenderService> _eventSenderService;
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
- (void).cxx_destruct;
- (id)provideUserBehaviourInstrumentationStateViewController;
- (void)unload;
- (void)load;
- (id)provideEventFactory;
- (id)provideUBILogger;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

