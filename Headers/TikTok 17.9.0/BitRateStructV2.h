//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStructV2;

@interface BitRateStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int bitRate; // @dynamic bitRate;
@property(copy, nonatomic) NSString *gearName; // @dynamic gearName;
@property(nonatomic) _Bool hasBitRate; // @dynamic hasBitRate;
@property(nonatomic) _Bool hasGearName; // @dynamic hasGearName;
@property(nonatomic) _Bool hasIsBytevc1; // @dynamic hasIsBytevc1;
@property(nonatomic) _Bool hasPlayAddr; // @dynamic hasPlayAddr;
@property(nonatomic) _Bool hasPlayAddrBytevc1; // @dynamic hasPlayAddrBytevc1;
@property(nonatomic) _Bool hasQualityType; // @dynamic hasQualityType;
@property(nonatomic) int isBytevc1; // @dynamic isBytevc1;
@property(retain, nonatomic) UrlStructV2 *playAddr; // @dynamic playAddr;
@property(retain, nonatomic) UrlStructV2 *playAddrBytevc1; // @dynamic playAddrBytevc1;
@property(nonatomic) int qualityType; // @dynamic qualityType;

@end

