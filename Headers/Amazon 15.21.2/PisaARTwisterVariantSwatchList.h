//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PisaJsonObject.h"

@class NSArray, NSString;

@interface PisaARTwisterVariantSwatchList : PisaJsonObject
{
    NSString *_dimensionSymbol;
    NSArray *_displayStrings;
    NSArray *_swatchImageURLs;
}

@property(readonly, nonatomic) NSArray *swatchImageURLs; // @synthesize swatchImageURLs=_swatchImageURLs;
@property(readonly, nonatomic) NSArray *displayStrings; // @synthesize displayStrings=_displayStrings;
@property(readonly, nonatomic) NSString *dimensionSymbol; // @synthesize dimensionSymbol=_dimensionSymbol;
- (void).cxx_destruct;
- (id)initFromJsonDictionary:(id)arg1;

@end

