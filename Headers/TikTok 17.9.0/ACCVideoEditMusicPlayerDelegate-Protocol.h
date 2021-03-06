//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSVideoData, NSURL;

@protocol ACCVideoEditMusicPlayerDelegate <NSObject>
- (void)clipMusic:(struct _HTSAudioRange)arg1;
- (void)replaceAudioForPhotoVideo:(NSURL *)arg1;
- (void)replaceAudio:(NSURL *)arg1;
- (void)seekToTimeAndRender:(CDStruct_1b6d18a9)arg1 completionHandler:(void (^)(_Bool))arg2;
- (HTSVideoData *)videoData;
- (void)updateVideoData:(HTSVideoData *)arg1 updateType:(long long)arg2 completeBlock:(void (^)(NSError *))arg3;
- (void)setVolumeForAudio:(float)arg1;
- (void)continuePlay;
- (void)pause;
- (void)play;

@optional
- (void)refreshAudioPlayer;
@end

