//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ICINGMddApiCallStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int apiExecutionFinishLatencyMs; // @dynamic apiExecutionFinishLatencyMs;
@property(nonatomic) int apiExecutionStartLatencyMs; // @dynamic apiExecutionStartLatencyMs;
@property(nonatomic) int apiName; // @dynamic apiName;
@property(copy, nonatomic) NSString *callingPackage; // @dynamic callingPackage;
@property(nonatomic) _Bool hasApiExecutionFinishLatencyMs; // @dynamic hasApiExecutionFinishLatencyMs;
@property(nonatomic) _Bool hasApiExecutionStartLatencyMs; // @dynamic hasApiExecutionStartLatencyMs;
@property(nonatomic) _Bool hasApiName; // @dynamic hasApiName;
@property(nonatomic) _Bool hasCallingPackage; // @dynamic hasCallingPackage;
@property(nonatomic) _Bool hasResultStatus; // @dynamic hasResultStatus;
@property(nonatomic) int resultStatus; // @dynamic resultStatus;

@end

