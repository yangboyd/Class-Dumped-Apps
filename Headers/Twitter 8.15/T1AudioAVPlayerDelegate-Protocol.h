//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, T1AudioAVPlayer;

@protocol T1AudioAVPlayerDelegate <NSObject>
- (void)audioAVPlayerDidStall:(T1AudioAVPlayer *)arg1;
- (void)audioAVPlayerDidRecoverFromStall:(T1AudioAVPlayer *)arg1;
- (void)audioAVPlayerDidFinishPlayback:(T1AudioAVPlayer *)arg1;
- (void)audioAVPlayer:(T1AudioAVPlayer *)arg1 playbackTimeDidProgress:(double)arg2 withIncrement:(double)arg3;
- (void)audioAVPlayer:(T1AudioAVPlayer *)arg1 didError:(NSError *)arg2 withMessage:(NSString *)arg3;
- (void)audioAVPlayer:(T1AudioAVPlayer *)arg1 scribeAction:(NSString *)arg2 page:(NSString *)arg3 section:(NSString *)arg4 component:(NSString *)arg5 element:(NSString *)arg6 withPlaybackTime:(double)arg7 parameters:(NSDictionary *)arg8;
@end

