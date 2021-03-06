//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsBillingInfo : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _balanceIsSet;
    _Bool _billing_thresholdIsSet;
    _Bool _creditIsSet;
    _Bool _max_billing_thresholdIsSet;
    _Bool _total_refund_penniesIsSet;
    _Bool _available_freebiesIsSet;
    _Bool _spent_freebiesIsSet;
    long long _balance;
    long long _billing_threshold;
    long long _credit;
    long long _max_billing_threshold;
    long long _total_refund_pennies;
    long long _available_freebies;
    long long _spent_freebies;
}

@property(nonatomic) _Bool spent_freebiesIsSet; // @synthesize spent_freebiesIsSet=_spent_freebiesIsSet;
@property(nonatomic) long long spent_freebies; // @synthesize spent_freebies=_spent_freebies;
@property(nonatomic) _Bool available_freebiesIsSet; // @synthesize available_freebiesIsSet=_available_freebiesIsSet;
@property(nonatomic) long long available_freebies; // @synthesize available_freebies=_available_freebies;
@property(nonatomic) _Bool total_refund_penniesIsSet; // @synthesize total_refund_penniesIsSet=_total_refund_penniesIsSet;
@property(nonatomic) long long total_refund_pennies; // @synthesize total_refund_pennies=_total_refund_pennies;
@property(nonatomic) _Bool max_billing_thresholdIsSet; // @synthesize max_billing_thresholdIsSet=_max_billing_thresholdIsSet;
@property(nonatomic) long long max_billing_threshold; // @synthesize max_billing_threshold=_max_billing_threshold;
@property(nonatomic) _Bool creditIsSet; // @synthesize creditIsSet=_creditIsSet;
@property(nonatomic) long long credit; // @synthesize credit=_credit;
@property(nonatomic) _Bool billing_thresholdIsSet; // @synthesize billing_thresholdIsSet=_billing_thresholdIsSet;
@property(nonatomic) long long billing_threshold; // @synthesize billing_threshold=_billing_threshold;
@property(nonatomic) _Bool balanceIsSet; // @synthesize balanceIsSet=_balanceIsSet;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetSpent_freebies;
- (void)unsetAvailable_freebies;
- (void)unsetTotal_refund_pennies;
- (void)unsetMax_billing_threshold;
- (void)unsetCredit;
- (void)unsetBilling_threshold;
- (void)unsetBalance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBalance:(long long)arg1 billing_threshold:(long long)arg2 credit:(long long)arg3 max_billing_threshold:(long long)arg4 total_refund_pennies:(long long)arg5 available_freebies:(long long)arg6 spent_freebies:(long long)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

