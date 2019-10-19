//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

@class YTApiaryResourceParser;

@interface YTWatchHistoryService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_clearWatchHistoryResponseParser;
    YTApiaryResourceParser *_pauseWatchHistoryResponseParser;
    YTApiaryResourceParser *_resumeWatchHistoryResponseParser;
    YTApiaryResourceParser *_getHistoryPausedStateResponseParser;
}

- (void).cxx_destruct;
- (void)getWatchHistoryStateRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeResumeWatchHistoryRequestWithClickTrackingParams:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makePauseWatchHistoryRequestWithClickTrackingParams:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeClearWatchHistoryRequestWithClickTrackingParams:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

