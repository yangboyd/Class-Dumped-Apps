//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GTPPBirdsongConfig_DnsOptions_PreresolvedAddress : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTargetAddress; // @dynamic hasTargetAddress;
@property(retain, nonatomic) NSMutableArray *ipv4ResolvedAddressArray; // @dynamic ipv4ResolvedAddressArray;
@property(readonly, nonatomic) unsigned long long ipv4ResolvedAddressArray_Count; // @dynamic ipv4ResolvedAddressArray_Count;
@property(retain, nonatomic) NSMutableArray *ipv6ResolvedAddressArray; // @dynamic ipv6ResolvedAddressArray;
@property(readonly, nonatomic) unsigned long long ipv6ResolvedAddressArray_Count; // @dynamic ipv6ResolvedAddressArray_Count;
@property(copy, nonatomic) NSString *targetAddress; // @dynamic targetAddress;

@end

