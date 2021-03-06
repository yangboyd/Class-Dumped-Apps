//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTImageServiceMetricsObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSArray, NSString;

@interface YTNthThumbnailLoadInstrumentation : NSObject <YTImageServiceMetricsObserver, YTSystemNotificationsObserver>
{
    _Bool _active;
    unsigned long long _numThumbnailsLoaded;
    unsigned long long _nextIndexToReport;
    NSArray *_sortedNValuesToReport;
    struct CGSize _minThumbnailSize;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)reportNthThumbnailLoad:(unsigned long long)arg1 withMetrics:(id)arg2;
- (_Bool)isThumbnailLoad:(id)arg1;
- (void)stopMonitoring;
- (void)imageServiceRequestDidCompleteWithMetrics:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

