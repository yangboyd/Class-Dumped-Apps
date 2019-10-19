//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTGenericLatencyTickLogger.h"

@class YTMonotonicDate;

@interface YTReelLatencyTickLogger : YTGenericLatencyTickLogger
{
    YTMonotonicDate *_startDate;
    _Bool _startedOrAbandoned;
    _Bool _didLogRequestSent;
    _Bool _didLogResponseReceived;
    _Bool _didLogTransitionComplete;
    _Bool _didLogBeginLoadingPlayer;
    _Bool _didLogWillStartPlayer;
    _Bool _didRecordPrebufferStatus;
    _Bool _didLogThumbnailRemoved;
    unsigned long long _transition;
}

+ (int)videoTypeForReelPlayerOverlayStyle:(int)arg1;
@property(readonly, nonatomic) unsigned long long transition; // @synthesize transition=_transition;
- (void).cxx_destruct;
- (void)setLastAbandonTime:(double)arg1;
- (double)didAbandon;
- (void)thumbnailRemoved;
- (void)didPlayWithVideoFormat:(id)arg1 cpn:(id)arg2;
- (void)willStartPlayer;
- (void)willBeginLoadingPlayerTransition;
- (void)recordDidPrebuffer:(_Bool)arg1;
- (void)viewTransitionComplete;
- (void)didReceiveReelItemWatchResponseWithPrefetchType:(int)arg1;
- (void)didSendReelItemWatchRequest;
- (void)reelWatchDidStartWithOperationType:(int)arg1 transitionType:(int)arg2 timestamp:(double)arg3 videoType:(int)arg4;
- (void)startWithTransition:(unsigned long long)arg1 timestamp:(double)arg2 videoType:(int)arg3;
- (void)startWithTransition:(unsigned long long)arg1 videoType:(int)arg2;
- (id)init;

@end

