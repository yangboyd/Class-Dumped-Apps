//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIMobileDataPlanApiConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long carrierId; // @dynamic carrierId;
@property(retain, nonatomic) NSMutableArray *cpidEndpointUrlsArray; // @dynamic cpidEndpointUrlsArray;
@property(readonly, nonatomic) unsigned long long cpidEndpointUrlsArray_Count; // @dynamic cpidEndpointUrlsArray_Count;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool getDataPlanStatusByClient; // @dynamic getDataPlanStatusByClient;
@property(nonatomic) _Bool hasCarrierId; // @dynamic hasCarrierId;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasGetDataPlanStatusByClient; // @dynamic hasGetDataPlanStatusByClient;

@end

