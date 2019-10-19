//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSectionFastAccessIndexing-Protocol.h"

@class NSArray, NSString;
@protocol SCSendToScrollViewCoordinating;

@interface SCSendToSectionFastAccessIndexerForNonFriendsSection : NSObject <SCCollectionViewSectionFastAccessIndexing>
{
    NSArray *_containerCellViewModels;
    NSString *_indexIdentifier;
    NSString *_queryKey;
    _Bool _shouldEmitNotFoundIfEmpty;
    id <SCSendToScrollViewCoordinating> _delegate;
}

- (void).cxx_destruct;
- (id)indexForItemWithQueryKey:(id)arg1;
- (void)setContainerCellViewModels:(id)arg1;
- (id)initWithIndexIdentifier:(id)arg1 withQueryKey:(id)arg2 shouldEmitNotFoundIfEmpty:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

