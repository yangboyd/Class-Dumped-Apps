//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import "_TtP11FeatureAPIs17CXOCartManagerAPI_-Protocol.h"

@interface _TtC3CXO24CXOOptimisticCartManager : _TtCs12_SwiftObject <_TtP11FeatureAPIs17CXOCartManagerAPI_>
{
    // Error parsing type: , name: cartIDWebService
    // Error parsing type: , name: cartWebService
    // Error parsing type: , name: schedulerTask
    // Error parsing type: , name: offerTrackers
    // Error parsing type: , name: isPerformingUpdate
    // Error parsing type: , name: cartState
    // Error parsing type: , name: debounceMilliseconds
    // Error parsing type: , name: subscribers
}

- (void)unsubscribe:(id)arg1;
- (id)subscribe:(CDUnknownBlockType)arg1;
- (void)refreshState;
- (void)orderPlaced;
- (void)optimisticDecrementWithOfferID:(id)arg1 sender:(id)arg2 actionMetadata:(id)arg3;
- (void)optimisticIncrementWithOfferID:(id)arg1 sender:(id)arg2 actionMetadata:(id)arg3;
- (void)reset;
- (long long)cartItemCountFor:(id)arg1;

@end

