//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JavaUtilConcurrentAtomicAtomicMarkableReference : NSObject
{
    unsigned long long pair_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (_Bool)casPairWithJavaUtilConcurrentAtomicAtomicMarkableReference_Pair:(id)arg1 withJavaUtilConcurrentAtomicAtomicMarkableReference_Pair:(id)arg2;
- (_Bool)attemptMarkWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (void)setWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (_Bool)compareAndSetWithId:(id)arg1 withId:(id)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4;
- (_Bool)weakCompareAndSetWithId:(id)arg1 withId:(id)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4;
- (id)getWithBooleanArray:(id)arg1;
- (_Bool)isMarked;
- (id)getReference;
- (id)initWithId:(id)arg1 withBoolean:(_Bool)arg2;

@end

