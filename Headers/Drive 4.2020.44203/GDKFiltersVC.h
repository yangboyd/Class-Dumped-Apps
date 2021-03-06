//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GDKFlexibleQuantumCollectionVC.h>

#import "GDKAutoSizablePresenter-Protocol.h"

@class GDKContentViewSizer, GDKTheme, NSArray, NSString;

@interface GDKFiltersVC : GDKFlexibleQuantumCollectionVC <GDKAutoSizablePresenter>
{
    GDKContentViewSizer *_contentViewSizer;
    NSArray *_cvos;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) NSArray *cvos; // @synthesize cvos=_cvos;
@property(readonly, nonatomic) GDKContentViewSizer *contentViewSizer; // @synthesize contentViewSizer=_contentViewSizer;
- (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)applyTheme:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHeaderTitleInset;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCVOs:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

