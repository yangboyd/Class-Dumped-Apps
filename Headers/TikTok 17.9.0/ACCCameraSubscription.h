//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCameraSubscription-Protocol.h"

@class NSHashTable, NSString;

@interface ACCCameraSubscription : NSObject <ACCCameraSubscription>
{
    NSHashTable *_subscribers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *subscribers; // @synthesize subscribers=_subscribers;
- (void)make:(id)arg1 of:(id)arg2;
- (void)make:(id)arg1;
- (void)performEventSelector:(SEL)arg1 realPerformer:(CDUnknownBlockType)arg2;
- (void)addSubscriber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

