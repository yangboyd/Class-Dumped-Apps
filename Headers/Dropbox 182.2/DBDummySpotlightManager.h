//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "DBSpotlightIndexingManager-Protocol.h"

@class NSString;

@interface DBDummySpotlightManager : NSObject <DBSpotlightIndexingManager, DBLinkableStateObserverProtocol>
{
}

- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeIndexedItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeItemFromIndex:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateIndexedItem:(id)arg1;
- (void)indexItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)indexItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)indexItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

