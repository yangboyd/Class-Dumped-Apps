//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, MLVideo;
@protocol MLPlayer, MLPlayerConfig;

@interface YTMediaPlayerManager : NSObject
{
    MLVideo *_video;
    id <MLPlayerConfig> _playerConfig;
    id <MLPlayer> _player;
    long long _playerUsageCount;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)shutDownPlayer;
- (id)newMediaPlayerWithStickySettings:(id)arg1;
- (void)releaseMediaPlayer;
- (id)acquireMediaPlayerWithStickySettings:(id)arg1;
- (void)dealloc;
- (id)initWithVideo:(id)arg1 playerConfig:(id)arg2;

@end

