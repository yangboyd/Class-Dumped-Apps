//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray;

@interface GADAMove : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addedParentsArray; // @dynamic addedParentsArray;
@property(readonly, nonatomic) unsigned long long addedParentsArray_Count; // @dynamic addedParentsArray_Count;
@property(nonatomic) _Bool fromOwnershipTransfer; // @dynamic fromOwnershipTransfer;
@property(retain, nonatomic) NSMutableArray *removedParentsArray; // @dynamic removedParentsArray;
@property(readonly, nonatomic) unsigned long long removedParentsArray_Count; // @dynamic removedParentsArray_Count;
@property(retain, nonatomic) NSMutableArray *reparentsArray; // @dynamic reparentsArray;
@property(readonly, nonatomic) unsigned long long reparentsArray_Count; // @dynamic reparentsArray_Count;

@end

