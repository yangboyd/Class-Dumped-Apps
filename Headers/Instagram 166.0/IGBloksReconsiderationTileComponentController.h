//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import <InstagramAppCoreFramework/IGShoppingReconsiderationDataControllerListener-Protocol.h>

@class IGBloksReconsiderationTileView, IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGShoppingProductCheckerDefaultLoggingProvider, IGShoppingProductCheckerViewModel, IGShoppingReconsiderationDataController, IGUser, IGUserSession, NSString, UINavigationController;

@interface IGBloksReconsiderationTileComponentController : BKBloksComponentController <IGShoppingReconsiderationDataControllerListener>
{
    UINavigationController *_navigationController;
    IGUserSession *_userSession;
    IGShoppingReconsiderationDataController *_dataController;
    IGBloksReconsiderationTileView *_view;
    IGShoppingProductCheckerViewModel *_viewModel;
    IGUser *_merchant;
    IGShoppingProductCheckerDefaultLoggingProvider *_loggingProvider;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
- (void)shoppingReconsiderationDataController:(id)arg1 sourceProvider:(id)arg2 didUpdateFetchState:(id)arg3;
- (void)shoppingReconsiderationDataController:(id)arg1 sourceProvider:(id)arg2 didUpdateProductItems:(id)arg3 withUpdateType:(id)arg4;
- (void)_tapped;
- (void)_addTapListenerToView:(id)arg1;
- (void)_configureView;
- (void)_parseModel;
- (void)componentDidAcquireView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

