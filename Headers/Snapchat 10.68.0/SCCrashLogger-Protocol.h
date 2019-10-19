//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSException, NSString;

@protocol SCCrashLogger
- (void)setUserId:(NSString *)arg1;
- (void)setObjectValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setBoolValue:(_Bool)arg1 forKey:(NSString *)arg2;
- (_Bool)updateCrashLoopCountAndReportIfNecessary;
- (_Bool)didCrashOnLastLoad;
- (void)leaveBreadcrumb:(NSString *)arg1;
- (void)logErrorAndCaptureCallStack:(NSError *)arg1;
- (void)logHandledException:(NSException *)arg1;
- (void)startServicesWithCrashDelegate:(id)arg1;
@end

