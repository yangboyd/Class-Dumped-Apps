//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ComGoogleCommonUtilConcurrentStriped : NSObject
{
}

+ (void)initialize;
+ (id)lazyWeakReadWriteLockWithInt:(int)arg1;
+ (id)readWriteLockWithInt:(int)arg1;
+ (id)lazyWeakSemaphoreWithInt:(int)arg1 withInt:(int)arg2;
+ (id)semaphoreWithInt:(int)arg1 withInt:(int)arg2;
+ (id)lazyWeakLockWithInt:(int)arg1;
+ (id)lockWithInt:(int)arg1;
+ (id)customWithInt:(int)arg1 withComGoogleCommonBaseSupplier:(id)arg2;
- (id)bulkGetWithJavaLangIterable:(id)arg1;

@end

