//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ByteRtcEngineKit/NSObject-Protocol.h>

@class ByteAudioFrame, NSString;

@protocol ByteAudioFrameObserver <NSObject>
- (void)onMixedAudioFrame:(ByteAudioFrame *)arg1;
- (void)onPlaybackAudioFrameBeforeMixing:(NSString *)arg1 audioFrame:(ByteAudioFrame *)arg2;
- (void)onPlaybackAudioFrame:(ByteAudioFrame *)arg1;
- (void)onRecordAudioFrame:(ByteAudioFrame *)arg1;
@end

