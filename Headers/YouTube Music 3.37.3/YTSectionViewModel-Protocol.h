//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol YTSectionViewModelObserverProtocol;

@protocol YTSectionViewModel <NSObject>
@property(readonly, nonatomic) NSArray *entries;
- (void)commitStagedChanges;
- (void)enumerateObjectsUsingBlock:(void (^)(id, unsigned long long, _Bool *))arg1;
- (unsigned long long)indexForEntry:(id)arg1;
- (id)entryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfEntries;
- (void)addSectionViewModelObserver:(id <YTSectionViewModelObserverProtocol>)arg1;
@end

