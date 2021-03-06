//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGPartialModalSheetListener-Protocol.h>
#import <InstagramAppCoreFramework/IGResultsFilterViewControllerDelegate-Protocol.h>

@class IGPartialModalSheetViewController, IGResultsFilterModelsMetadata, IGSessionTracker, IGShoppingFilterServiceManager, IGShoppingNavigationAnalyticsContext, IGUser, IGUserSession, NSDictionary, NSString;
@protocol IGShoppingProfileShopFilterManagerDelegate;

@interface IGShoppingProfileShopFilterManager : NSObject <IGResultsFilterViewControllerDelegate, IGPartialModalSheetListener>
{
    IGResultsFilterModelsMetadata *_shoppingFiltersMetadata;
    IGUserSession *_userSession;
    IGUser *_merchant;
    NSDictionary *_filterAttributes;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGShoppingFilterServiceManager *_filterServiceManager;
    IGPartialModalSheetViewController *_shoppingFilterPartialModalSheetVC;
    id <IGShoppingProfileShopFilterManagerDelegate> _delegate;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
- (id)_filterLoggingExtrasWithFrom:(id)arg1 filterConfigs:(id)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)resultsFilterViewControllerShouldPartiallyCollapse:(id)arg1;
- (void)resultsFilterViewController:(id)arg1 didFocusOnSearchBar:(id)arg2;
- (void)resultsFilterViewControllerDidApplyFilters:(id)arg1 selectedFiltersMetadata:(id)arg2;
- (_Bool)resultsFilterViewControllerIsInFullyDisplayedState;
- (_Bool)resultsFilterViewController:(id)arg1 hasUnappliedFiltersMetaData:(id)arg2;
- (double)resultsFilterSearchBarTopInset:(id)arg1;
- (void)presentFilterHalfSheetWithResultsFilterMetadata:(id)arg1 filterAttributes:(id)arg2 navigationController:(id)arg3 from:(id)arg4;
- (id)initWithUserSession:(id)arg1 merchant:(id)arg2 navigationAnalyticsContext:(id)arg3 delegate:(id)arg4 shoppingSessionTracker:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

