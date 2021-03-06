//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTSideNavManager.h"

#import "GBTTabletSideViewCollapsedViewDataSource-Protocol.h"
#import "GBTTabletSideViewCollapsedViewDelegate-Protocol.h"
#import "GBTTabletSideViewControllerDelegate-Protocol.h"

@class GBTTabletSideViewController, NSString, UIView;

@interface GBTTabletSideNavManager : GBTSideNavManager <GBTTabletSideViewControllerDelegate, GBTTabletSideViewCollapsedViewDataSource, GBTTabletSideViewCollapsedViewDelegate>
{
    UIView *_siblingView;
    GBTTabletSideViewController *_sideViewController;
    _Bool _isIPadCompactUI;
}

- (void).cxx_destruct;
- (void)layoutViews;
- (id)collapsedModeItemIndexToIndexPath:(long long)arg1;
- (int)numberOfLabelSectionsInCollapsedView;
- (void)collapsedView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)collapsedView:(id)arg1 isItemSelectedAtIndex:(long long)arg2;
- (id)collapsedView:(id)arg1 itemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCollapsedView:(id)arg1;
- (void)tabletSideViewControllerDidChangeTheme:(id)arg1;
- (void)tabletSideViewController:(id)arg1 willTransitionToSize:(struct CGSize)arg2;
- (void)reloadData;
- (id)tabletSideView;
- (id)tabletSideViewController;
- (void)reattachSideView;
- (void)setMenuButton:(id)arg1 animated:(_Bool)arg2;
- (_Bool)managesMenuButton;
- (id)initWithNavigationService:(id)arg1 siblingView:(id)arg2 isCurrentlyIPadCompactUI:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

