//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMCollectionNodeSection-Protocol.h"
#import "ELMCollectionNodeSectionDataSource-Protocol.h"

@class NSString;
@protocol ELMCollectionNodeSectionDataSourceDelegate;

@interface YTInnerTubeCollectionNodeStatusSection : NSObject <ELMCollectionNodeSectionDataSource, ELMCollectionNodeSection>
{
    id <ELMCollectionNodeSectionDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <ELMCollectionNodeSectionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)statusElement;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)fetchMoreItems;
- (_Bool)canFetchMoreItems;
- (_Bool)hasSupplementaryItemOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supplementaryItemOfKind:(id)arg1;
- (id)elementForItem:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)dataSource;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

