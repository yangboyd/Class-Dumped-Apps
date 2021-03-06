//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMutationRequestProcessing-Protocol.h>

@class IGDirectCache, IGDirectMutationNetworker, IGDirectThreadUpdatePayload, NSString;

@interface IGDirectThreadOutgoingUpdateMutationProcessor : NSObject <IGDirectMutationRequestProcessing>
{
    IGDirectThreadUpdatePayload *_outgoingUpdate;
    IGDirectCache *_directCache;
    IGDirectMutationNetworker *_mutationNetworker;
}

- (void).cxx_destruct;
- (void)_transitionDirectCacheToSucceededStateIfNecessaryWithResultHandler:(id)arg1;
- (void)handleMutationStateChange:(id)arg1;
- (void)executeWithResultHandler:(id)arg1 accessoryPackage:(id)arg2;
- (id)initWithOutgoingUpdate:(id)arg1 directCache:(id)arg2 mutationNetworker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

