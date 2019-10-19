//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiResponseHeader, GPBEnumArray;

@interface GFMCanAcceptSupervisionNominationResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool canAcceptSupervisionNomination; // @dynamic canAcceptSupervisionNomination;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasCanAcceptSupervisionNomination; // @dynamic hasCanAcceptSupervisionNomination;
@property(nonatomic) _Bool hasRequiredMinimumAge; // @dynamic hasRequiredMinimumAge;
@property(nonatomic) _Bool hasSupervisionType; // @dynamic hasSupervisionType;
@property(nonatomic) int requiredMinimumAge; // @dynamic requiredMinimumAge;
@property(nonatomic) int supervisionType; // @dynamic supervisionType;
@property(retain, nonatomic) GPBEnumArray *unmetPreconditionArray; // @dynamic unmetPreconditionArray;
@property(readonly, nonatomic) unsigned long long unmetPreconditionArray_Count; // @dynamic unmetPreconditionArray_Count;

@end

