//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPProtectionController-Protocol.h"

@class DXPPolicy, NSArray;
@protocol OS_dispatch_queue;

@interface DXPProtectionController : NSObject <DXPProtectionController>
{
    DXPPolicy *_defaultPolicy;
    NSArray *_protectionLibraries;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // @synthesize serialWorkQueue=_serialWorkQueue;
@property(readonly, nonatomic) NSArray *protectionLibraries; // @synthesize protectionLibraries=_protectionLibraries;
@property(readonly, nonatomic) DXPPolicy *defaultPolicy; // @synthesize defaultPolicy=_defaultPolicy;
- (void).cxx_destruct;
- (void)broadcastPoliciesForState:(id)arg1;
- (void)libraryStateDidUpdate:(id)arg1 oldState:(id)arg2;
- (id)initWithDefaultPolicy:(id)arg1 protectionLibraries:(id)arg2;

@end

