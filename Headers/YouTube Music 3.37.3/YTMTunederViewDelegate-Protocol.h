//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTMTunederView;

@protocol YTMTunederViewDelegate <NSObject>
- (void)tunederViewDidTapSubtitle:(YTMTunederView *)arg1;
- (void)tunederViewDidResumeItem:(YTMTunederView *)arg1;
- (void)tunederViewDidPauseItem:(YTMTunederView *)arg1;
- (_Bool)tunederViewDidSkipItem:(YTMTunederView *)arg1;
- (_Bool)tunederViewDidDislikeItem:(YTMTunederView *)arg1;
- (_Bool)tunederViewDidLikeItem:(YTMTunederView *)arg1;
- (void)tunederViewDidTapRetry:(YTMTunederView *)arg1;
- (void)tunederViewDidTapDone:(YTMTunederView *)arg1;
@end

