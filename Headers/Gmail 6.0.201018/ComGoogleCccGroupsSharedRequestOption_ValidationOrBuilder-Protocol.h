//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCccGroupsSharedRequestOption_SemanticType, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleCccGroupsSharedRequestOption_ValidationOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getResourcePatternsWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getResourcePatternsList;
- (int)getResourcePatternsCount;
- (int)getMaxLength;
- (_Bool)hasMaxLength;
- (int)getMinLength;
- (_Bool)hasMinLength;
- (double)getMaxValue;
- (_Bool)hasMaxValue;
- (double)getMinValue;
- (_Bool)hasMinValue;
- (int)getMaxElements;
- (_Bool)hasMaxElements;
- (int)getMinElements;
- (_Bool)hasMinElements;
- (_Bool)getRequired;
- (_Bool)hasRequired;
- (ComGoogleCccGroupsSharedRequestOption_SemanticType *)getType;
- (_Bool)hasType;
@end

