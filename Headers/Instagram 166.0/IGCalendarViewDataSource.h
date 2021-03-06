//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString;
@protocol IGCalendarViewCellBinder;

@interface IGCalendarViewDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSMutableArray *_data;
    NSMutableDictionary *_datePositionMap;
    NSMutableDictionary *_entriesByDayMap;
    NSDateFormatter *_monthFormat;
    id <IGCalendarViewCellBinder> _cellBinder;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCalendarViewCellBinder> cellBinder; // @synthesize cellBinder=_cellBinder;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_dateKeyWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)_dateKeyWithDate:(id)arg1;
- (void)_buildMonth:(id)arg1;
- (id)calendarEntriesForIndexPath:(id)arg1;
- (id)indexPathForDate:(id)arg1;
- (void)setStartDate:(id)arg1 endDate:(id)arg2 calendarEntries:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

