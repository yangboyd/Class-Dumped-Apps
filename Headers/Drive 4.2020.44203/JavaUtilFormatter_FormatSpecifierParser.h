//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilFormatter_FormatSpecifier, NSString;

@interface JavaUtilFormatter_FormatSpecifierParser : NSObject
{
    NSString *format_;
    int cursor_;
    JavaUtilFormatter_FormatSpecifier *fs_;
    NSString *index_;
    NSString *flags_;
    NSString *width_;
    NSString *precision_;
    NSString *tT_;
    NSString *conv_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getEndIdx;
- (id)getFormatSpecifier;
- (_Bool)isEnd;
- (void)backWithInt:(int)arg1;
- (unsigned short)advance;
- (unsigned short)peek;
- (_Bool)nextIsInt;
- (id)nextInt;
- (id)initWithJavaUtilFormatter:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;

@end

