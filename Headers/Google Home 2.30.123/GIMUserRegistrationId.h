//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMId, NSData;

@interface GIMUserRegistrationId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(copy, nonatomic) NSData *registrationId; // @dynamic registrationId;
@property(retain, nonatomic) GIMId *userId; // @dynamic userId;

@end

