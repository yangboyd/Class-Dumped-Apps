//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class KFCAClassicPlaybackController;

@protocol KFCAClassicPlaybackControllerDelegate <NSObject>
- (void)playbackController:(KFCAClassicPlaybackController *)arg1 playCountRemainingDidChange:(long long)arg2;
- (void)playbackController:(KFCAClassicPlaybackController *)arg1 playCountDidChange:(long long)arg2;
@end

