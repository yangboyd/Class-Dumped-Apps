//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHRPrivacyScreenMetrics : NSObject
{
}

+ (void)logPrivacyShadeDisengaged;
+ (void)logPrivacyShadeEngaged;
+ (void)logPrivacyScreenTimeoutThresholdChanged:(unsigned long long)arg1;
+ (void)logPrivacyScreenDisabled;
+ (void)logPrivacyScreenEnabledWithTimeoutThreshold:(unsigned long long)arg1;
+ (void)logPrivacyScreenDisengaged;
+ (void)logPrivacyScreenEngaged;

@end

