//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMResource, NSMutableArray;

@interface ASMGetSignedOutResourceResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalResourcesArray; // @dynamic additionalResourcesArray;
@property(readonly, nonatomic) unsigned long long additionalResourcesArray_Count; // @dynamic additionalResourcesArray_Count;
@property(nonatomic) _Bool hasResource; // @dynamic hasResource;
@property(retain, nonatomic) ASMResource *resource; // @dynamic resource;

@end

