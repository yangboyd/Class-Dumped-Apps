//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray, NSString;

@interface GMSx_PHTPeriodicTaskInfo : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *committedServingVersionArray; // @dynamic committedServingVersionArray;
@property(readonly, nonatomic) unsigned long long committedServingVersionArray_Count; // @dynamic committedServingVersionArray_Count;
@property(nonatomic) long long databaseBytes; // @dynamic databaseBytes;
@property(nonatomic) _Bool hasDatabaseBytes; // @dynamic hasDatabaseBytes;
@property(nonatomic) _Bool hasTaskExecutionMs; // @dynamic hasTaskExecutionMs;
@property(nonatomic) _Bool hasTaskTag; // @dynamic hasTaskTag;
@property(retain, nonatomic) NSMutableArray *notifiedPackagesArray; // @dynamic notifiedPackagesArray;
@property(readonly, nonatomic) unsigned long long notifiedPackagesArray_Count; // @dynamic notifiedPackagesArray_Count;
@property(nonatomic) int taskExecutionMs; // @dynamic taskExecutionMs;
@property(copy, nonatomic) NSString *taskTag; // @dynamic taskTag;

@end

