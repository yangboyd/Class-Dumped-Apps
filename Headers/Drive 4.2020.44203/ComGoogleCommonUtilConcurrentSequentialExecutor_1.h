//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangRunnable-Protocol.h"

@class NSString;
@protocol JavaLangRunnable;

@interface ComGoogleCommonUtilConcurrentSequentialExecutor_1 : NSObject <JavaLangRunnable>
{
    id <JavaLangRunnable> val$task_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

