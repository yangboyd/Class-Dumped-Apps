//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPlayerContext;
@protocol SPTPlayer;

@interface SPTPlaybackDebugPlaylistViewModel : NSObject
{
    id <SPTPlayer> _player;
    SPTPlayerContext *_context;
}

+ (id)musicTrackWithURI:(id)arg1 albumURI:(id)arg2 artistURI:(id)arg3 tite:(id)arg4;
+ (id)videoTrackWithManifestId:(id)arg1 title:(id)arg2 album:(id)arg3;
@property(readonly, nonatomic) SPTPlayerContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)selectItemAtIndex:(long long)arg1;
- (id)subtitleForItemAtIndex:(long long)arg1;
- (id)titleForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfItems;
- (void)createContext;
- (id)initWithPlayer:(id)arg1;

@end

