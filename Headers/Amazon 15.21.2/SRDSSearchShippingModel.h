//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, SRDSSearchPrimeShippingStatusModel, SRDSSearchShippingStatusModel;
@protocol Optional, SRDSSearchShippingStatusModel><Optional, SRDSSearchStyledTextModel><Optional;

@interface SRDSSearchShippingModel : JSONModel
{
    NSArray<SRDSSearchStyledTextModel><Optional> *_priceLabel;
    NSArray<SRDSSearchStyledTextModel><Optional> *_sss;
    NSArray<SRDSSearchShippingStatusModel><Optional> *_additionalStatus;
    NSNumber<Optional> *_preOrder;
    NSArray<SRDSSearchStyledTextModel><Optional> *_message;
    SRDSSearchPrimeShippingStatusModel<Optional> *_prime;
    SRDSSearchShippingStatusModel<Optional> *_fba;
    SRDSSearchShippingStatusModel<Optional> *_cod;
    SRDSSearchShippingStatusModel<Optional> *_addOn;
}

@property(retain, nonatomic) SRDSSearchShippingStatusModel<Optional> *addOn; // @synthesize addOn=_addOn;
@property(retain, nonatomic) SRDSSearchShippingStatusModel<Optional> *cod; // @synthesize cod=_cod;
@property(retain, nonatomic) SRDSSearchShippingStatusModel<Optional> *fba; // @synthesize fba=_fba;
@property(retain, nonatomic) SRDSSearchPrimeShippingStatusModel<Optional> *prime; // @synthesize prime=_prime;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber<Optional> *preOrder; // @synthesize preOrder=_preOrder;
@property(retain, nonatomic) NSArray<SRDSSearchShippingStatusModel><Optional> *additionalStatus; // @synthesize additionalStatus=_additionalStatus;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *sss; // @synthesize sss=_sss;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;

@end

