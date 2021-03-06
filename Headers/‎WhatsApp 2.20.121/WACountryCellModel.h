//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, WACountryInfo;

@interface WACountryCellModel : NSObject
{
    NSString *_countryName;
    NSSet *_tokens;
    NSString *_cc;
    WACountryInfo *_countryInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WACountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
@property(readonly, nonatomic) NSString *cc; // @synthesize cc=_cc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCountryCellModel:(id)arg1;
@property(readonly, nonatomic) _Bool isOtherCountry;
@property(readonly, nonatomic) NSSet *searchTokens;
@property(readonly, nonatomic) NSString *localizedName;
- (id)initWithCountryName:(id)arg1;
- (id)initWithCountryInfo:(id)arg1;

@end

