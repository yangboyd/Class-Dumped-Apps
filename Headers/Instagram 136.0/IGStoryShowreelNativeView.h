//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGShowreelNativeViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryPlayerMediaViewType-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryStaticMediaProgressManagerDelegate-Protocol.h>

@class IGFeedItemVPVDImpressionHelper, IGShowreelNativeView, IGStoryStaticMediaProgressManager, NSDictionary, NSString;
@protocol IGStoryItemType, IGStoryPlayerMediaViewDelegate, IGStoryShowreelNativeViewDelegate;

@interface IGStoryShowreelNativeView : UIView <IGStoryStaticMediaProgressManagerDelegate, IGShowreelNativeViewDelegate, IGStoryPlayerMediaViewType>
{
    id <IGStoryPlayerMediaViewDelegate> _storyPlayerMediaViewDelegate;
    id <IGStoryShowreelNativeViewDelegate> _storyShowreelNativeViewDelegate;
    IGStoryStaticMediaProgressManager *_progressManager;
    IGShowreelNativeView *_showreelNativeView;
    unsigned long long _snPlaybackState;
    UIView *_snPlayerView;
    NSDictionary *_initialShowreelNativeMediaViewLayoutExtras;
    IGFeedItemVPVDImpressionHelper *vpvdImpressionHelper;
    id <IGStoryItemType> _item;
}

@property(readonly, nonatomic) id <IGStoryItemType> item; // @synthesize item=_item;
@property(retain, nonatomic) IGFeedItemVPVDImpressionHelper *vpvdImpressionHelper; // @synthesize vpvdImpressionHelper;
- (void).cxx_destruct;
- (void)showreelNativeViewDidTapRetryButton:(id)arg1;
- (_Bool)isShowingContent;
- (_Bool)isViewFinishedLoading;
- (void)storyStaticMediaProgressManagerDidPlayToEnd:(id)arg1;
- (void)storyStaticMediaProgressManager:(id)arg1 didUpdateProgress:(double)arg2;
- (void)_didFailToLoadSource;
- (void)_didLoadSource;
- (void)_willLoadURL:(id)arg1;
- (void)_didTapTouchableRegion:(id)arg1;
- (id)_getShowreelNativeMediaViewLayoutExtras;
- (void)_setPlaybackState:(unsigned long long)arg1;
- (double)cellPlayTime;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize)mediaSize;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)prepareForReuse;
- (void)seekToBeginning;
- (_Bool)isPlaying;
- (void)stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)retryLoadItem:(id)arg1;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 experimentSetProvider:(id)arg5 launcherSet:(id)arg6 module:(id)arg7;
- (void)updateTouchableRegions:(id)arg1 inView:(id)arg2;
- (void)updatePlayBackState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 storyShowreelNativeViewDelegate:(id)arg2 playerView:(id)arg3 playbackState:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

