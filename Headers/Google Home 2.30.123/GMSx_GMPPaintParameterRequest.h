//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMPNativeClientProperties, NSString;

@interface GMSx_GMPPaintParameterRequest : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *customPaintHostURL; // @dynamic customPaintHostURL;
@property(nonatomic) _Bool hasCustomPaintHostURL; // @dynamic hasCustomPaintHostURL;
@property(nonatomic) _Bool hasNativeClientProperties; // @dynamic hasNativeClientProperties;
@property(nonatomic) _Bool hasPreferredEpoch; // @dynamic hasPreferredEpoch;
@property(retain, nonatomic) GMSx_GMPNativeClientProperties *nativeClientProperties; // @dynamic nativeClientProperties;
@property(nonatomic) long long preferredEpoch; // @dynamic preferredEpoch;

@end

