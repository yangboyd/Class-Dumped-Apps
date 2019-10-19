//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIIapData, YTIInnerTubeContext;

@interface YTIYPCHandleIapRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientLocationContext; // @dynamic clientLocationContext;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *deviceTransactionId; // @dynamic deviceTransactionId;
@property(nonatomic) _Bool hasClientLocationContext; // @dynamic hasClientLocationContext;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasDeviceTransactionId; // @dynamic hasDeviceTransactionId;
@property(nonatomic) _Bool hasIapData; // @dynamic hasIapData;
@property(nonatomic) _Bool hasOfferParams; // @dynamic hasOfferParams;
@property(nonatomic) _Bool hasSystemInitiatedRequest; // @dynamic hasSystemInitiatedRequest;
@property(retain, nonatomic) YTIIapData *iapData; // @dynamic iapData;
@property(copy, nonatomic) NSString *offerParams; // @dynamic offerParams;
@property(nonatomic) _Bool systemInitiatedRequest; // @dynamic systemInitiatedRequest;

@end

