//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMRequestHeader, NSMutableArray;

@interface GIMLookupRegisteredRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) GIMRequestHeader *header; // @dynamic header;
@property(nonatomic) _Bool omitRequesterApp; // @dynamic omitRequesterApp;
@property(retain, nonatomic) NSMutableArray *usersArray; // @dynamic usersArray;
@property(readonly, nonatomic) unsigned long long usersArray_Count; // @dynamic usersArray_Count;

@end

