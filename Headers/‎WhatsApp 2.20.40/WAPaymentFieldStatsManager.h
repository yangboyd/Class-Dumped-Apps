//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPaymentFieldStatsManager : NSObject
{
}

+ (void)logPaymentsDOBEventWithEventId:(id)arg1 countryCode:(id)arg2 actionType:(long long)arg3;
+ (void)logPaymentsTOSEventWithEventId:(id)arg1 countryCode:(id)arg2 actionType:(long long)arg3;
+ (void)logPaymentsGetStartedEventWithEventId:(id)arg1 countryCode:(id)arg2 actionType:(long long)arg3;
+ (id)countryCode;

@end

