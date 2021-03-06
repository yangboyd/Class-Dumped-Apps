//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDMAuctionInfo, BDMEventMiddleware, BDMTargeting, NSArray, NSDictionary, NSHashTable, NSNumber, NSString, STKExpirationTimer;
@protocol BDMResponse;

@interface BDMRequest : NSObject
{
    NSArray *_priceFloors;
    BDMTargeting *_targeting;
    long long _state;
    NSDictionary *_customParameters;
    NSString *_adSpaceId;
    NSNumber *_activeSegmentIdentifier;
    NSNumber *_activePlacement;
    STKExpirationTimer *_expirationTimer;
    BDMEventMiddleware *_middleware;
    long long _placementType;
    NSHashTable *_delegates;
    id <BDMResponse> _response;
}

@property(copy, nonatomic) id <BDMResponse> response; // @synthesize response=_response;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) long long placementType; // @synthesize placementType=_placementType;
@property(retain, nonatomic) BDMEventMiddleware *middleware; // @synthesize middleware=_middleware;
@property(retain, nonatomic) STKExpirationTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(copy, nonatomic) NSNumber *activePlacement; // @synthesize activePlacement=_activePlacement;
@property(copy, nonatomic) NSNumber *activeSegmentIdentifier; // @synthesize activeSegmentIdentifier=_activeSegmentIdentifier;
@property(copy, nonatomic) NSString *adSpaceId; // @synthesize adSpaceId=_adSpaceId;
@property(copy, nonatomic) NSDictionary *customParameters; // @synthesize customParameters=_customParameters;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) BDMTargeting *targeting; // @synthesize targeting=_targeting;
@property(copy, nonatomic) NSArray *priceFloors; // @synthesize priceFloors=_priceFloors;
- (void).cxx_destruct;
- (void)notifyDelegatesOnSuccess;
- (void)notifyDelegatesOnExpire;
- (void)notifyDelegatesOnFail:(id)arg1;
- (void)expire;
- (void)beginExpirationMonitoring;
- (void)_invalidate;
@property(readonly, copy, nonatomic) BDMAuctionInfo *info;
- (void)_performWithRequest:(id)arg1 placementType:(long long)arg2 placementBuilder:(id)arg3;
- (id)init;
- (void)cancelExpirationTimer;
- (void)invalidate;
- (void)performWithRequest:(id)arg1 placementType:(long long)arg2 placementBuilder:(id)arg3;
- (void)registerDelegate:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *eventTrackers;
- (id)displayAdWithError:(id *)arg1;

@end

