//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBUhuraServiceEmailMessage;

@interface SQPBUhuraServiceCaseUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *body; // @dynamic body;
@property(copy, nonatomic) NSString *caseId; // @dynamic caseId;
@property(retain, nonatomic) SQPBUhuraServiceEmailMessage *emailMessage; // @dynamic emailMessage;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasCaseId; // @dynamic hasCaseId;
@property(nonatomic) _Bool hasEmailMessage; // @dynamic hasEmailMessage;

@end

