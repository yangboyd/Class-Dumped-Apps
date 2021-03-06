//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAPersistentStanzaQueue;

@interface WAPeerMessagesQueue : NSObject
{
    WAPersistentStanzaQueue *_stanzaQueue;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) WAPersistentStanzaQueue *stanzaQueue; // @synthesize stanzaQueue=_stanzaQueue;
- (id)observersForOutgoingStanza:(id)arg1 withID:(id)arg2;
- (void)removeObserverForCompanionDevice:(id)arg1 uuid:(id)arg2;
- (id)addObserverForCompanionDevice:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)removeStanzaForKey:(id)arg1;
- (_Bool)updateOutgoingStanzaForAck:(id)arg1;
- (unsigned long long)peerMessageStatusForReceiptType:(unsigned long long)arg1;
- (_Bool)updateOutgoingStanzaForReceipt:(id)arg1;
- (_Bool)enqueueOutgoingStanza:(id)arg1;
- (id)initWithStanzaQueue:(id)arg1;

@end

