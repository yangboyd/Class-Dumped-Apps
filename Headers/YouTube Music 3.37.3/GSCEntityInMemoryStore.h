//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCEntityStore-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GSCEntityInMemoryStore : NSObject <GSCEntityStore>
{
    NSMutableDictionary *_entitiesMap;
}

- (void).cxx_destruct;
- (id)drop;
- (id)close;
- (id)deleteKeys:(id)arg1;
- (id)saveEntitiesMap:(id)arg1;
- (id)loadAllObjects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

