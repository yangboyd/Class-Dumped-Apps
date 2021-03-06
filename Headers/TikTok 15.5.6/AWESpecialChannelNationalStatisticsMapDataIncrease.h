//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWESpecialChannelNationalStatisticsMapDataIncrease : AWEBaseApiModel
{
    long long _confirmedIncrease;
    long long _suspectedIncrease;
    long long _curesIncrease;
    long long _deathsIncrease;
    NSString *_confirmedIncreasePrefix;
    NSString *_suspectedIncreasePrefix;
    NSString *_curesIncreasePrefix;
    NSString *_deathsIncreasePrefix;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *deathsIncreasePrefix; // @synthesize deathsIncreasePrefix=_deathsIncreasePrefix;
@property(copy, nonatomic) NSString *curesIncreasePrefix; // @synthesize curesIncreasePrefix=_curesIncreasePrefix;
@property(copy, nonatomic) NSString *suspectedIncreasePrefix; // @synthesize suspectedIncreasePrefix=_suspectedIncreasePrefix;
@property(copy, nonatomic) NSString *confirmedIncreasePrefix; // @synthesize confirmedIncreasePrefix=_confirmedIncreasePrefix;
@property(nonatomic) long long deathsIncrease; // @synthesize deathsIncrease=_deathsIncrease;
@property(nonatomic) long long curesIncrease; // @synthesize curesIncrease=_curesIncrease;
@property(nonatomic) long long suspectedIncrease; // @synthesize suspectedIncrease=_suspectedIncrease;
@property(nonatomic) long long confirmedIncrease; // @synthesize confirmedIncrease=_confirmedIncrease;
- (void).cxx_destruct;

@end

