//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AFDMutateDataResponse, StatusProto;

@interface AFDMutateDataResponseWithError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AFDMutateDataResponse *dataResponse; // @dynamic dataResponse;
@property(retain, nonatomic) StatusProto *errorStatus; // @dynamic errorStatus;
@property(nonatomic) _Bool hasDataResponse; // @dynamic hasDataResponse;
@property(nonatomic) _Bool hasErrorStatus; // @dynamic hasErrorStatus;

@end

