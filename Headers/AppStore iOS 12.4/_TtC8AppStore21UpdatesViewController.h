//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

#import "_TtP11AppStoreKit20UpdatesPresenterView_-Protocol.h"

@interface _TtC8AppStore21UpdatesViewController : _TtC8AppStore29StoreCollectionViewController <_TtP11AppStoreKit20UpdatesPresenterView_>
{
    // Error parsing type: , name: objectGraph
    // Error parsing type: , name: presenter
    // Error parsing type: , name: artworkLoader
    // Error parsing type: , name: navigationDivider
    // Error parsing type: , name: updatesCollectionViewLayout
    // Error parsing type: , name: updatesCollectionViewDataSource
    // Error parsing type: , name: updatesCollectionViewDelegate
    // Error parsing type: , name: refreshControl
    // Error parsing type: , name: showingWhatsNewOverlay
    // Error parsing type: , name: flowPreviewing
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)refreshUpdateAllButton;
- (void)fetchUpdates;
- (void)showWhatsNewTextAt:(id)arg1;
- (void)showWhatsNewOverlayFor:(id)arg1;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)performWithDataSourceUpdates:(CDUnknownBlockType)arg1 batchUpdates:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadData;
- (void)showWithUpdateError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)setUpdateBadgeCount:(id)arg1;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

