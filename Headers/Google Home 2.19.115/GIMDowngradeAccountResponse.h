//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMRegistrationChange, GIMResponseHeader;

@interface GIMDowngradeAccountResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasRegistrationChange; // @dynamic hasRegistrationChange;
@property(retain, nonatomic) GIMResponseHeader *header; // @dynamic header;
@property(retain, nonatomic) GIMRegistrationChange *registrationChange; // @dynamic registrationChange;
@property(nonatomic) int result; // @dynamic result;

@end

