//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMPlaybackRequestFactory, NSString, UIView;
@protocol BMBetamaxPlayer, BMVideoSurface, SPTVideoCacheOptionsFactory, SPTVideoPlayerFactory;

@interface SPTPremiumDestinationUIVideoPlayerLoader : NSObject
{
    id <BMBetamaxPlayer> _player;
    id <SPTVideoPlayerFactory> _playerFactory;
    BMPlaybackRequestFactory *_playbackRequestFactory;
    id <SPTVideoCacheOptionsFactory> _cacheOptionsFactory;
    UIView<BMVideoSurface> *_videoSurfaceView;
    NSString *_playbackIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *playbackIdentifier; // @synthesize playbackIdentifier=_playbackIdentifier;
@property(retain, nonatomic) UIView<BMVideoSurface> *videoSurfaceView; // @synthesize videoSurfaceView=_videoSurfaceView;
@property(retain, nonatomic) id <SPTVideoCacheOptionsFactory> cacheOptionsFactory; // @synthesize cacheOptionsFactory=_cacheOptionsFactory;
@property(retain, nonatomic) BMPlaybackRequestFactory *playbackRequestFactory; // @synthesize playbackRequestFactory=_playbackRequestFactory;
@property(retain, nonatomic) id <SPTVideoPlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(retain, nonatomic) id <BMBetamaxPlayer> player; // @synthesize player=_player;
- (id)provideEventObserverFactory;
- (id)provideVideoCacheOptions;
- (id)createPlaybackRequestFromURL:(id)arg1 metaData:(id)arg2;
- (void)createPlayer;
- (void)loadPlayerForURL:(id)arg1;
- (id)initWithPlayerFactory:(id)arg1 playbackRequestFactory:(id)arg2 cacheOptionsFactory:(id)arg3;

@end

