//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryMusicLyricsSongModel, IGStoryMusicTrackClip, IGStoryOriginalSoundInfo, IGSundialAudioPreCaptureEditor;

@protocol IGSundialAudioPreCaptureEditorDelegate <NSObject>
- (void)sundialAudioPreCaptureEditor:(IGSundialAudioPreCaptureEditor *)arg1 didUpdateLyricsCaptureToggleOn:(_Bool)arg2 withLyrics:(IGStoryMusicLyricsSongModel *)arg3;
- (void)sundialAudioPreCaptureEditor:(IGSundialAudioPreCaptureEditor *)arg1 didTapDoneButtonWithOriginalAudio:(IGStoryOriginalSoundInfo *)arg2;
- (void)sundialAudioPreCaptureEditor:(IGSundialAudioPreCaptureEditor *)arg1 didTapDoneButtonWithMusicTrackClip:(IGStoryMusicTrackClip *)arg2;
- (void)sundialAudioPreCaptureEditorDidTapDismissButton:(IGSundialAudioPreCaptureEditor *)arg1;
@end

