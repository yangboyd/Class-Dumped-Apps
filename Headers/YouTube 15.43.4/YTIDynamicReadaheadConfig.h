//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface YTIDynamicReadaheadConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMaxReadAheadMediaTimeMs; // @dynamic hasMaxReadAheadMediaTimeMs;
@property(nonatomic) _Bool hasMaxReadAheadWatermarkMarginMs; // @dynamic hasMaxReadAheadWatermarkMarginMs;
@property(nonatomic) _Bool hasMinReadAheadMediaTimeMs; // @dynamic hasMinReadAheadMediaTimeMs;
@property(nonatomic) _Bool hasMinReadAheadWatermarkMarginMs; // @dynamic hasMinReadAheadWatermarkMarginMs;
@property(nonatomic) _Bool hasReadAheadGrowthRateMs; // @dynamic hasReadAheadGrowthRateMs;
@property(nonatomic) _Bool hasReadAheadWatermarkMarginRatio; // @dynamic hasReadAheadWatermarkMarginRatio;
@property(nonatomic) int maxReadAheadMediaTimeMs; // @dynamic maxReadAheadMediaTimeMs;
@property(nonatomic) int maxReadAheadWatermarkMarginMs; // @dynamic maxReadAheadWatermarkMarginMs;
@property(nonatomic) int minReadAheadMediaTimeMs; // @dynamic minReadAheadMediaTimeMs;
@property(nonatomic) int minReadAheadWatermarkMarginMs; // @dynamic minReadAheadWatermarkMarginMs;
@property(nonatomic) int readAheadGrowthRateMs; // @dynamic readAheadGrowthRateMs;
@property(nonatomic) float readAheadWatermarkMarginRatio; // @dynamic readAheadWatermarkMarginRatio;

@end

