//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString;

@interface ASTUITaskCategory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBInt32Array *taskIdsArray; // @dynamic taskIdsArray;
@property(readonly, nonatomic) unsigned long long taskIdsArray_Count; // @dynamic taskIdsArray_Count;

@end

