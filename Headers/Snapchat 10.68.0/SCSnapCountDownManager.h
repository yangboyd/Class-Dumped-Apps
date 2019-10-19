//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;
@protocol SCChatMessageActionHandling;

@interface SCSnapCountDownManager : NSObject
{
    NSMutableDictionary *_snapIdToCountDown;
    NSMutableDictionary *_conversationIdToSnapIdsCountingDown;
    SCQueuePerformer *_performer;
    id <SCChatMessageActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (_Bool)hasCountDownUnitForSnap:(id)arg1;
- (unsigned long long)leftTimeForSnap:(id)arg1;
- (double)secondsPlayedForSnap:(id)arg1;
- (void)setCountDownTimerPaused:(_Bool)arg1 snapId:(id)arg2;
- (void)removeCountDownTimerForAllSnapsInConvo:(id)arg1 enforceMessageExists:(_Bool)arg2 hasAvailableCredits:(_Bool)arg3 cellViewPosition:(long long)arg4;
- (void)removeCountDownTimerForSnap:(id)arg1 conversationId:(id)arg2 enforceMessageExists:(_Bool)arg3 hasAvailableCredits:(_Bool)arg4 cellViewPosition:(long long)arg5;
- (void)registerCountDownTimerWithStartCountDownTime:(id)arg1 duration:(double)arg2 isInfinite:(_Bool)arg3 snapId:(id)arg4 conversationId:(id)arg5;
- (id)initWithMessageActionHandler:(id)arg1;

@end

