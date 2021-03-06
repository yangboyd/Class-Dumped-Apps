//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTAutonavEndscreenControllerDelegate <NSObject>
@property(readonly, nonatomic) long long playerState;
- (_Bool)isMDXAutoplayEnabled;
- (void)playerControlsVisibilityDidChange:(id)arg1;
- (void)playerControlsBehaviorDidChange:(id)arg1;
- (_Bool)isMDXPlayback;
- (_Bool)isUserScrubbing;
- (void)showEndscreenControlsInPlayerBar:(_Bool)arg1 nextButton:(_Bool)arg2 secondsLabel:(_Bool)arg3;
- (void)didHideAutonavEndscreen;
- (void)willShowAutonavEndscreen;
- (_Bool)shouldShowAutonavEndscreen;
@end

