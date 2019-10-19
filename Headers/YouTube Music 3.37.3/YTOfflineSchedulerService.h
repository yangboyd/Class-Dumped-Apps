//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

#import "YTHotConfigObserver-Protocol.h"

@class NSString, YTApiaryResourceParser;

@interface YTOfflineSchedulerService : YTBaseInnerTubeRequestService <YTHotConfigObserver>
{
    YTApiaryResourceParser *_resourceParser;
    int _offlineSilentPushNotificationInterval;
}

- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (void)scheduleNotification;
- (void)makeRequestWithScheduledMicrotimestamp:(long long)arg1 clickTrackingParams:(id)arg2 innerTubeResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

