//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTICommand, YTIFormattedString;

@interface YTIValidationRuleset : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsOptional; // @dynamic hasIsOptional;
@property(nonatomic) _Bool hasRequiredErrorCommand; // @dynamic hasRequiredErrorCommand;
@property(nonatomic) _Bool hasRequiredErrorText; // @dynamic hasRequiredErrorText;
@property(nonatomic) _Bool isOptional; // @dynamic isOptional;
@property(retain, nonatomic) YTICommand *requiredErrorCommand; // @dynamic requiredErrorCommand;
@property(retain, nonatomic) YTIFormattedString *requiredErrorText; // @dynamic requiredErrorText;
@property(retain, nonatomic) NSMutableArray *rulesArray; // @dynamic rulesArray;
@property(readonly, nonatomic) unsigned long long rulesArray_Count; // @dynamic rulesArray_Count;

@end

