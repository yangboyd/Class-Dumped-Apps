//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXChannelObserver-Protocol.h"

@class NSHashTable, NSString;

@interface MDXChannelObserverProxy : NSObject <MDXChannelObserver>
{
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)channel:(id)arg1 didEncounterError:(id)arg2;
- (void)channel:(id)arg1 didReceiveMessage:(id)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

