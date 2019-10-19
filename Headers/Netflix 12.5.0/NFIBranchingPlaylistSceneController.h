//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFIBranchingSceneController.h"

#import "HTTPBatchRequestTaskDelegateProtocol-Protocol.h"
#import "NFIChoicePointOverlayDelegate-Protocol.h"
#import "NFIPlayerNavigatorDelegate-Protocol.h"
#import "NFPlaylistPlayerDelegate-Protocol.h"
#import "NFUITouchGestureDelegate-Protocol.h"

@class NFIChoiceModel, NFIChoicePointOverlayView, NFICountdownView, NFIPlayerNavigatorView, NFISegmentModel, NFUITouchGestureRecognizer, NSArray, NSLayoutConstraint, NSMutableDictionary, NSNumber, NSString, UIImageView, UIView;

@interface NFIBranchingPlaylistSceneController : NFIBranchingSceneController <NFIChoicePointOverlayDelegate, NFIPlayerNavigatorDelegate, HTTPBatchRequestTaskDelegateProtocol, NFUITouchGestureDelegate, NFPlaylistPlayerDelegate>
{
    _Bool _choicePointActive;
    _Bool _userActivated;
    NSArray *_cuepointQueue;
    NFISegmentModel *_activeSegment;
    NFIChoicePointOverlayView *_choicePointOverlay;
    NFICountdownView *_countdownView;
    NFIPlayerNavigatorView *_playerControls;
    UIView *_videoHitArea;
    NFUITouchGestureRecognizer *_gestureRecognizer;
    NSArray *_verticalConstraints;
    NSLayoutConstraint *_playPauseVerticalConstraint;
    NFIChoiceModel *_selectedChoice;
    NSMutableDictionary *_playbackMap;
    UIImageView *_pugImageView;
    long long _loopCount;
    NSString *_xid;
    NSNumber *_choiceNavPresentationSessionId;
    NSNumber *_countdownSessionId;
    NSNumber *_videoSegmentSessionId;
    unsigned long long _playerState;
}

@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) NSNumber *videoSegmentSessionId; // @synthesize videoSegmentSessionId=_videoSegmentSessionId;
@property(retain, nonatomic) NSNumber *countdownSessionId; // @synthesize countdownSessionId=_countdownSessionId;
@property(retain, nonatomic) NSNumber *choiceNavPresentationSessionId; // @synthesize choiceNavPresentationSessionId=_choiceNavPresentationSessionId;
@property(copy, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) _Bool userActivated; // @synthesize userActivated=_userActivated;
@property(retain, nonatomic) UIImageView *pugImageView; // @synthesize pugImageView=_pugImageView;
@property(retain, nonatomic) NSMutableDictionary *playbackMap; // @synthesize playbackMap=_playbackMap;
@property(retain, nonatomic) NFIChoiceModel *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(nonatomic) _Bool choicePointActive; // @synthesize choicePointActive=_choicePointActive;
@property(retain, nonatomic) NSLayoutConstraint *playPauseVerticalConstraint; // @synthesize playPauseVerticalConstraint=_playPauseVerticalConstraint;
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) NFUITouchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UIView *videoHitArea; // @synthesize videoHitArea=_videoHitArea;
@property(retain, nonatomic) NFIPlayerNavigatorView *playerControls; // @synthesize playerControls=_playerControls;
@property(retain, nonatomic) NFICountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) NFIChoicePointOverlayView *choicePointOverlay; // @synthesize choicePointOverlay=_choicePointOverlay;
@property(retain, nonatomic) NFISegmentModel *activeSegment; // @synthesize activeSegment=_activeSegment;
@property(retain, nonatomic) NSArray *cuepointQueue; // @synthesize cuepointQueue=_cuepointQueue;
- (void).cxx_destruct;
- (void)setupPugAnimations:(id)arg1;
- (void)animatePug;
- (void)displayIPP;
- (id)nextSegmentWeights;
- (_Bool)player:(id)arg1 shouldPerformSpeculativePreparationForNextSegmentsAfterSegment:(id)arg2;
- (id)player:(id)arg1 webVTTStyleURLStringForSegment:(id)arg2;
- (void)player:(id)arg1 didStartSegment:(id)arg2 atStartTime:(double)arg3;
- (void)dealloc;
- (void)handleBranchingBecomeActiveNotification:(id)arg1;
- (void)handleBranchingBecomeInactiveNotification:(id)arg1;
- (void)endCountdownSession:(id)arg1 userInitiated:(_Bool)arg2;
- (void)endVideoSegmentSession;
- (void)logVideoSegmentSession:(id)arg1;
- (void)logSegmentImpression:(id)arg1;
- (id)loggingView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)batchRequestAllTasksDidFinish:(id)arg1;
- (void)batchRequest:(id)arg1 taskDidFinish:(id)arg2;
- (void)resetSubtitle;
- (void)positionSubtitle:(double)arg1;
- (void)choiceNavigatorStateChanged:(long long)arg1;
- (void)didSelectSegment:(id)arg1 time:(double)arg2;
- (void)didSelectSegment:(id)arg1;
- (void)didSelectChoice:(id)arg1;
- (void)currentSelectedChoice:(id)arg1 userInitiated:(_Bool)arg2;
- (void)immediatelySelectedChoice:(id)arg1;
- (void)didSelectChoice:(id)arg1 atIndex:(long long)arg2;
- (id)nextSegmentId;
- (void)countdownAnimationComplete;
- (void)choiceSelectedLazily:(id)arg1;
- (void)hideChoicePointUI;
- (void)choicePointEnded;
- (void)playbackReady:(id)arg1;
- (void)playNextBranchingEpisode:(id)arg1 trackId:(id)arg2;
- (void)navigateToSegment:(id)arg1 startTime:(double)arg2;
- (void)navigateToTimeMs:(double)arg1;
- (void)navigateToSegmentId:(id)arg1;
- (void)updateNextSegmnent;
- (struct CGRect)forceCenter:(struct CGRect)arg1;
- (void)setViewPortRect:(struct CGRect)arg1;
- (_Bool)nearingChoicePointStart;
- (double)canSeekForward:(double)arg1;
- (double)canSeekBack:(double)arg1;
- (id)currentSegment;
- (id)currentSegmentId;
- (void)videoHitAreaEnabled:(_Bool)arg1;
- (double)ratio;
- (void)layoutPlayerControls;
- (void)playbackToggled;
- (void)playerControlsVisibilityUpdated:(_Bool)arg1;
- (void)playerStateChanged:(unsigned long long)arg1 previousState:(unsigned long long)arg2;
- (void)updateCurrentTime:(float)arg1;
- (void)prefetchContent;
- (void)layoutScene;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

