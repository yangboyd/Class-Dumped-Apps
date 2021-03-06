//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NICollectionViewModelDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface NICollectionViewCellFactory : NSObject <NICollectionViewModelDelegate>
{
    NSMutableDictionary *_objectToCellMap;
    NSMutableSet *_registeredObjectClasses;
}

+ (Class)collectionViewCellClassForItemAtIndexPath:(id)arg1 model:(id)arg2;
+ (id)collectionViewModel:(id)arg1 cellForCollectionView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4;
+ (id)cellWithNib:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 object:(id)arg4;
+ (id)cellWithClass:(Class)arg1 collectionView:(id)arg2 indexPath:(id)arg3 object:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableSet *registeredObjectClasses; // @synthesize registeredObjectClasses=_registeredObjectClasses;
@property(copy, nonatomic) NSMutableDictionary *objectToCellMap; // @synthesize objectToCellMap=_objectToCellMap;
- (Class)collectionViewCellClassForItemAtIndexPath:(id)arg1 model:(id)arg2;
- (void)mapObjectClass:(Class)arg1 toCellClass:(Class)arg2;
- (id)collectionViewModel:(id)arg1 cellForCollectionView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4;
- (Class)collectionViewCellClassFromObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

