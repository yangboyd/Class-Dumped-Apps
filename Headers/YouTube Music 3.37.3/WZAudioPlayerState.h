//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WZSDKMessage.h"

@interface WZAudioPlayerState : WZSDKMessage
{
    _Bool _isPlaying;
    float _playbackSpeed;
    long long _playbackPosition;
}

@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) float playbackSpeed; // @synthesize playbackSpeed=_playbackSpeed;
@property(readonly, nonatomic) long long playbackPosition; // @synthesize playbackPosition=_playbackPosition;
- (id)initWithPlaybackPosition:(long long)arg1 playbackSpeed:(float)arg2 isPlaying:(_Bool)arg3;

@end

