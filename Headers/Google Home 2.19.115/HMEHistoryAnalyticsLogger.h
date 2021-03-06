//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AnalyticsSink;

@interface HMEHistoryAnalyticsLogger : NSObject
{
    id <AnalyticsSink> _analyticsLogger;
}

@property(readonly, nonatomic) id <AnalyticsSink> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (void).cxx_destruct;
- (id)stringRepresentationOfHistoryCategory:(int)arg1;
- (unsigned long long)daysDifferenceFromDate:(id)arg1;
- (id)analyticsEvent;
- (id)analyticsEventWithHistoryContentInfo;
- (void)logFilterExitEventWithReason:(int)arg1;
- (void)logExitEventWithReason:(int)arg1;
- (void)logEnterEventWithLocation:(long long)arg1 filterPreferenceIDs:(id)arg2;
- (void)logFilterRemovedEventForPreferenceID:(id)arg1;
- (void)logResourceLoadEffortForURLString:(id)arg1 resourceType:(int)arg2 result:(int)arg3 dataSource:(int)arg4 startTimeInterval:(double)arg5 endTimeInterval:(double)arg6 errorCode:(long long)arg7;
- (void)logDateSelectionEventWithDate:(id)arg1 selectReason:(int)arg2;
- (void)logEventClickForEventType:(int)arg1 eventId:(id)arg2;
- (void)logEventImpressionForEventType:(int)arg1 eventId:(id)arg2;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

