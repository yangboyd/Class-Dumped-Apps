//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCBoltContentObject;

@interface SCBoltClaimVariantResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltContentObject *contentObject; // @dynamic contentObject;
@property(nonatomic) _Bool hasContentObject; // @dynamic hasContentObject;
@property(copy, nonatomic) NSData *sourceContentObjectId; // @dynamic sourceContentObjectId;

@end

