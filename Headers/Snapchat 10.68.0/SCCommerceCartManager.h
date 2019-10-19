//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCCommerceCartMetricsProvider-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSString, SCCommerceLineItemArtifactManager, SCEventListenerAnnouncer, SCRequestManager, SCUserSession;

@interface SCCommerceCartManager : NSObject <NSCoding, SCUserSessionScoped, SCEventAnnouncing, SCCommerceCartMetricsProvider>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSMutableDictionary *_cartArray;
    SCCommerceLineItemArtifactManager *_artifactManager;
    SCRequestManager *_requestManager;
    SCUserSession *_userSession;
}

+ (id)_path;
+ (void)removeSavedState;
+ (id)announcerIdentifier;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SCCommerceLineItemArtifactManager *artifactManager; // @synthesize artifactManager=_artifactManager;
@property(retain, nonatomic) NSMutableDictionary *cartArray; // @synthesize cartArray=_cartArray;
@property(retain, nonatomic) SCEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (void).cxx_destruct;
- (id)lineItemsMetricsDataForStoreId:(id)arg1;
- (void)_announceLineItemArtifactFetchingFailure:(id)arg1;
- (void)_announceLineItemArtifactFetchingSuccess:(id)arg1;
- (void)_handleCheckoutError:(id)arg1 withLineItemIfNeeded:(id)arg2;
- (id)_oldLineItemForLineItem:(id)arg1;
- (void)_replaceFailedLineItem:(id)arg1;
- (void)_updateLineItemWithArtifactsFromUpdatedLineItem:(id)arg1;
- (void)_fetchArtifactsForLineItem:(id)arg1;
- (void)_fetchArtifactsForLineItemIfNeeded:(id)arg1;
- (_Bool)_shouldFetchArtifactsForLineItem:(id)arg1;
- (_Bool)_isArtifactManagerGettingArtifactsForLineItem:(id)arg1;
- (void)_prepareLineItemForCheckoutIfNeeded:(id)arg1;
- (id)_cartArrayForStoreId:(id)arg1;
- (void)_subscribeForNotifications;
- (void)_ensureNonNilObjects;
- (void)handleCheckoutError:(id)arg1 withLineItemsForStoreId:(id)arg2;
- (_Bool)hasLineItemsThatCanHandleCheckoutError:(id)arg1 forStoreId:(id)arg2;
- (void)fetchMissingArtifactsForLineItemsForStoreId:(id)arg1;
- (_Bool)hasLineItemsThatNeedArtifactFetching:(id)arg1;
- (_Bool)isCartFetchingLineItemArtifactsForStoreId:(id)arg1;
- (void)prepareLineItemsForCheckoutForStoreId:(id)arg1;
- (_Bool)canAddAllLineItemsToCheckout:(id)arg1;
- (void)replaceLineItem:(id)arg1;
- (void)removeLineItem:(id)arg1;
- (void)addLineItem:(id)arg1;
- (id)checkoutLineItemsArrayForCheckoutComparisonForStoreId:(id)arg1;
- (id)checkoutLineItemsArrayForStoreId:(id)arg1;
- (id)lineItemsArrayForStoreId:(id)arg1;
- (void)clearCurrentCartWithStoreId:(id)arg1;
- (void)clear;
- (_Bool)saveState;
- (void)encodeWithCoder:(id)arg1;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestManager:(id)arg1 userSession:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

