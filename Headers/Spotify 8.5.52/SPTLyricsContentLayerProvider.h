//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingContentLayerProvider-Protocol.h"

@class NSString, SPTLyricsContentLayerContext, SPTLyricsV2GLUETheme;
@protocol SPTLyricsTrackChecker, SPTNowPlayingContentLayerProviderDelegate;

@interface SPTLyricsContentLayerProvider : NSObject <SPTNowPlayingContentLayerProvider>
{
    SPTLyricsV2GLUETheme *_theme;
    id <SPTLyricsTrackChecker> _lyricsChecker;
    SPTLyricsContentLayerContext *_context;
}

@property(readonly, nonatomic) SPTLyricsContentLayerContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <SPTLyricsTrackChecker> lyricsChecker; // @synthesize lyricsChecker=_lyricsChecker;
@property(readonly, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)setCell:(id)arg1 expanded:(_Bool)arg2 insets:(struct UIEdgeInsets)arg3 forTrack:(id)arg4;
- (id)reuseIdentifier;
- (_Bool)requiresOverlayForTrack:(id)arg1;
- (_Bool)canExpandForTrack:(id)arg1;
- (_Bool)canHideControlsForTrack:(id)arg1;
- (long long)priority;
- (_Bool)isActiveForTrack:(id)arg1 playerState:(id)arg2;
- (_Bool)displaysFullScreenContentForTrack:(id)arg1;
- (unsigned long long)contentType;
- (void)configureCell:(id)arg1 withTrack:(id)arg2 windowedContentInsets:(struct UIEdgeInsets)arg3 peekingDisallowed:(_Bool)arg4;
- (Class)cellClass;
- (id)initWithTheme:(id)arg1 checker:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTNowPlayingContentLayerProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

