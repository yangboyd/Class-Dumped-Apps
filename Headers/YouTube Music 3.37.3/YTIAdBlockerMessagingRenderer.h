//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIAdBlockerMessagingSupportedDatas;

@interface YTIAdBlockerMessagingRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMessageParameters; // @dynamic hasMessageParameters;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIAdBlockerMessagingSupportedDatas *messageParameters; // @dynamic messageParameters;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

