//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMResourceKey, NSMutableArray;

@interface ASMProductProfileCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blocksArray; // @dynamic blocksArray;
@property(readonly, nonatomic) unsigned long long blocksArray_Count; // @dynamic blocksArray_Count;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(retain, nonatomic) ASMResourceKey *target; // @dynamic target;

@end

