//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIResponseContext;

@interface YTIAutoOfflineResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *autoOfflineCommandDatasArray; // @dynamic autoOfflineCommandDatasArray;
@property(readonly, nonatomic) unsigned long long autoOfflineCommandDatasArray_Count; // @dynamic autoOfflineCommandDatasArray_Count;
@property(nonatomic) unsigned int checkInSeconds; // @dynamic checkInSeconds;
@property(nonatomic) unsigned int executionWindowLengthSeconds; // @dynamic executionWindowLengthSeconds;
@property(nonatomic) _Bool hasCheckInSeconds; // @dynamic hasCheckInSeconds;
@property(nonatomic) _Bool hasExecutionWindowLengthSeconds; // @dynamic hasExecutionWindowLengthSeconds;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

