//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSData;

@interface DCPStartPlayback : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *externalIp; // @dynamic externalIp;
@property(nonatomic) unsigned int externalPort; // @dynamic externalPort;
@property(nonatomic) _Bool hasExternalIp; // @dynamic hasExternalIp;
@property(nonatomic) _Bool hasExternalPort; // @dynamic hasExternalPort;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(nonatomic) _Bool hasProfileNotFoundAction; // @dynamic hasProfileNotFoundAction;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(retain, nonatomic) GPBEnumArray *otherProfilesArray; // @dynamic otherProfilesArray;
@property(readonly, nonatomic) unsigned long long otherProfilesArray_Count; // @dynamic otherProfilesArray_Count;
@property(nonatomic) int profile; // @dynamic profile;
@property(nonatomic) int profileNotFoundAction; // @dynamic profileNotFoundAction;
@property(nonatomic) unsigned int sessionId; // @dynamic sessionId;
@property(nonatomic) double startTime; // @dynamic startTime;

@end

