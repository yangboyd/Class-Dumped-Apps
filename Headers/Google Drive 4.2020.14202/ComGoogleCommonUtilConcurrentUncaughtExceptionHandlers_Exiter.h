//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangThread_UncaughtExceptionHandler-Protocol.h"

@class JavaLangRuntime, NSString;

@interface ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter : NSObject <JavaLangThread_UncaughtExceptionHandler>
{
    JavaLangRuntime *runtime_;
}

+ (void)initialize;
- (void)dealloc;
- (void)uncaughtExceptionWithJavaLangThread:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)initWithJavaLangRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

