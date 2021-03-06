//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilLinkedHashMap;

@interface LibcoreUtilBasicLruCache : NSObject
{
    JavaUtilLinkedHashMap *map_;
    int maxSize_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)evictAll;
- (id)snapshot;
- (id)createWithId:(id)arg1;
- (void)entryEvictedWithId:(id)arg1 withId:(id)arg2;
- (void)trimToSizeWithInt:(int)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (id)initWithInt:(int)arg1;

@end

