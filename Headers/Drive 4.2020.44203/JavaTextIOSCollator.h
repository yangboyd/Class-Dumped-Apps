//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaTextCollator.h"

@interface JavaTextIOSCollator : JavaTextCollator
{
    id nsLocale_;
    int strength_;
    int decomposition_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (_Bool)nativeLocalesEqualWithId:(id)arg1 withId:(id)arg2;
- (void)dealloc;
- (id)getCollationKeyWithNSString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStrengthWithInt:(int)arg1;
- (void)setDecompositionWithInt:(int)arg1;
- (int)getStrength;
- (int)getDecomposition;
- (int)compareWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)initNativeLocaleWithJavaUtilLocale:(id)arg1;
- (id)initWithJavaUtilLocale:(id)arg1;

@end

