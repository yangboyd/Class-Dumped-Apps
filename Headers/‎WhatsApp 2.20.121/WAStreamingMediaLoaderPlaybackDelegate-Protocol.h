//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSError, WAStreamingMediaLoader;

@protocol WAStreamingMediaLoaderPlaybackDelegate <NSObject>
@property(readonly, nonatomic) unsigned long long durationSeconds;
@property(readonly, nonatomic) unsigned long long currentTimeSeconds;
- (void)loaderWasResumed:(WAStreamingMediaLoader *)arg1;
- (void)loaderWasSuspended:(WAStreamingMediaLoader *)arg1;
- (void)loaderFinishedDownloading:(WAStreamingMediaLoader *)arg1;
- (void)loader:(WAStreamingMediaLoader *)arg1 updatedStreamingLikelyToKeepUp:(_Bool)arg2;
- (void)loaderRequestSucceeded:(WAStreamingMediaLoader *)arg1;
- (void)loader:(WAStreamingMediaLoader *)arg1 requestFailedWithError:(NSError *)arg2;
- (_Bool)loaderShouldLoadPlaybackResource:(WAStreamingMediaLoader *)arg1;
@end

