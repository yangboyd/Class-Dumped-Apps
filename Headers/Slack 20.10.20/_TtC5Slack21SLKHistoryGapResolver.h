//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack21SLKHistoryGapResolver : NSObject
{
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: syncOperationQueue
    // Error parsing type: , name: userInitiatedOperationQueue
    // Error parsing type: , name: dispatchQueue
}

- (void).cxx_destruct;
- (id)init;
- (void)createGapForNewerMessagesIfNecessaryWithChannelId:(id)arg1 latestTimestampNumber:(long long)arg2 shouldResolveNewGap:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resolveGaps;
- (void)enqueueOperationForGap:(id)arg1 syncQueuePriority:(long long)arg2;
- (_Bool)gapExistsForChannelWithChannelId:(id)arg1;
- (void)prioritizeGapForChannelWithChannelId:(id)arg1 traceContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDependencies:(id)arg1;

@end

