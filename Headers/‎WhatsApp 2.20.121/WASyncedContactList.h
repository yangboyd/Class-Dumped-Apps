//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSSet, XMPPConnection;
@protocol OS_dispatch_queue, WASyncedContactListProviding;

@interface WASyncedContactList : NSObject
{
    NSMutableSet *_allContacts;
    NSMutableSet *_pendingContacts;
    _Bool _synchronizationInProgress;
    _Bool _needsUpstreamSync;
    _Bool _needsDownstreamSync;
    NSMutableArray *_upstreamSyncWebClientRequestIDs;
    CDUnknownBlockType _upstreamSyncWebClientCompletionHandler;
    XMPPConnection *_xmppConnection;
    id <WASyncedContactListProviding> _provider;
    NSObject<OS_dispatch_queue> *_saveQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *saveQueue; // @synthesize saveQueue=_saveQueue;
@property(nonatomic) __weak id <WASyncedContactListProviding> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) XMPPConnection *xmppConnection; // @synthesize xmppConnection=_xmppConnection;
- (_Bool)isAnyContactPending;
- (void)savePendingContacts;
- (_Bool)removeJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isSyncPendingForJID:(id)arg1 blocked:(out _Bool *)arg2;
- (_Bool)containsJID:(id)arg1 syncPending:(out _Bool *)arg2;
@property(readonly, nonatomic) NSSet *jids;
@property(readonly, nonatomic) unsigned long long size;
- (id)prepareToMutateList;
- (void)loadContactsIfNecessary;
- (id)initWithXMPPConnection:(id)arg1 saveQueue:(id)arg2 provider:(id)arg3;

@end

