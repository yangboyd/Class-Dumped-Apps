//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSIndexSet;

@protocol HMEModelChangeDelegate <NSObject>
- (void)reloadSections:(NSIndexSet *)arg1;
- (void)insertSections:(NSIndexSet *)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)deleteSections:(NSIndexSet *)arg1;
- (void)reloadItemsAtIndexPaths:(NSArray *)arg1;
- (void)insertItemsAtIndexPaths:(NSArray *)arg1;
- (void)moveItemAtIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (void)deleteItemsAtIndexPaths:(NSArray *)arg1;
@end

