//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, ORCH2DateRange;

@interface ORCH2DateInputValidation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2DateRange *dateRange; // @dynamic dateRange;
@property(copy, nonatomic) NSString *errorText; // @dynamic errorText;
@property(nonatomic) _Bool hasDateRange; // @dynamic hasDateRange;
@property(nonatomic) _Bool hasErrorText; // @dynamic hasErrorText;
@property(nonatomic) _Bool hasValidationId; // @dynamic hasValidationId;
@property(nonatomic) int validationId; // @dynamic validationId;

@end

