//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, SPTFreeTierTasteOnboardingArtistPickerOfflineView, SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayout, UICollectionView;

@interface SPTFreeTierTasteOnboardingArtistSearchView : UIView <GLUEStyleable>
{
    SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    SPTFreeTierTasteOnboardingArtistPickerOfflineView *_offlineStateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingArtistPickerOfflineView *offlineStateView; // @synthesize offlineStateView=_offlineStateView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
- (void)glue_applyStyle:(id)arg1;
- (void)activateConstraints;
- (void)setIsOffline:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

