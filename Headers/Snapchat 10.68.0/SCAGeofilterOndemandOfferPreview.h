//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAGeofilterOndemandEventBase.h"

@interface SCAGeofilterOndemandOfferPreview : SCAGeofilterOndemandEventBase
{
}

- (void)setViewportSouthWest:(id)arg1;
- (void)setViewportSouthEast:(id)arg1;
- (void)setViewportNorthWest:(id)arg1;
- (void)setViewportNorthEast:(id)arg1;
- (void)setScheduledStartTime:(id)arg1;
- (void)setScheduledEndTime:(id)arg1;
- (void)setProductId:(id)arg1;
- (void)setOfferSequenceId:(long long)arg1;
- (void)setOfferId:(id)arg1;
- (void)setOfferDiscountCodeValue:(double)arg1;
- (void)setOfferDiscountCodeType:(id)arg1;
- (void)setOfferDiscountCode:(id)arg1;
- (void)setOfferCurrency:(id)arg1;
- (void)setOfferCountry:(id)arg1;
- (void)setOfferAreaSquareFeet:(double)arg1;
- (void)setOfferAmountValue:(double)arg1;
- (void)setOdgRulesVersion:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

