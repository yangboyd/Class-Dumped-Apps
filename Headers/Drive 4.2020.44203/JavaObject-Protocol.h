//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IOSClass;

@protocol JavaObject <NSObject>
- (void)java_finalize;
- (void)java_waitWithLong:(long long)arg1 withInt:(int)arg2;
- (void)java_waitWithLong:(long long)arg1;
- (void)java_wait;
- (void)java_notifyAll;
- (void)java_notify;
- (IOSClass *)java_getClass;
- (id)java_clone;
@end

