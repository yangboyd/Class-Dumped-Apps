//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStackedNoteCollectionViewCell.h"

#import "SCChatVideoNotePlayerDelegate-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCVideoNoteView;

@interface SCStackedVideoNoteCollectionViewCell : SCStackedNoteCollectionViewCell <SCChatVideoNotePlayerDelegate>
{
    SCVideoNoteView *_videoNoteView;
    SCLoadingIndicatorView *_activityIndicatorView;
}

+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
- (void)videoNotePlayerDidFinishPlayingMediaId:(id)arg1;
- (void)videoNotePlayerStateChangedForMediaId:(id)arg1;
- (void)_updateVideoNoteView;
- (void)onTap;
- (void)_showSpinner:(_Bool)arg1;
- (void)_didShowPendingDisplay;
- (void)_didShowCompleteDisplay;
- (void)_setVideoNoteViewCellIsReadyForDisplay:(_Bool)arg1 forViewModel:(id)arg2;
- (void)_setIsSender:(_Bool)arg1;
- (_Bool)_isCoverAnimationLoaded;
- (void)configureWithViewModel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)stopAnimation;
- (void)startAnimation;
- (void)clearContents;
- (id)activityIndicatorView;
- (void)_initVideoNoteView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

