//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSString, SetRegexToValue;

@interface RpcreplayFieldOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int annotationOneofOneOfCase; // @dynamic annotationOneofOneOfCase;
@property(nonatomic) _Bool clearField; // @dynamic clearField;
@property(nonatomic) _Bool reorderRepeated; // @dynamic reorderRepeated;
@property(copy, nonatomic) NSString *rewriteIdentifier; // @dynamic rewriteIdentifier;
@property(nonatomic) int rewriteTime; // @dynamic rewriteTime;
@property(retain, nonatomic) SetRegexToValue *setRegexToValue; // @dynamic setRegexToValue;
@property(copy, nonatomic) NSString *setToValue; // @dynamic setToValue;

@end

