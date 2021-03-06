//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface AIRCalendarDaySet : NSObject
{
    NSArray *_availableDays;
    NSArray *_unavailableDays;
    NSArray *_unavailableOverrideDays;
    NSArray *_unavailableByBookingWindowDays;
    NSDictionary *_priceDayDictionary;
    NSDictionary *_noteDayDictionary;
    NSArray *_overriddenDemandBasedPricedDays;
    NSArray *_demandBasedPricedDays;
}

+ (void)addCalendarDay:(id)arg1 toNotedDays:(id)arg2;
+ (void)addCalendarDay:(id)arg1 toOverriddenDemandBasedPricedDays:(id)arg2 orDemandBasedPricedDays:(id)arg3;
+ (void)addCalendarDay:(id)arg1 toSimilarlyNotedDays:(id)arg2;
+ (void)addCalendarDay:(id)arg1 toSimilarlyPricedDays:(id)arg2;
+ (void)addCalendarDay:(id)arg1 toAvailableDates:(id)arg2 orUnavailableDates:(id)arg3 orUnavailableOverrideDates:(id)arg4 orUnavailableByBookingWindowDates:(id)arg5;
+ (id)setFromCalendarDays:(id)arg1 filteredAgainstCalendarResource:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *demandBasedPricedDays; // @synthesize demandBasedPricedDays=_demandBasedPricedDays;
@property(readonly, copy, nonatomic) NSArray *overriddenDemandBasedPricedDays; // @synthesize overriddenDemandBasedPricedDays=_overriddenDemandBasedPricedDays;
@property(readonly, copy, nonatomic) NSDictionary *noteDayDictionary; // @synthesize noteDayDictionary=_noteDayDictionary;
@property(readonly, copy, nonatomic) NSDictionary *priceDayDictionary; // @synthesize priceDayDictionary=_priceDayDictionary;
@property(readonly, copy, nonatomic) NSArray *unavailableByBookingWindowDays; // @synthesize unavailableByBookingWindowDays=_unavailableByBookingWindowDays;
@property(readonly, copy, nonatomic) NSArray *unavailableOverrideDays; // @synthesize unavailableOverrideDays=_unavailableOverrideDays;
@property(readonly, copy, nonatomic) NSArray *unavailableDays; // @synthesize unavailableDays=_unavailableDays;
@property(readonly, copy, nonatomic) NSArray *availableDays; // @synthesize availableDays=_availableDays;
- (id)initWithAvailableDays:(id)arg1 unavailableDays:(id)arg2 unavailableOverrideDays:(id)arg3 unavailableByBookingWindowDays:(id)arg4 priceDayDictionary:(id)arg5 noteDayDictionary:(id)arg6 overriddenDemandBasedPricedDays:(id)arg7 demandBasedPricedDays:(id)arg8;

@end

