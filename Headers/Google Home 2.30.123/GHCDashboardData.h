//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCDashboardDailyData, GHCDashboardMonthlyData, GHCDashboardWeeklyData, GTPDate;

@interface GHCDashboardData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GTPDate *date; // @dynamic date;
@property(retain, nonatomic) GHCDashboardDailyData *day; // @dynamic day;
@property(nonatomic) _Bool hasDate; // @dynamic hasDate;
@property(retain, nonatomic) GHCDashboardMonthlyData *month; // @dynamic month;
@property(readonly, nonatomic) int timeRangeDataOneOfCase; // @dynamic timeRangeDataOneOfCase;
@property(retain, nonatomic) GHCDashboardWeeklyData *week; // @dynamic week;

@end

