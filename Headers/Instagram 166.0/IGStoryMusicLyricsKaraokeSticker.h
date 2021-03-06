//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGDynamicSurfaceStickerViewType-Protocol.h>
#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMusicLyricsStickerProtocol-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class IGPlaybackTimeline, IGStoryMusicLyricsSongModel, NSString, UICollectionView, UIColor, UIFont, UIPanGestureRecognizer;

@interface IGStoryMusicLyricsKaraokeSticker : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGPlaybackTimelineDelegate, IGStoryMusicLyricsStickerProtocol, IGDynamicSurfaceStickerViewType>
{
    IGPlaybackTimeline *_timeline;
    UIFont *_activeFont;
    UICollectionView *_karaokeLyricsCollectionView;
    UIColor *_color;
    double _duration;
    IGStoryMusicLyricsSongModel *_lyricsSongModel;
    double _musicClipStartTime;
    double _currentSongTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentSongTime; // @synthesize currentSongTime=_currentSongTime;
@property(nonatomic) double musicClipStartTime; // @synthesize musicClipStartTime=_musicClipStartTime;
@property(retain, nonatomic) IGStoryMusicLyricsSongModel *lyricsSongModel; // @synthesize lyricsSongModel=_lyricsSongModel;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)outlinePath;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
- (id)stickerView;
- (id)loggingId;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

