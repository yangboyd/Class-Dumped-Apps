//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPPolicyNetworkFetcher-Protocol.h"

@class NSMapTable;
@protocol DXPPolicyNetworkFetcher, OS_dispatch_queue;

@interface DXPPolicyAdaptiveFetcher : NSObject <DXPPolicyNetworkFetcher>
{
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
    id <DXPPolicyNetworkFetcher> _networkFetcher;
    NSMapTable *_completionsForIdentity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *completionsForIdentity; // @synthesize completionsForIdentity=_completionsForIdentity;
@property(readonly, nonatomic) id <DXPPolicyNetworkFetcher> networkFetcher; // @synthesize networkFetcher=_networkFetcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // @synthesize serialWorkQueue=_serialWorkQueue;
- (void)fetchPolicyForIdentity:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithNetworkFetcher:(id)arg1;

@end

