//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaNetURI, NSString;

@interface JavaNetURI_Parser : NSObject
{
    JavaNetURI *this$0_;
    NSString *input_;
    _Bool requireServerAuthority_;
    int ipv6byteCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)scanHexSeqWithInt:(int)arg1 withInt:(int)arg2;
- (int)scanHexPostWithInt:(int)arg1 withInt:(int)arg2;
- (int)parseIPv6ReferenceWithInt:(int)arg1 withInt:(int)arg2;
- (int)parseHostnameWithInt:(int)arg1 withInt:(int)arg2;
- (int)parseIPv4AddressWithInt:(int)arg1 withInt:(int)arg2;
- (int)takeIPv4AddressWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (int)scanIPv4AddressWithInt:(int)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (int)scanByteWithInt:(int)arg1 withInt:(int)arg2;
- (int)parseServerWithInt:(int)arg1 withInt:(int)arg2;
- (int)parseAuthorityWithInt:(int)arg1 withInt:(int)arg2;
- (int)parseHierarchicalWithInt:(int)arg1 withInt:(int)arg2;
- (void)parseWithBoolean:(_Bool)arg1;
- (void)checkCharWithInt:(int)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withNSString:(id)arg4;
- (void)checkCharsWithInt:(int)arg1 withInt:(int)arg2 withLong:(long long)arg3 withLong:(long long)arg4 withNSString:(id)arg5;
- (int)scanWithInt:(int)arg1 withInt:(int)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (int)scanEscapeWithInt:(int)arg1 withInt:(int)arg2 withChar:(unsigned short)arg3;
- (int)scanWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (int)scanWithInt:(int)arg1 withInt:(int)arg2 withChar:(unsigned short)arg3;
- (_Bool)atWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (_Bool)atWithInt:(int)arg1 withInt:(int)arg2 withChar:(unsigned short)arg3;
- (unsigned short)charAtWithInt:(int)arg1;
- (id)substringWithInt:(int)arg1 withInt:(int)arg2;
- (void)failExpectingWithNSString:(id)arg1 withInt:(int)arg2;
- (void)failWithNSString:(id)arg1 withInt:(int)arg2;
- (void)failWithNSString:(id)arg1;
- (id)initWithJavaNetURI:(id)arg1 withNSString:(id)arg2;

@end

