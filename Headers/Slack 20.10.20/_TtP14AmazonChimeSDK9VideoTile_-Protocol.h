//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class _TtC14AmazonChimeSDK14VideoTileState;
@protocol _TtP14AmazonChimeSDK15VideoRenderView_;

@protocol _TtP14AmazonChimeSDK9VideoTile_
- (void)setPauseStateWithPauseState:(long long)arg1;
- (void)unbind;
- (void)renderFrameWithFrame:(struct __CVBuffer *)arg1;
- (void)bindWithVideoRenderView:(id <_TtP14AmazonChimeSDK15VideoRenderView_>)arg1;
@property(nonatomic, retain) id <_TtP14AmazonChimeSDK15VideoRenderView_> videoRenderView;
@property(nonatomic, readonly) _TtC14AmazonChimeSDK14VideoTileState *state;
@end

