//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryAdsFetcher, NSArray, NSError, NSNumber;

@protocol IGStoryAdsFetcherDelegate <NSObject>
- (void)storyAdsFetcher:(IGStoryAdsFetcher *)arg1 fetchAdAndNetegoReelsDidFailWithError:(NSError *)arg2 statusCode:(long long)arg3 latency:(double)arg4 isFirstRequest:(_Bool)arg5;
- (void)storyAdsFetcher:(IGStoryAdsFetcher *)arg1 didFetchAdAndNetegoReels:(NSArray *)arg2 adRequestIndex:(long long)arg3 nextAdRequestIndex:(NSNumber *)arg4 statusCode:(long long)arg5 latency:(double)arg6 isFirstRequest:(_Bool)arg7 adsPoolThresholdForNextRequest:(long long)arg8 earliestRequestPosition:(long long)arg9;
@end

