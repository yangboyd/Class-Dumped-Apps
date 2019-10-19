//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface NFUICollectionViewCellManagerViewModelCache : NSObject
{
    NSMapTable *_viewModelCache;
}

@property(retain, nonatomic) NSMapTable *viewModelCache; // @synthesize viewModelCache=_viewModelCache;
- (void).cxx_destruct;
- (void)bustViewModelCacheWithIndexSet:(id)arg1 forKind:(id)arg2;
- (void)bustViewModelCacheWithIndexSet:(id)arg1;
- (void)bustViewModelCache;
- (id)viewModelFromCache:(id)arg1 forKind:(id)arg2;
- (id)viewModelFromCache:(id)arg1;
- (_Bool)removeViewModelFromCache:(id)arg1 forKind:(id)arg2;
- (_Bool)removeViewModelFromCache:(id)arg1;
- (void)removeViewModelsFromCache:(id)arg1;
- (void)removeViewModelsFromCache:(id)arg1 forKind:(id)arg2;
- (void)addViewModelToCache:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3;
- (void)addViewModelToCache:(id)arg1 forIndexPath:(id)arg2;
- (id)init;

@end

