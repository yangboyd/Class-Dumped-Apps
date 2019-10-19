//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASNodeController.h"

#import "ASCollectionDelegate-Protocol.h"
#import "ELMCollectionNodeDataSourceDelegate-Protocol.h"
#import "ELMCollectionNodeSectionControllerFetchingDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class ASBatchContext, ASCollectionNode, ELMCollectionNodeSectionController, IGListAdapter, NSString, UICollectionViewLayout;
@protocol ELMCollectionNodeDataSource, ELMContext;

@interface ELMCollectionNodeController : ASNodeController <ASCollectionDelegate, IGListAdapterDataSource, ELMCollectionNodeSectionControllerFetchingDelegate, ELMCollectionNodeDataSourceDelegate>
{
    id <ELMCollectionNodeDataSource> _dataSource;
    id <ELMContext> _context;
    UICollectionViewLayout *_layout;
    ASBatchContext *_pendingBatchContext;
    ELMCollectionNodeSectionController *_sectionControllerForBatchFetching;
    unsigned long long _state;
    _Bool _isPendingManualRefresh;
    ASCollectionNode *_collectionNode;
    IGListAdapter *_listAdapter;
}

@property(nonatomic) _Bool isPendingManualRefresh; // @synthesize isPendingManualRefresh=_isPendingManualRefresh;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
- (void).cxx_destruct;
- (void)handleResponseWithState:(unsigned long long)arg1;
- (void)performRefresh;
- (void)updateState:(unsigned long long)arg1 performUpdate:(_Bool)arg2;
- (void)configureCollectionNode;
- (id)sectionControllerForBatchFetching;
- (void)enterLoadingState;
- (void)completeFetching;
- (void)beginFetchingWithContext:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didRequestReload;
- (void)fetchingDidFailWithSectionController:(id)arg1;
- (void)fetchingDidSucceedWithSectionController:(id)arg1;
- (void)fetchingDidBeginWithSectionController:(id)arg1;
- (void)dataSourceDidFail:(id)arg1 withError:(id)arg2;
- (void)dataSourceDidLoadSections:(id)arg1;
- (void)collectionNode:(id)arg1 willBeginBatchFetchWithContext:(id)arg2;
- (_Bool)shouldBatchFetchForCollectionNode:(id)arg1;
- (void)loadNode;
- (id)initWithDataSource:(id)arg1 context:(id)arg2 layout:(id)arg3;
- (id)initWithDataSource:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

