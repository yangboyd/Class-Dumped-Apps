//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ASTAPIPlayMediaOpResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int castResult; // @dynamic castResult;
@property(nonatomic) long long executionTimeMs; // @dynamic executionTimeMs;
@property(copy, nonatomic) NSString *haErrorCodeStr; // @dynamic haErrorCodeStr;
@property(nonatomic) _Bool hasCastResult; // @dynamic hasCastResult;
@property(nonatomic) _Bool hasExecutionTimeMs; // @dynamic hasExecutionTimeMs;
@property(nonatomic) _Bool hasHaErrorCodeStr; // @dynamic hasHaErrorCodeStr;
@property(nonatomic) _Bool hasRealizedTtsString; // @dynamic hasRealizedTtsString;
@property(copy, nonatomic) NSString *realizedTtsString; // @dynamic realizedTtsString;

@end

