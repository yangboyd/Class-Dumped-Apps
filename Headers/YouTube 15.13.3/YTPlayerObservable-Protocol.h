//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTPlayerObservableTime-Protocol.h>

@class NSData, NSDictionary, NSError;
@protocol MLPlayerConfig;

@protocol YTPlayerObservable <YTPlayerObservableTime>
@property(readonly, nonatomic) NSError *playerError;
@property(readonly, nonatomic) NSDictionary *playerDebugParameters;
@property(readonly, nonatomic) NSData *playerDebugLogs;
@property(readonly, nonatomic) id <MLPlayerConfig> playerConfig;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) int mediaPlayerType;
@property(readonly, nonatomic) double accumulatedMediaTime;
@property(readonly, nonatomic) _Bool attemptingToPlay;
@property(readonly, nonatomic) _Bool isMuted;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic, getter=isExternalPlaybackAllowed) _Bool externalPlaybackAllowed;
@property(readonly, nonatomic) _Bool isExternalPlaybackActive;
@end

