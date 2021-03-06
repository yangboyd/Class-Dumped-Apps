//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVEClearcutLogEventProvider-Protocol.h"
#import "GBTClearcutLogEventProvider-Protocol.h"

@class NSString;
@protocol GBTAccount, GBTClearcutLogEventProviderImplDeps;

@interface GBTClearcutLogEventProviderImpl : NSObject <GBTClearcutLogEventProvider, AVEClearcutLogEventProvider>
{
    id <GBTAccount> _account;
    id <GBTClearcutLogEventProviderImplDeps> _deps;
}

- (void).cxx_destruct;
- (id)notificationEventFromHierarchy:(id)arg1;
- (id)createAncestryVisualElement:(id)arg1 withInteraction:(CDStruct_1ef3fb1f)arg2 withMetadata:(id)arg3;
- (long long)logSource;
- (void)updateLogEvent:(id)arg1 forInteraction:(CDStruct_1ef3fb1f)arg2 withVisualElements:(id)arg3;
- (id)initWithAccountID:(id)arg1 clearcutLogEventProviderImplDeps:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

