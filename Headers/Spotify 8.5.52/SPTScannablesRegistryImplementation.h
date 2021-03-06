//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesRegistry-Protocol.h"

@class NSMutableArray, NSString;

@interface SPTScannablesRegistryImplementation : NSObject <SPTScannablesRegistry>
{
    NSMutableArray *_registrations;
}

@property(readonly, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void).cxx_destruct;
- (_Bool)executeActionForURL:(id)arg1;
- (void)unregisterActionForRegistrant:(id)arg1;
- (id)registerAction:(CDUnknownBlockType)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

