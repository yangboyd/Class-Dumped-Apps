//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ELMPBListValue, ELMPBStruct, NSData, NSString;

@interface ELMPBValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool boolValue; // @dynamic boolValue;
@property(copy, nonatomic) NSData *bytesValue; // @dynamic bytesValue;
@property(nonatomic) float floatValue; // @dynamic floatValue;
@property(nonatomic) int intValue; // @dynamic intValue;
@property(readonly, nonatomic) int kindOneOfCase; // @dynamic kindOneOfCase;
@property(retain, nonatomic) ELMPBListValue *listValue; // @dynamic listValue;
@property(nonatomic) int nullValue; // @dynamic nullValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(retain, nonatomic) ELMPBStruct *structValue; // @dynamic structValue;
@property(nonatomic) unsigned int uintValue; // @dynamic uintValue;

@end

