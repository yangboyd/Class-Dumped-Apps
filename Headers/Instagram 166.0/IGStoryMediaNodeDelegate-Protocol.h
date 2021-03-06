//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStoryMediaNode;

@protocol IGStoryMediaNodeDelegate <NSObject>
- (void)storyMediaNodeDidPlayVideoToEnd:(IGStoryMediaNode *)arg1;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didDisplayVideoFrame:(struct __CVBuffer *)arg2 withPreferredTransform:(struct CGAffineTransform)arg3 forPlaybackTime:(double)arg4;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didUpdatePreviewImageLoadingState:(_Bool)arg2;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didUpdateLoadingState:(_Bool)arg2;
@end

