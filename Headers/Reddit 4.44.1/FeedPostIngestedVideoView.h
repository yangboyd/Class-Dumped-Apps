//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPostHlsVideoView.h"

#import "PlayerViewDelegate-Protocol.h"

@class ContentIngestedVideoView, NSString;

@interface FeedPostIngestedVideoView : FeedPostHlsVideoView <PlayerViewDelegate>
{
    ContentIngestedVideoView *_hlsVideoView;
}

@property(retain, nonatomic) ContentIngestedVideoView *hlsVideoView; // @synthesize hlsVideoView=_hlsVideoView;
- (void).cxx_destruct;
- (_Bool)parentIsCarouselView;
- (void)playerViewDidEndPlaying:(id)arg1;
- (void)playerViewDidBeginPlaying:(id)arg1;
- (void)configureWithData:(id)arg1 withOptions:(id)arg2 andDelegate:(id)arg3 withParentPost:(id)arg4;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

