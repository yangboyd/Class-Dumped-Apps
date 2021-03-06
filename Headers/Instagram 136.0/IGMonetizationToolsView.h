//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/UITableViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableIndexSet, NSString, UITableView;
@protocol IGMonetizationToolsViewDelegate;

@interface IGMonetizationToolsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_headerView;
    UITableView *_tableView;
    NSArray *_mesEligibilityDecisions;
    NSMutableIndexSet *_availableProducts;
    id <IGMonetizationToolsViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_isMonetizationProductSetup:(long long)arg1;
- (_Bool)_isEligibleForMonetizationProduct:(long long)arg1;
- (id)_setupMonetizationLinkCell:(long long)arg1;
- (id)_setupDescriptionCell:(long long)arg1;
- (void)_shoppingCellSelection:(long long)arg1 setupStatus:(_Bool)arg2 eligibilityStatus:(_Bool)arg3;
- (void)_igtvAdsCellSelection:(long long)arg1 setupStatus:(_Bool)arg2 eligibilityStatus:(_Bool)arg3;
- (id)_eligibilityStatusCell:(long long)arg1;
- (id)_learnMoreCell;
- (id)_settingsCell;
- (id)_baseStyledCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 mesEligibilityDecisions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

