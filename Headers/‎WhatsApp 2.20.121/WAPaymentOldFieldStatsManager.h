//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPaymentOldFieldStatsManager : NSObject
{
}

+ (void)logPaymentEventWithChecks:(id)arg1;
+ (void)logPaymentsDOBEventWithEventId:(id)arg1 countryCode:(id)arg2 actionType:(long long)arg3;
+ (void)logPaymentsTOSEventWithEventId:(id)arg1 countryCode:(id)arg2 actionType:(long long)arg3;
+ (void)logPaymentsGetStartedEventWithEventId:(id)arg1 countryCode:(id)arg2 actionType:(long long)arg3;
+ (id)countryCode;

@end

