//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OrgApacheJamesMime4jStreamRawFieldParser : NSObject
{
}

+ (void)initialize;
- (void)copyQuotedContentWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2 withJavaLangStringBuilder:(id)arg3;
- (void)copyUnquotedContentWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2 withJavaUtilBitSet:(id)arg3 withJavaLangStringBuilder:(id)arg4;
- (void)copyContentWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2 withJavaUtilBitSet:(id)arg3 withJavaLangStringBuilder:(id)arg4;
- (void)skipAllWhiteSpaceWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2;
- (void)skipCommentWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2;
- (void)skipWhiteSpaceWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2;
- (id)parseValueWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2 withJavaUtilBitSet:(id)arg3;
- (id)parseTokenWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2 withJavaUtilBitSet:(id)arg3;
- (id)parseParameterWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2;
- (id)parseParametersWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2;
- (id)parseRawBodyWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1 withOrgApacheJamesMime4jStreamParserCursor:(id)arg2;
- (id)parseRawBodyWithOrgApacheJamesMime4jStreamRawField:(id)arg1;
- (id)parseFieldWithOrgApacheJamesMime4jUtilByteSequence:(id)arg1;

@end

