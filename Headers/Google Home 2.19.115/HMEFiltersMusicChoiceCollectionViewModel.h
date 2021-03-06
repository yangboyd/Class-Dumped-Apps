//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupMakeChoiceCollectionViewModel.h"

#import "HMESetupCollectionViewModel-Protocol.h"

@class GHCVideoFilter, GPBEnumArray, HMESetupCollectionLayoutViewController, NSArray, NSMutableDictionary, NSString, UICollectionView;

@interface HMEFiltersMusicChoiceCollectionViewModel : HMESetupMakeChoiceCollectionViewModel <HMESetupCollectionViewModel>
{
    _Bool _allowOnlyNonExplicitChoiceIsSelected;
    NSArray *_musicProviders;
    GHCVideoFilter *_videoFilterProto;
    NSMutableDictionary *_indexRowForProviderValue;
}

+ (id)indexPathFromMusicFilterChoice:(long long)arg1;
@property(nonatomic) _Bool allowOnlyNonExplicitChoiceIsSelected; // @synthesize allowOnlyNonExplicitChoiceIsSelected=_allowOnlyNonExplicitChoiceIsSelected;
@property(retain, nonatomic) NSMutableDictionary *indexRowForProviderValue; // @synthesize indexRowForProviderValue=_indexRowForProviderValue;
@property(readonly, nonatomic) GHCVideoFilter *videoFilterProto; // @synthesize videoFilterProto=_videoFilterProto;
@property(readonly, nonatomic) NSArray *musicProviders; // @synthesize musicProviders=_musicProviders;
- (void).cxx_destruct;
- (_Bool)shouldShowDisclaimer;
- (id)buildSectionedChoices;
- (id)buildMusicProviderChoices;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 sectionLayout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 sectionLayout:(id)arg2 heightForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(readonly, nonatomic) GPBEnumArray *selectedMusicProviders;
@property(readonly, nonatomic) long long selectedMusicFilterChoice;
- (void)addSelectedIndexPathsForMusicProvidersProto:(id)arg1;
- (void)setSelectedIndexPaths:(id)arg1;
- (void)registerCellsOnCollectionView:(id)arg1;
- (id)initWithMusicProviders:(id)arg1 videoFilterProto:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UICollectionView *collectionView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak HMESetupCollectionLayoutViewController *parent;
@property(readonly) Class superclass;

@end

