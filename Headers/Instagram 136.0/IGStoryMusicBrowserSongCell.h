//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

#import <InstagramAppCoreFramework/IGListBindable-Protocol.h>

@class IGDirectionalPanGestureRecognizer, IGRadioButtonView, IGStoryMusicBrowserBookmarkButton, IGStoryMusicBrowserSongCellContentView, NSString, NSURL, UIImage, UIView;
@protocol IGStoryMusicBrowserSongCellDelegate;

@interface IGStoryMusicBrowserSongCell : IGBouncyCollectionViewCell <IGListBindable>
{
    IGStoryMusicBrowserSongCellContentView *_songContentView;
    IGRadioButtonView *_selectedView;
    IGDirectionalPanGestureRecognizer *_panGesture;
    float _horizontalVelocity;
    _Bool _isDisabled;
    _Bool _markedSelected;
    _Bool _bookmarkEnabled;
    id <IGStoryMusicBrowserSongCellDelegate> _delegate;
    NSURL *_albumArtURL;
    unsigned long long _selectionStyle;
    IGStoryMusicBrowserBookmarkButton *_bookmarkButton;
    double _expandedPercent;
}

@property(nonatomic) double expandedPercent; // @synthesize expandedPercent=_expandedPercent;
@property(nonatomic) _Bool bookmarkEnabled; // @synthesize bookmarkEnabled=_bookmarkEnabled;
@property(retain, nonatomic) IGStoryMusicBrowserBookmarkButton *bookmarkButton; // @synthesize bookmarkButton=_bookmarkButton;
@property(nonatomic, getter=isMarkedSelected) _Bool markedSelected; // @synthesize markedSelected=_markedSelected;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(retain, nonatomic) NSURL *albumArtURL; // @synthesize albumArtURL=_albumArtURL;
@property(nonatomic) __weak id <IGStoryMusicBrowserSongCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receiveMusicSongSelectionChange:(id)arg1;
- (void)receiveMusicPlayerPlayBackChange:(id)arg1;
- (void)receiveMusicPlayerStallStatusChange:(id)arg1;
- (void)receiveMusicPlayerPlayingStatusChange:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)_didTapBookmarkButton:(id)arg1;
- (void)_didTapPlayPauseButton:(id)arg1;
@property(readonly, nonatomic) UIView *albumArtView;
@property(nonatomic) _Bool didViewStory;
@property(nonatomic) _Bool showStoryRing;
@property(nonatomic) double playbackProgress;
@property(nonatomic, getter=isStalled) _Bool stalled;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) _Bool isExplicit;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *songTitle;
@property(retain, nonatomic) UIImage *albumArtImage;
- (void)_didTapAlbumArt;
- (void)setStoryRingLoading:(_Bool)arg1;
- (void)layoutSubviews;
- (void)closeBookmarkTray;
- (void)_setExpandedPercent:(double)arg1 animated:(_Bool)arg2 velocity:(double)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)bindViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

