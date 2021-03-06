//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SQPBUhuraServiceCaseSearchResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *accountId; // @dynamic accountId;
@property(copy, nonatomic) NSString *caseId; // @dynamic caseId;
@property(nonatomic) int channel; // @dynamic channel;
@property(nonatomic) unsigned int createdAt; // @dynamic createdAt;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) _Bool hasAccountId; // @dynamic hasAccountId;
@property(nonatomic) _Bool hasCaseId; // @dynamic hasCaseId;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasCreatedAt; // @dynamic hasCreatedAt;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasMerchantToken; // @dynamic hasMerchantToken;
@property(nonatomic) _Bool hasOrigin; // @dynamic hasOrigin;
@property(nonatomic) _Bool hasPlatform; // @dynamic hasPlatform;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasSubject; // @dynamic hasSubject;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasUnitToken; // @dynamic hasUnitToken;
@property(nonatomic) _Bool hasUpdatedAt; // @dynamic hasUpdatedAt;
@property(copy, nonatomic) NSString *merchantToken; // @dynamic merchantToken;
@property(nonatomic) int origin; // @dynamic origin;
@property(nonatomic) int platform; // @dynamic platform;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *subject; // @dynamic subject;
@property(copy, nonatomic) NSString *unitToken; // @dynamic unitToken;
@property(nonatomic) unsigned int updatedAt; // @dynamic updatedAt;

@end

