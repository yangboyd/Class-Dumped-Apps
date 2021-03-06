//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSString;

@interface GMSx_GMCSCollectionViewModelSection : NSObject
{
    NSMutableArray *_items;
    NSMutableIndexSet *_visuallyRepressedIndexes;
    NSString *_headerTitle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSIndexSet *visuallyRepressedIndexes; // @synthesize visuallyRepressedIndexes=_visuallyRepressedIndexes;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) unsigned long long visibleItemCount;
- (id)description;
- (long long)unresolvedItemIndexForResolvedItemIndex:(long long)arg1;
- (long long)resolvedItemIndexForUnresolvedItemIndex:(long long)arg1;

@end

