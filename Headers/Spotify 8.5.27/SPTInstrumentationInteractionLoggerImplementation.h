//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationInteractionLogger-Protocol.h"

@class NSString;
@protocol SPTInstrumentationTransport;

@interface SPTInstrumentationInteractionLoggerImplementation : NSObject <SPTInstrumentationInteractionLogger>
{
    id <SPTInstrumentationTransport> _transport;
}

@property(retain, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)logInteractionWithItemID:(id)arg1 interactionID:(id)arg2 interactionType:(id)arg3 interactionIntent:(id)arg4 pageIdentifier:(id)arg5 pageURI:(id)arg6;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

