//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSSchedulerDataSource-Protocol.h"

@class NSDate, NSString;
@protocol INSEventEnvelopeFactoryProtocol, INSEventSenderStatsProviderProtocol, INSEventSequenceIDProviderProtocol, INSInstallationIdProtocol, INSPersistentStore;

@interface INSEventSenderStatsDataSource : NSObject <INSSchedulerDataSource>
{
    NSDate *_lastDate;
    double _interval;
    id <INSEventSenderStatsProviderProtocol> _eventSenderStatsProvider;
    id <INSEventEnvelopeFactoryProtocol> _envelopeFactory;
    id <INSEventSequenceIDProviderProtocol> _sequenceIdProvider;
    id <INSPersistentStore> _persistentStore;
    id <INSInstallationIdProtocol> _installIdProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <INSInstallationIdProtocol> installIdProvider; // @synthesize installIdProvider=_installIdProvider;
@property(retain, nonatomic) id <INSPersistentStore> persistentStore; // @synthesize persistentStore=_persistentStore;
@property(retain, nonatomic) id <INSEventSequenceIDProviderProtocol> sequenceIdProvider; // @synthesize sequenceIdProvider=_sequenceIdProvider;
@property(retain, nonatomic) id <INSEventEnvelopeFactoryProtocol> envelopeFactory; // @synthesize envelopeFactory=_envelopeFactory;
@property(retain, nonatomic) id <INSEventSenderStatsProviderProtocol> eventSenderStatsProvider; // @synthesize eventSenderStatsProvider=_eventSenderStatsProvider;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
- (_Bool)shouldSendStatsEvent;
- (void)getAllEventEnvelopesOnPrivateMOCForOwner:(id)arg1 outAuthEnvelopes:(id)arg2 outNonAuthEnvelopes:(id)arg3;
- (id)initWithInterval:(double)arg1 eventSenderStatsProvider:(id)arg2 envelopeFactory:(id)arg3 sequenceIdProvider:(id)arg4 persistentStore:(id)arg5 installIdProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

