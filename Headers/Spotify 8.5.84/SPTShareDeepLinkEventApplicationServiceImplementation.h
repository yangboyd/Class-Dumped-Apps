//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareDeepLinkEventApplicationService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTEventSenderService, SPTShareDeepLinkApplicationEventHandler, SPTShareEventSenderLogger;

@interface SPTShareDeepLinkEventApplicationServiceImplementation : NSObject <SPTShareDeepLinkEventApplicationService>
{
    id <SPTEventSenderService> _eventSenderService;
    id <SPTShareDeepLinkApplicationEventHandler> _deepLinkEventHandler;
    id <SPTShareEventSenderLogger> _shareEventSenderLogger;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTShareEventSenderLogger> shareEventSenderLogger; // @synthesize shareEventSenderLogger=_shareEventSenderLogger;
@property(retain, nonatomic) id <SPTShareDeepLinkApplicationEventHandler> deepLinkEventHandler; // @synthesize deepLinkEventHandler=_deepLinkEventHandler;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
- (id)provideShareDeepLinkEventHandler;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

