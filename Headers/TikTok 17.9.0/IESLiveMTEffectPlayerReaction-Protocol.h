//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveDoodleGiftMessage, HTSLiveNobleUpgradeMessage, IESLiveMTEffectNode;

@protocol IESLiveMTEffectPlayerReaction <NSObject>
- (void)didForceUpdateToOrientation:(long long)arg1;
- (void)showDebugLog;
- (void)stopVideoGiftPlaying;
- (void)startEngine;
- (void)stopEngine;
- (void)updateGiftAnimationClearButton:(long long)arg1;
- (void)dispatchDoodleMessage:(HTSLiveDoodleGiftMessage *)arg1;
- (void)dispatchNobleMessage:(HTSLiveNobleUpgradeMessage *)arg1;
- (void)dispatchEffectNode:(IESLiveMTEffectNode *)arg1;
@end

