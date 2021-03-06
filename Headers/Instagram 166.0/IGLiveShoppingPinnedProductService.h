//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGRealtimeServerPayloadHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGSaveStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingCartDataControllerListener-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingProductLaunchTimerDelegate-Protocol.h>

@class FBTimer, IGLiveBroadcastShoppingPinnedProductEvent, IGLiveShoppingPinnedProductViewModel, IGRealtimeRetriableSubscription, IGSessionTracker, IGShoppingCartLogger, IGShoppingInlineVariantSelectionController, IGShoppingProductLaunchTimer, IGUserSession, NSString;
@protocol IGLiveShoppingPinnedProductServiceDelegate;

@interface IGLiveShoppingPinnedProductService : NSObject <IGRealtimeServerPayloadHandler, IGSaveStatusListener, IGShoppingCartDataControllerListener, IGShoppingInlineVariantSelectionControllerDelegate, IGShoppingProductLaunchTimerDelegate>
{
    IGUserSession *_userSession;
    NSString *_broadcastId;
    NSString *_broadcastMediaId;
    NSString *_analyticsModule;
    IGSessionTracker *_shoppingSessionTracker;
    IGRealtimeRetriableSubscription *_realtimeSubscription;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    IGShoppingCartLogger *_bagLogger;
    FBTimer *_recentlyAddedToBagTimer;
    IGShoppingProductLaunchTimer *_dropsLaunchTimer;
    _Bool _isShoppingBagEnabled;
    _Bool _isBroadcastHost;
    IGLiveBroadcastShoppingPinnedProductEvent *_pinnedProductEvent;
    IGLiveShoppingPinnedProductViewModel *_pinnedProductViewModel;
    id <IGLiveShoppingPinnedProductServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveShoppingPinnedProductServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGLiveShoppingPinnedProductViewModel *pinnedProductViewModel; // @synthesize pinnedProductViewModel=_pinnedProductViewModel;
@property(retain, nonatomic) IGLiveBroadcastShoppingPinnedProductEvent *pinnedProductEvent; // @synthesize pinnedProductEvent=_pinnedProductEvent;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)shoppingBagDataController:(id)arg1 didHandleUserError:(id)arg2;
- (void)shoppingBagDataController:(id)arg1 didUpdateState:(id)arg2 forQuery:(id)arg3 previousState:(id)arg4;
- (void)shoppingBagDataController:(id)arg1 didUpdateBagStore:(id)arg2 withChangeset:(id)arg3;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2;
- (void)handlePayload:(id)arg1;
- (void)handlePinnedProductCTAWithConfig:(id)arg1 inViewController:(id)arg2;
- (void)stopRealtimeSubscription;
- (void)startRealtimeSubscription;
- (void)shoppingProductLaunchTimer:(id)arg1 didFireTimerForProductItem:(id)arg2;
- (void)_invalidateRecentlyAddedToBagTimer;
- (void)_handleAddToBagFailureForProductItem:(id)arg1 error:(id)arg2;
- (void)_handleAddToBagSuccessWithProductItem:(id)arg1;
- (void)_addProductToBag:(id)arg1;
- (void)_startAddToBagFlowInViewController:(id)arg1;
- (void)_updateProductSaveStatus:(_Bool)arg1;
- (void)_regenerateViewModel;
- (void)_processEvent:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2 broadcastMediaId:(id)arg3 initialPinnedProductInfo:(id)arg4 shoppingSessionTracker:(id)arg5 analyticsModule:(id)arg6 isBroadcastHost:(_Bool)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

