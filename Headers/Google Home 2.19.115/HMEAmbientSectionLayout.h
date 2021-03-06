//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESectionLayout-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface HMEAmbientSectionLayout : NSObject <HMESectionLayout>
{
    NSArray *_itemSizes;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) NSArray *itemSizes; // @synthesize itemSizes=_itemSizes;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (void)cacheItemSizesForSection:(unsigned long long)arg1 itemCount:(unsigned long long)arg2 layout:(id)arg3;
- (id)layoutCellsInSection:(long long)arg1 itemCount:(long long)arg2 layout:(id)arg3;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDictionary *decorationKinds;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

