//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SQPBFranklinApiTaxEntity;

@interface SQPBFranklinApiSetTaxInformationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinApiTaxEntity *entity; // @dynamic entity;
@property(nonatomic) _Bool hasEntity; // @dynamic hasEntity;
@property(nonatomic) _Bool hasTaxYear; // @dynamic hasTaxYear;
@property(nonatomic) unsigned int taxYear; // @dynamic taxYear;

@end

