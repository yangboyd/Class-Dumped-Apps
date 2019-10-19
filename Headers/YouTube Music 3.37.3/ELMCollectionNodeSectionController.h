//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGListBindingSectionController.h"

#import "ASSectionController-Protocol.h"
#import "ASSupplementaryNodeSource-Protocol.h"
#import "ELMCollectionNodeSectionDataSourceDelegate-Protocol.h"
#import "IGListBindingSectionControllerDataSource-Protocol.h"
#import "IGListBindingSectionControllerSelectionDelegate-Protocol.h"
#import "IGListSupplementaryViewSource-Protocol.h"

@class ASBatchContext, NSString;
@protocol ELMCollectionNodeSection, ELMCollectionNodeSectionControllerFetchingDelegate, ELMCollectionNodeSectionDataSource, ELMCollectionNodeSectionDataSourceCompatibility, ELMContext;

@interface ELMCollectionNodeSectionController : IGListBindingSectionController <ELMCollectionNodeSectionDataSourceDelegate, IGListSupplementaryViewSource, IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate, ASSupplementaryNodeSource, ASSectionController>
{
    id <ELMCollectionNodeSection> _section;
    id <ELMCollectionNodeSectionDataSource> _dataSource;
    id <ELMCollectionNodeSectionDataSourceCompatibility> _compatibilityDataSource;
    id <ELMContext> _context;
    ASBatchContext *_pendingBatchContext;
    id <ELMCollectionNodeSectionControllerFetchingDelegate> _delegate;
}

@property(nonatomic) __weak id <ELMCollectionNodeSectionControllerFetchingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)completeFetching;
- (void)beginFetchingWithContext:(id)arg1;
- (void)dataSourceDidFail:(id)arg1 withError:(id)arg2;
- (void)dataSourceDidLoadItems:(id)arg1;
- (id)supportedElementKinds;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (void)sectionController:(id)arg1 didSelectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (id)supplementaryViewSource;
- (struct CGSize)sectionController:(id)arg1 sizeForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 cellForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 viewModelsForObject:(id)arg2;
- (CDStruct_42a63532)sizeRangeForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)nodeForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (CDUnknownBlockType)nodeBlockForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (void)beginBatchFetchWithContext:(id)arg1;
- (_Bool)shouldBatchFetch;
- (id)nodeForItemAtIndex:(long long)arg1;
- (CDUnknownBlockType)nodeBlockForItemAtIndex:(long long)arg1;
- (id)initWithSection:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

