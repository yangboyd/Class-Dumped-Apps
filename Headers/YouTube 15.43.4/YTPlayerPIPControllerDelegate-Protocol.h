//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTPlayerPIPController, YTSingleVideoTime;

@protocol YTPlayerPIPControllerDelegate <NSObject>
- (void)pictureInPictureController:(YTPlayerPIPController *)arg1 didRequestSeekToTime:(YTSingleVideoTime *)arg2;
- (void)pictureInPictureControllerDidRequestPlaybackResume:(YTPlayerPIPController *)arg1;
- (void)pictureInPictureControllerDidRequestPlaybackPause:(YTPlayerPIPController *)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(YTPlayerPIPController *)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(YTPlayerPIPController *)arg1;
@end

