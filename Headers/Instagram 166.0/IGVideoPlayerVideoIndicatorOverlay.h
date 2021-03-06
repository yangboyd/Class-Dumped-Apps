//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGVideoPlayerOverlay.h>

@class IGVideoIndicatorView;

@interface IGVideoPlayerVideoIndicatorOverlay : IGVideoPlayerOverlay
{
    IGVideoIndicatorView *_indicatorView;
    _Bool _loadingIndicatorEnabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=loadingIndicatorEnabled) _Bool loadingIndicatorEnabled; // @synthesize loadingIndicatorEnabled=_loadingIndicatorEnabled;
- (void)_showVideoIndicatorIfPosterFrameIsLoaded;
- (void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;
- (void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
- (void)videoPlaybackControllerDidEmptyPlaybackBuffer:(id)arg1;
- (void)reset;
- (void)setPlaybackController:(id)arg1;
- (void)overlayContext:(id)arg1 videoPosterImageLoadStatusDidChange:(unsigned long long)arg2;
- (void)overlayWasAddedToContext:(id)arg1;
- (struct CGRect)preferredFrameInsideRect:(struct CGRect)arg1;
- (void)loadView;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)init;

@end

