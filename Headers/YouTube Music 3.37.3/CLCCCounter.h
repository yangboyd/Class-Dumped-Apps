//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface CLCCCounter : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bucketArray; // @dynamic bucketArray;
@property(readonly, nonatomic) unsigned long long bucketArray_Count; // @dynamic bucketArray_Count;
@property(readonly, nonatomic) int counterIdOneOfCase; // @dynamic counterIdOneOfCase;
@property(nonatomic) long long ephemeralHashedName; // @dynamic ephemeralHashedName;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) unsigned long long hashedName; // @dynamic hashedName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

