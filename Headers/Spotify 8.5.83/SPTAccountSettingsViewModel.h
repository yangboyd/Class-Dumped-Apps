//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountProductInformationObserver-Protocol.h"

@class NSArray, NSString, SPTAccountPremiumInfoTableViewCell, SPTAccountPrepaidHelper, SPTAccountSettingsCellFactory, SPTSettingsTableViewCell;
@protocol SPTAccountProductInformationController, SPTAccountSettingsViewModelDelegate, SPTLinkDispatcher, SPTPageRegistry;

@interface SPTAccountSettingsViewModel : NSObject <SPTAccountProductInformationObserver>
{
    NSArray *_cells;
    NSString *_headerText;
    id <SPTAccountSettingsViewModelDelegate> _delegate;
    id <SPTPageRegistry> _pageRegistry;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAccountProductInformationController> _productInformationController;
    SPTAccountPrepaidHelper *_prepaidHelper;
    SPTAccountSettingsCellFactory *_cellFactory;
    SPTSettingsTableViewCell *_usernameCell;
    SPTSettingsTableViewCell *_subscriptionCell;
    SPTSettingsTableViewCell *_daysLeftCell;
    SPTSettingsTableViewCell *_readMoreCell;
    SPTAccountPremiumInfoTableViewCell *_premiumInfoCell;
    SPTAccountPremiumInfoTableViewCell *_premiumOnlyMarketInfoCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTAccountPremiumInfoTableViewCell *premiumOnlyMarketInfoCell; // @synthesize premiumOnlyMarketInfoCell=_premiumOnlyMarketInfoCell;
@property(retain, nonatomic) SPTAccountPremiumInfoTableViewCell *premiumInfoCell; // @synthesize premiumInfoCell=_premiumInfoCell;
@property(retain, nonatomic) SPTSettingsTableViewCell *readMoreCell; // @synthesize readMoreCell=_readMoreCell;
@property(retain, nonatomic) SPTSettingsTableViewCell *daysLeftCell; // @synthesize daysLeftCell=_daysLeftCell;
@property(retain, nonatomic) SPTSettingsTableViewCell *subscriptionCell; // @synthesize subscriptionCell=_subscriptionCell;
@property(retain, nonatomic) SPTSettingsTableViewCell *usernameCell; // @synthesize usernameCell=_usernameCell;
@property(readonly, nonatomic) SPTAccountSettingsCellFactory *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(readonly, nonatomic) SPTAccountPrepaidHelper *prepaidHelper; // @synthesize prepaidHelper=_prepaidHelper;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
@property(nonatomic) __weak id <SPTAccountSettingsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain) NSArray *cells; // @synthesize cells=_cells;
- (void)dealloc;
- (void)currentProductDidChangeForProductInformationController:(id)arg1;
- (void)availableProductDidChangeForProductInformationController:(id)arg1;
- (id)daysLeftDetailText;
- (id)subscriptionCellDetailText;
- (id)userNameCellDetailText;
- (_Bool)hasDaysLeftCell;
- (_Bool)hasPremiumInfoCells;
- (_Bool)hasSubscriptionCell;
- (void)showInterstitialView;
- (double)heightForRow:(long long)arg1 originalHeight:(double)arg2;
- (void)didSelectRow:(long long)arg1;
- (void)removeObserver;
- (void)addObserver;
- (void)updateCells;
- (void)setupCells;
- (id)initWithProductInformationController:(id)arg1 pageRegistry:(id)arg2 linkDispatcher:(id)arg3 prepaidHelper:(id)arg4 cellFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

