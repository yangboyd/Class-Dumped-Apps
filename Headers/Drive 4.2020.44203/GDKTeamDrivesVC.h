//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GDKFlexibleQuantumCollectionVC.h>

#import "GDKTeamDrivesControllerDelegate-Protocol.h"
#import "GDKViewControllerFABActionHandling-Protocol.h"
#import "GDKViewControllerFABPreferring-Protocol.h"

@class GDKTeamDrivesController, GDKTeamDrivesParams, NSString;
@protocol GDKTeamDriveVCProducing, GDKTeamDrivesVCCreateDelegate, GDKTeamDrivesVCDelegate, GDKTeamDrivesVCOverflowButtonDelegate;

@interface GDKTeamDrivesVC : GDKFlexibleQuantumCollectionVC <GDKTeamDrivesControllerDelegate, GDKViewControllerFABActionHandling, GDKViewControllerFABPreferring>
{
    id <GDKTeamDrivesVCDelegate> _delegate;
    id <GDKTeamDrivesVCOverflowButtonDelegate> _overflowButtonDelegate;
    id <GDKTeamDrivesVCCreateDelegate> _createDelegate;
    GDKTeamDrivesParams *_params;
    GDKTeamDrivesController *_controller;
    id <GDKTeamDriveVCProducing> _viewControllerProducer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GDKTeamDriveVCProducing> viewControllerProducer; // @synthesize viewControllerProducer=_viewControllerProducer;
@property(readonly, nonatomic) GDKTeamDrivesController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) GDKTeamDrivesParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <GDKTeamDrivesVCCreateDelegate> createDelegate; // @synthesize createDelegate=_createDelegate;
@property(nonatomic) __weak id <GDKTeamDrivesVCOverflowButtonDelegate> overflowButtonDelegate; // @synthesize overflowButtonDelegate=_overflowButtonDelegate;
@property(nonatomic) __weak id <GDKTeamDrivesVCDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)teamDrivesControllerShouldHideOverFlowButtons:(id)arg1;
- (void)teamDrivesController:(id)arg1 didRemoveTeamDrives:(id)arg2;
- (void)teamDrivesController:(id)arg1 didSelectTeamDriveWithParams:(id)arg2;
- (void)teamDrivesController:(id)arg1 didTapOverflowButton:(id)arg2 forTeamDrive:(id)arg3;
- (void)teamDrivesController:(id)arg1 didUpdateViewModel:(id)arg2;
- (void)performFABAction;
- (_Bool)prefersFABHidden;
- (void)scrollViewDidScroll:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateTeamDrivesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithParams:(id)arg1 controller:(id)arg2 viewControllerProducer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

