//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaTextFormat_Field;

@interface JavaTextFieldPosition : NSObject
{
    int field_;
    int endIndex_;
    int beginIndex_;
    JavaTextFormat_Field *attribute_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (_Bool)matchesFieldWithJavaTextFormat_Field:(id)arg1 withInt:(int)arg2;
- (_Bool)matchesFieldWithJavaTextFormat_Field:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getFieldDelegate;
- (void)setEndIndexWithInt:(int)arg1;
- (void)setBeginIndexWithInt:(int)arg1;
- (int)getEndIndex;
- (int)getBeginIndex;
- (int)getField;
- (id)getFieldAttribute;
- (id)initWithJavaTextFormat_Field:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaTextFormat_Field:(id)arg1;
- (id)initWithInt:(int)arg1;

@end

