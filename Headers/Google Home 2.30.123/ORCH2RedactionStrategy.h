//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ORCH2RedactionStrategy : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMaskingCharacter; // @dynamic hasMaskingCharacter;
@property(nonatomic) _Bool hasRedactionScheme; // @dynamic hasRedactionScheme;
@property(copy, nonatomic) NSString *maskingCharacter; // @dynamic maskingCharacter;
@property(nonatomic) int redactionScheme; // @dynamic redactionScheme;

@end

