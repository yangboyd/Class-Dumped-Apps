//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseViewController.h"

#import "SCOnDemandGeofilterTableViewTextFieldCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCOnDemandGeofilterPillButton, SCOnDemandGeofilterSettingsHeaderView, SCTransparentParentView, SOJUUnlockablesOndemandLineItem, UITableView;

@interface SCOnDemandGeofilterGeostoryViewController : SCOnDemandGeofilterBaseViewController <SCOnDemandGeofilterTableViewTextFieldCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    SCTransparentParentView *_containerView;
    SCOnDemandGeofilterSettingsHeaderView *_headerView;
    SCOnDemandGeofilterPillButton *_continueButton;
    SOJUUnlockablesOndemandLineItem *_onDemandLineItem;
    UITableView *_tableView;
    NSArray *_viewModels;
    long long _previousViewController;
}

- (void).cxx_destruct;
- (void)cellTextFieldContainsText:(_Bool)arg1;
- (void)_updateTableViewData;
- (void)_updateLineItemWithGeostoryName:(id)arg1;
- (id)_generateViewModelBasedOnDataModel:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_updateSessionOnDemandGeofilterLineItem;
- (void)_didPressContinueButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didTapBackButton;
- (void)leftSwipeSucceed;
- (double)_tableViewHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutMasonryViews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_addKeyboardObservers;
- (void)viewDidLoad;
- (id)initWithGeofilterSession:(id)arg1 fromViewController:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

