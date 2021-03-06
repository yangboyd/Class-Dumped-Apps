//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGAnalyticsDataUsageManager : NSObject
{
    _Bool _hasStartedTracking;
    struct {
        unsigned long long nbytesWifiSnd;
        unsigned long long nbytesWifiRcv;
        unsigned long long nbytesCellSnd;
        unsigned long long nbytesCellRcv;
        unsigned int npcktsWifiSnd;
        unsigned int npcktsWifiRcv;
        unsigned int npcktsCellSnd;
        unsigned int npcktsCellRcv;
    } _initialDataRecord;
    double _startTime;
}

+ (id)sharedDataUsageManager;
- (_Bool)_isDataRecordOverflowed;
- (_Bool)shouldReportDataUsage;
- (long long)getDuration;
- (id)getDataUsageAndFinishTracking;
- (void)startDataUsageTracking;

@end

