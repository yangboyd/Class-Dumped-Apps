//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAdsBaseCosmosBridge;

@interface SPTMobileOverlayEventLogger : NSObject
{
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void)logTrackingEventForAd:(id)arg1 withData:(id)arg2;
- (void)logErrorEventForAd:(id)arg1;
- (void)logImpressionForAd:(id)arg1;
- (id)initWithCosmosBridge:(id)arg1;

@end

