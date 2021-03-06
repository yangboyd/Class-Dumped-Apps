//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTLoggingApi-Protocol.h"

@class JavaLangThrowable, NSString, XPTXLogLevel;
@protocol XPTLoggerBackend_LoggerBackendApi;

@interface XPTWithThrowableLoggingApi : NSObject <XPTLoggingApi>
{
    id <XPTLoggerBackend_LoggerBackendApi> loggerBackendApi_;
    XPTXLogLevel *level_;
    JavaLangThrowable *throwable_;
}

- (void)dealloc;
- (_Bool)isEnabled;
- (void)logWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (void)logWithNSString:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5;
- (void)logWithNSString:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4;
- (void)logWithNSString:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (void)logWithNSString:(id)arg1 withId:(id)arg2;
- (void)logWithNSString:(id)arg1;
- (id)withCauseWithJavaLangThrowable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

