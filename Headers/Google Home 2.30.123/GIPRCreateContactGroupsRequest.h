//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPRGroupExtensionSet, GIPRPeopleContext, GPBFieldMask, NSMutableArray;

@interface GIPRCreateContactGroupsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPRPeopleContext *context; // @dynamic context;
@property(retain, nonatomic) GPBFieldMask *getRequestMask; // @dynamic getRequestMask;
@property(retain, nonatomic) GIPRGroupExtensionSet *groupExtensionSet; // @dynamic groupExtensionSet;
@property(retain, nonatomic) NSMutableArray *groupsArray; // @dynamic groupsArray;
@property(readonly, nonatomic) unsigned long long groupsArray_Count; // @dynamic groupsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasGetRequestMask; // @dynamic hasGetRequestMask;
@property(nonatomic) _Bool hasGroupExtensionSet; // @dynamic hasGroupExtensionSet;

@end

