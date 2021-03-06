//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEditCompositionAssetObserver-Protocol.h"

@class NSString, YTShortsCreationAudioPlayer;
@protocol YTShortsCreationPlayer;

@interface YTShortsCameraSyncAudioPlayer : NSObject <YTEditCompositionAssetObserver>
{
    YTShortsCreationAudioPlayer *_player;
    CDStruct_1b6d18a9 _trackOffset;
    _Bool _playbackEnabled;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <YTShortsCreationPlayer> player; // @synthesize player=_player;
- (void)cameraCompositionDidUpdate:(id)arg1;
- (void)compositionAssetUpdateFailed:(id)arg1 withError:(id)arg2;
- (void)compositionAssetDidUpdate:(id)arg1;
- (void)invalidate;
- (void)pause;
- (void)play;
@property(nonatomic) float playbackRate;
- (id)initWithAudioAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

