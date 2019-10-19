//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTAutocompleteCollectionViewController.h"

#import "QTMCollectionViewModelDelegate-Protocol.h"
#import "SKTContactsDataManagerDelegate-Protocol.h"
#import "SKTSelectedContactsViewControllerDelegate-Protocol.h"

@class NSString, SKTChipsMoreButtonViewController, SKTIndexScrollbar, SKTMaximizedCollectionViewModel, UIView;
@protocol SKTMaximizedViewControllerOptions;

@interface SKTMaximizedViewController : SKTAutocompleteCollectionViewController <SKTContactsDataManagerDelegate, SKTSelectedContactsViewControllerDelegate, QTMCollectionViewModelDelegate>
{
    _Bool _scrollOnDisplayDeviceContacts;
    _Bool _viewDidAppear;
    SKTIndexScrollbar *_scrollbar;
    UIView *_headerCell;
    double _headerShadowElevation;
    SKTChipsMoreButtonViewController *_moreButtonViewController;
}

@property(retain, nonatomic) SKTChipsMoreButtonViewController *moreButtonViewController; // @synthesize moreButtonViewController=_moreButtonViewController;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) double headerShadowElevation; // @synthesize headerShadowElevation=_headerShadowElevation;
@property(retain, nonatomic) UIView *headerCell; // @synthesize headerCell=_headerCell;
@property(nonatomic) _Bool scrollOnDisplayDeviceContacts; // @synthesize scrollOnDisplayDeviceContacts=_scrollOnDisplayDeviceContacts;
@property(retain, nonatomic) SKTIndexScrollbar *scrollbar; // @synthesize scrollbar=_scrollbar;
- (void).cxx_destruct;
- (void)resetHeaderCellZPositionForIOS11;
- (void)voiceOverStatusChanged;
- (id)sendTargetForContact:(id)arg1;
- (_Bool)shouldAskForPermissionsOnAppearance;
- (void)showDeviceContactsRowTappedAtIndexPath:(id)arg1;
- (void)updateHeaderShadow;
- (void)scrollCollectionViewToDeviceContacts;
- (void)showAllSuggestionsAnimated:(_Bool)arg1;
- (void)loadAndAppendDeviceContacts;
- (void)showContacts:(id)arg1 forQueryState:(long long)arg2 queryText:(id)arg3 resultIndex:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)scrollToTop;
- (void)loadCollectionView;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 innerBackgroundColorForHeaderAtSection:(long long)arg2;
- (id)collectionView:(id)arg1 innerBackgroundColorAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 dividerStyleForElementKind:(unsigned long long)arg2 atIndexPath:(id)arg3;
- (void)finalizeContentScrolling;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)preferredSelectionMode;
- (void)selectedContactsVC:(id)arg1 didChangeToMaximumHeight:(double)arg2 fromMaximumHeight:(double)arg3;
- (void)selectedContactsVC:(id)arg1 didUpdateInputState:(long long)arg2 fromInputState:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)modalPresentationStyle;
@property(readonly, nonatomic) NSString *currentIndexCharacterForScrollbarTile;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadLayout;
- (void)loadModel;
- (id)initWithDisplayOptions:(id)arg1 contactsDataManager:(id)arg2 analyticsProvider:(id)arg3 selectedContactsVC:(id)arg4;
- (id)initWithDisplayOptions:(id)arg1 contactsDataManager:(id)arg2 analyticsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <SKTMaximizedViewControllerOptions> displayOptions; // @dynamic displayOptions;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKTMaximizedCollectionViewModel *model; // @dynamic model;
@property(readonly) Class superclass;

@end

