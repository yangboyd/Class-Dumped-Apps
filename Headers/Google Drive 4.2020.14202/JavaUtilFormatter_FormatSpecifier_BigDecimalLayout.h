//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangStringBuilder;

@interface JavaUtilFormatter_FormatSpecifier_BigDecimalLayout : NSObject
{
    JavaLangStringBuilder *mant_;
    JavaLangStringBuilder *exp_;
    _Bool dot_;
    int scale__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)layoutWithJavaMathBigInteger:(id)arg1 withInt:(int)arg2 withJavaUtilFormatter_BigDecimalLayoutForm:(id)arg3;
- (id)toCharArrayWithJavaLangStringBuilder:(id)arg1;
- (id)exponent;
- (id)mantissa;
- (id)layoutChars;
- (int)scale__;
- (_Bool)hasDot;
- (id)initWithJavaUtilFormatter_FormatSpecifier:(id)arg1 withJavaMathBigInteger:(id)arg2 withInt:(int)arg3 withJavaUtilFormatter_BigDecimalLayoutForm:(id)arg4;

@end

