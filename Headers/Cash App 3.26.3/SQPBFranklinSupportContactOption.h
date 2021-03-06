//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SQPBFranklinSupportContactOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool available; // @dynamic available;
@property(copy, nonatomic) NSString *contactHeader; // @dynamic contactHeader;
@property(copy, nonatomic) NSString *contactTerms; // @dynamic contactTerms;
@property(copy, nonatomic) NSString *contactText; // @dynamic contactText;
@property(nonatomic) int contactType; // @dynamic contactType;
@property(nonatomic) _Bool hasAvailable; // @dynamic hasAvailable;
@property(nonatomic) _Bool hasContactHeader; // @dynamic hasContactHeader;
@property(nonatomic) _Bool hasContactTerms; // @dynamic hasContactTerms;
@property(nonatomic) _Bool hasContactText; // @dynamic hasContactText;
@property(nonatomic) _Bool hasContactType; // @dynamic hasContactType;
@property(nonatomic) _Bool hasIncludeIssueDescription; // @dynamic hasIncludeIssueDescription;
@property(nonatomic) _Bool hasSummaryHeader; // @dynamic hasSummaryHeader;
@property(nonatomic) _Bool hasSummaryText; // @dynamic hasSummaryText;
@property(nonatomic) _Bool hasTimeEstimate; // @dynamic hasTimeEstimate;
@property(nonatomic) _Bool includeIssueDescription; // @dynamic includeIssueDescription;
@property(copy, nonatomic) NSString *summaryHeader; // @dynamic summaryHeader;
@property(copy, nonatomic) NSString *summaryText; // @dynamic summaryText;
@property(copy, nonatomic) NSString *timeEstimate; // @dynamic timeEstimate;

@end

