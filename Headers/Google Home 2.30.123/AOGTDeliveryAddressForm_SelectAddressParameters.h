//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface AOGTDeliveryAddressForm_SelectAddressParameters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *addAddressDescription; // @dynamic addAddressDescription;
@property(retain, nonatomic) NSMutableArray *addressArray; // @dynamic addressArray;
@property(readonly, nonatomic) unsigned long long addressArray_Count; // @dynamic addressArray_Count;
@property(copy, nonatomic) NSData *addressCollectionParameters; // @dynamic addressCollectionParameters;

@end

