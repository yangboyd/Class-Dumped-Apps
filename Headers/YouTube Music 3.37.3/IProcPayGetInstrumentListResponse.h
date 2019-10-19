//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, OrchApiError;

@interface IProcPayGetInstrumentListResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *commonToken; // @dynamic commonToken;
@property(copy, nonatomic) NSString *customerLegalCountry; // @dynamic customerLegalCountry;
@property(retain, nonatomic) OrchApiError *error; // @dynamic error;
@property(retain, nonatomic) NSMutableArray *existingInstrumentArray; // @dynamic existingInstrumentArray;
@property(readonly, nonatomic) unsigned long long existingInstrumentArray_Count; // @dynamic existingInstrumentArray_Count;
@property(nonatomic) _Bool hasCommonToken; // @dynamic hasCommonToken;
@property(nonatomic) _Bool hasCustomerLegalCountry; // @dynamic hasCustomerLegalCountry;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(retain, nonatomic) NSMutableArray *newInstrumentArray; // @dynamic newInstrumentArray;
@property(readonly, nonatomic) unsigned long long newInstrumentArray_Count; // @dynamic newInstrumentArray_Count;

@end

