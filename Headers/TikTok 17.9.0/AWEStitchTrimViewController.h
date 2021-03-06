//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEVideoRangeSliderDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class ACCAnimatedButton, ACCMusicModel, ACCRecordViewControllerInputData, AVPlayer, AWEAVMutableCompositionBuilder, AWEAssetModel, AWEPlaybackView, AWEStitchVideoRangeSelectBar, AWEThumbnailCache, AWEUITextLoadingView, AWEVideoPublishViewModel, IESMMAVExporter, IESMMMediaExporter, NSArray, NSMutableArray, NSString, UIImageView, UIView;

@interface AWEStitchTrimViewController : UIViewController <AWEVideoRangeSliderDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _wasPlaying;
    _Bool _hasOverEndTime;
    _Bool _isFirstAppear;
    ACCRecordViewControllerInputData *_inputData;
    long long _initialInterfaceOrientation;
    AWEVideoPublishViewModel *_publishViewModel;
    AWEVideoPublishViewModel *_nextPublishViewModel;
    ACCMusicModel *_musicModel;
    UIView *_playerContainerView;
    AWEUITextLoadingView *_progressLoadingView;
    NSArray *_observers;
    AVPlayer *_avPlayer;
    id _avPlayerPeriodicObserver;
    AWEPlaybackView *_playerView;
    AWEAVMutableCompositionBuilder *_compositionBuilder;
    AWEStitchVideoRangeSelectBar *_videoTimeSelectBar;
    ACCAnimatedButton *_backButton;
    ACCAnimatedButton *_nextButton;
    UIImageView *_playIcon;
    double _initialContentOffset;
    double _durationOfOriginVideo;
    double _maxClipDuration;
    double _durationRate;
    AWEAssetModel *_currentAssetModel;
    AWEThumbnailCache *_thumbnailCache;
    NSMutableArray *_singleThumbnailTimeArray;
    IESMMMediaExporter *_mediaExporter;
    IESMMAVExporter *_stitchClipExporter;
    UIView *_nextBubbleView;
    UIView *_trimSelectBubbleView;
    double _prefetchingPoint;
    double _lastContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double prefetchingPoint; // @synthesize prefetchingPoint=_prefetchingPoint;
@property(retain, nonatomic) UIView *trimSelectBubbleView; // @synthesize trimSelectBubbleView=_trimSelectBubbleView;
@property(retain, nonatomic) UIView *nextBubbleView; // @synthesize nextBubbleView=_nextBubbleView;
@property(retain, nonatomic) IESMMAVExporter *stitchClipExporter; // @synthesize stitchClipExporter=_stitchClipExporter;
@property(retain, nonatomic) IESMMMediaExporter *mediaExporter; // @synthesize mediaExporter=_mediaExporter;
@property(retain, nonatomic) NSMutableArray *singleThumbnailTimeArray; // @synthesize singleThumbnailTimeArray=_singleThumbnailTimeArray;
@property(retain, nonatomic) AWEThumbnailCache *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(retain, nonatomic) AWEAssetModel *currentAssetModel; // @synthesize currentAssetModel=_currentAssetModel;
@property(nonatomic) double durationRate; // @synthesize durationRate=_durationRate;
@property(nonatomic) double maxClipDuration; // @synthesize maxClipDuration=_maxClipDuration;
@property(nonatomic) double durationOfOriginVideo; // @synthesize durationOfOriginVideo=_durationOfOriginVideo;
@property(nonatomic) _Bool hasOverEndTime; // @synthesize hasOverEndTime=_hasOverEndTime;
@property(nonatomic) _Bool wasPlaying; // @synthesize wasPlaying=_wasPlaying;
@property(nonatomic) double initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) ACCAnimatedButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) ACCAnimatedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) AWEStitchVideoRangeSelectBar *videoTimeSelectBar; // @synthesize videoTimeSelectBar=_videoTimeSelectBar;
@property(retain, nonatomic) AWEAVMutableCompositionBuilder *compositionBuilder; // @synthesize compositionBuilder=_compositionBuilder;
@property(retain, nonatomic) AWEPlaybackView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) id avPlayerPeriodicObserver; // @synthesize avPlayerPeriodicObserver=_avPlayerPeriodicObserver;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) AWEUITextLoadingView *progressLoadingView; // @synthesize progressLoadingView=_progressLoadingView;
@property(retain, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) ACCMusicModel *musicModel; // @synthesize musicModel=_musicModel;
@property(retain, nonatomic) AWEVideoPublishViewModel *nextPublishViewModel; // @synthesize nextPublishViewModel=_nextPublishViewModel;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
@property(nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property(retain, nonatomic) ACCRecordViewControllerInputData *inputData; // @synthesize inputData=_inputData;
- (void)addChangeSelectTimeBarIsNext:(_Bool)arg1;
- (_Bool)checkVideoRangeHasReachedMaxDuration;
- (void)videoRangeHasReachedMaxDuration;
- (void)videoRangeHasReachedMinDuration;
- (void)videoRangeDidChangByPosition:(double)arg1 movedType:(unsigned long long)arg2;
- (void)videoRangeDidEndByType:(unsigned long long)arg1;
- (void)videoRangeDidBeginByType:(unsigned long long)arg1;
- (_Bool)videoRangeIgnoreGesture;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)prefetchThumbnails;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)requestThumbnailForIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)convertCurrentPlaybackTimeToPosition:(double)arg1;
- (double)convertVideoPlayPositionToCurrent:(double)arg1;
- (void)removePlayerObserver;
- (void)observePlayerCurrentTime;
- (void)videoRestore;
- (void)videoPlay;
- (void)videoPause;
- (void)movieSeekToTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)movieSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)showPlayIcon:(_Bool)arg1 animated:(_Bool)arg2;
- (void)onPlayIconTapped:(id)arg1;
- (CDStruct_e83c9415)p_exportTimeRange;
- (void)transformToRecordVC;
- (void)p_exportClipVideo;
- (id)p_saveStitchExportAudio:(id)arg1;
- (void)p_exportAudioFromOriginVideoWithVideoUrl:(id)arg1;
- (void)p_findAudioSegmentWithFragmentAudio:(id)arg1 musicOriginUrl:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clickNextBtn:(id)arg1;
- (void)clickBackBtn:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (struct CGRect)playerViewFrame;
- (double)videoMaxSeconds;
- (double)videoMinSeconds;
- (void)removeTrimSelectBubble;
- (void)showTrimSelectBubble;
- (void)removeNextBubble;
- (void)showNextBubble;
- (void)showIntroducingAlert;
- (id)timesForSingleSegment:(id)arg1;
- (void)updateSingleThumbnails:(id)arg1;
- (void)configVideoSelectBar;
- (void)configTopView;
- (void)addEnterVideoStitchPageLog:(_Bool)arg1;
- (struct CGRect)maxPlayerFrameWithRotateType:(unsigned long long)arg1;
- (void)addNotificationObservers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

