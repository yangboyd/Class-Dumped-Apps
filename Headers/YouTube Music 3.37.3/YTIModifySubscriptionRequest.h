//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIModifySubscriptionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *endpointParams; // @dynamic endpointParams;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEndpointParams; // @dynamic hasEndpointParams;
@property(retain, nonatomic) NSMutableArray *subscriptionsArray; // @dynamic subscriptionsArray;
@property(readonly, nonatomic) unsigned long long subscriptionsArray_Count; // @dynamic subscriptionsArray_Count;

@end

