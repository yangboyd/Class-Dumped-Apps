//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGAudioSessionClient;

@protocol IGAudioSessionClientDelegate <NSObject>
- (void)avAudioSessionDidBecomeDeactivated:(IGAudioSessionClient *)arg1;
- (void)avAudioSessionDidBecomeActive:(IGAudioSessionClient *)arg1;
- (void)webRTCClientDeactivatedClient:(IGAudioSessionClient *)arg1;
- (void)webRTCClientDidBecomeActiveClient:(IGAudioSessionClient *)arg1;
@end

