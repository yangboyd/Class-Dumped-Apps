//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDiscoveryGridDataValidationBehavior, NSArray, NSMapTable, NSMutableSet, NSOrderedSet, NSString;
@protocol IGDiscoveryGridDataStoreDelegate;

@interface IGDiscoveryGridDataStore : NSObject
{
    NSOrderedSet *_surplusGridItems;
    IGDiscoveryGridDataValidationBehavior *_validationBehavior;
    NSMutableSet *_identifierRegistry;
    NSMapTable *_identificationMap;
    _Bool _hasMoreAvailable;
    NSString *_maxId;
    NSArray *_items;
    id <IGDiscoveryGridDataStoreDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryGridDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool hasMoreAvailable; // @synthesize hasMoreAvailable=_hasMoreAvailable;
@property(readonly, copy, nonatomic) NSString *maxId; // @synthesize maxId=_maxId;
- (id)_mergeUniformGridItems:(id)arg1 otherArray:(id)arg2 numberOfColumns:(long long)arg3 allowIncompleteTail:(_Bool)arg4;
- (id)_mergeNonUniformGridItems:(id)arg1 otherArray:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEmpty;
- (id)itemsMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)firstItemMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)dataStoreReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)dataStoreByAddingNetworkResponse:(id)arg1;
- (id)initWithValidationBehavior:(id)arg1 networkResponse:(id)arg2;
- (id)initWithValidationBehavior:(id)arg1;
- (id)_initWithMaxId:(id)arg1 hasMoreAvailable:(_Bool)arg2 items:(id)arg3 surplusGridItems:(id)arg4 identifierRegistry:(id)arg5 identificationMap:(id)arg6 validationBehavior:(id)arg7;

@end

