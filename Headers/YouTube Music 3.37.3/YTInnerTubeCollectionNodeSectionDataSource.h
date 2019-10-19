//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMCollectionNodeSectionDataSource-Protocol.h"
#import "ELMCollectionNodeSectionDataSourceCompatibility-Protocol.h"

@class GIMMe, NSString;
@protocol ELMCollectionNodeSectionDataSourceDelegate, ELMContext, YTInnerTubeSectionRenderer, YTSectionControllerProtocol;

@interface YTInnerTubeCollectionNodeSectionDataSource : NSObject <ELMCollectionNodeSectionDataSource, ELMCollectionNodeSectionDataSourceCompatibility>
{
    id <YTInnerTubeSectionRenderer> _section;
    id <YTSectionControllerProtocol> _controller;
    id <ELMContext> _context;
    _Bool _didLoadModel;
    id <ELMCollectionNodeSectionDataSourceDelegate> _delegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <ELMCollectionNodeSectionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canProvideCellNodeForItem:(id)arg1;
- (id)nodeForSupplementaryItemOfKind:(id)arg1 atIndex:(long long)arg2;
- (_Bool)canProvideCellNodeForSupplementaryItemOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)nodeForItemAtIndex:(long long)arg1;
- (_Bool)canProvideCellNodeForItemAtIndex:(long long)arg1;
- (void)fetchMoreItems;
- (_Bool)canFetchMoreItems;
- (_Bool)hasSupplementaryItemOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supplementaryItemOfKind:(id)arg1;
- (id)elementForItem:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithSection:(id)arg1 controller:(id)arg2 service:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

