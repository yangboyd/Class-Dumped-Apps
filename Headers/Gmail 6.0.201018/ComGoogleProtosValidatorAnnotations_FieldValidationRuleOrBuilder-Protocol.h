//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtosValidatorAnnotations_FieldValidationRule_FieldPresencePredicateCase, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleProtosValidatorAnnotations_FieldValidationRuleOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleProtosValidatorAnnotations_FieldValidationRule_FieldPresencePredicateCase *)getFieldPresencePredicateCase;
- (NSString *)getOneOf;
- (_Bool)hasOneOf;
- (NSString *)getElementPredicateWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getElementPredicateList;
- (int)getElementPredicateCount;
- (NSString *)getPredicateWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getPredicateList;
- (int)getPredicateCount;
- (NSString *)getPresentIff;
- (_Bool)hasPresentIff;
- (NSString *)getIsRequired;
- (_Bool)hasIsRequired;
@end

