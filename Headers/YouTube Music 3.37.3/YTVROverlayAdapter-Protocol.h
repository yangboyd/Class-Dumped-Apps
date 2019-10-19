//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, YTIButtonRenderer, YTIFormattedString, YTVRCaptionOverlayView;
@protocol YTVROverlayAdapterDelegate;

@protocol YTVROverlayAdapter <NSObject>
@property(nonatomic) _Bool autonavOnCardboardModeEnabled;
@property(nonatomic) __weak id <YTVROverlayAdapterDelegate> delegate;
- (void)removeDidPressAutonavPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressAutonavCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPreviousTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressNextTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPauseTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressAutonavPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressAutonavCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPreviousTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressNextTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPauseTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)setAutonavThumbnailImage:(UIImage *)arg1;
- (void)setAutonavPausedLabelHidden:(_Bool)arg1;
- (void)setAutonavPausedLabelText:(YTIFormattedString *)arg1;
- (void)setAutonavCancelButtonHidden:(_Bool)arg1;
- (void)setAutonavCancelButtonRenderer:(YTIButtonRenderer *)arg1;
- (void)setAutonavExpansionCoefficient:(double)arg1;
- (void)setAutonavBylineString:(YTIFormattedString *)arg1;
- (void)setAutonavVideoTitleString:(YTIFormattedString *)arg1;
- (void)setAutonavTitleString:(YTIFormattedString *)arg1;
- (void)stopAutonavCountdown;
- (void)startAutonavCountDownForSeconds:(double)arg1;
- (void)setVideoTitle:(NSString *)arg1;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setCaptionOverlayView:(YTVRCaptionOverlayView *)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (void)setMediaTime:(double)arg1;
- (void)setDownloadedTime:(double)arg1;
- (void)setTotalTime:(double)arg1;
- (void)setPlayerBarMode:(int)arg1;
- (void)setNextButtonHidden:(_Bool)arg1;
- (void)setPreviousButtonHidden:(_Bool)arg1;
- (void)showReplayButton;
- (void)showPauseButton;
- (void)showPlayButton;
- (void)showSpinner;
@end

