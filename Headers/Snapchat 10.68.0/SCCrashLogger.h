//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;

@interface SCCrashLogger : NSObject <SCTraceEnabled>
{
}

+ (void)setUserId:(id)arg1;
+ (void)setObjectValue:(id)arg1 forKey:(id)arg2;
+ (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;
+ (_Bool)updateCrashLoopCountAndReportIfNecessary;
+ (_Bool)didCrashOnLastLoad;
+ (void)leaveBreadcrumb:(id)arg1;
+ (void)logErrorAndCaptureCallStack:(id)arg1;
+ (void)logHandledException:(id)arg1;
+ (void)startServicesWithCrashDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

