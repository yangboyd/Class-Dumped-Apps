//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangThreadLocal;

@interface SunNioCsThreadLocalCoders_Cache : NSObject
{
    JavaLangThreadLocal *cache_;
    int size_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)forNameWithId:(id)arg1;
- (_Bool)hasNameWithId:(id)arg1 withId:(id)arg2;
- (void)moveToFrontWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (id)createWithId:(id)arg1;
- (id)initWithInt:(int)arg1;

@end

