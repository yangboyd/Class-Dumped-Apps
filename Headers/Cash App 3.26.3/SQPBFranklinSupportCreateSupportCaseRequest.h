//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SQPBFranklinSupportCreateSupportCaseRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contactType; // @dynamic contactType;
@property(copy, nonatomic) NSString *currentNodeToken; // @dynamic currentNodeToken;
@property(copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property(copy, nonatomic) NSString *entityId; // @dynamic entityId;
@property(nonatomic) _Bool hasContactType; // @dynamic hasContactType;
@property(nonatomic) _Bool hasCurrentNodeToken; // @dynamic hasCurrentNodeToken;
@property(nonatomic) _Bool hasEmailAddress; // @dynamic hasEmailAddress;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasTermsAccepted; // @dynamic hasTermsAccepted;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(nonatomic) _Bool termsAccepted; // @dynamic termsAccepted;

@end

