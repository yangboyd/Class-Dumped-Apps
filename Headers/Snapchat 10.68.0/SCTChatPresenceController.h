//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTPresenceController.h"

#import "SCTChatPresenceBarDelegate-Protocol.h"
#import "SCTChatPresenceController-Protocol.h"
#import "SCTPresencePillSelectionListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, NSTimer, SCTChatPresenceBar, SCTChatPresenceParticipant, SCTV3SpeechActivityListenerAnnouncer;
@protocol SCTPresencePillTapListener, SCTV3ChatServices, SCTalkUIController;

@interface SCTChatPresenceController : SCTPresenceController <UIScrollViewDelegate, UIGestureRecognizerDelegate, SCTPresencePillSelectionListener, SCTChatPresenceBarDelegate, SCTraceEnabled, SCTChatPresenceController>
{
    SCTV3SpeechActivityListenerAnnouncer *_speechActivityAnnouncer;
    id <SCTPresencePillTapListener> _presencePillTapListener;
    id <SCTV3ChatServices> _chatServices;
    id <SCTalkUIController> _talkUIController;
    SCTChatPresenceBar *_view;
    SCTChatPresenceParticipant *_tappedParticipant;
    struct CGPoint _pillPressBeginLocation;
    CDUnknownBlockType _postponedUserSelection;
    CDUnknownBlockType _postponedPillTapReport;
    long long _uiUpdateState;
    _Bool _waitingForPillTapReportCompletion;
    NSTimer *_longPressTimer;
}

@property(readonly, nonatomic) __weak id <SCTalkUIController> talkUIController; // @synthesize talkUIController=_talkUIController;
- (void).cxx_destruct;
- (void)didReceiveCognacChatDockEvent:(id)arg1;
- (void)_performPostponedPillTapReportIfNeeded;
- (void)_reportPillTapLongPressed:(_Bool)arg1;
- (id)_selectedParticipant;
- (id)_participantFromPillPressRecognizer;
- (id)_createExpansionTimerWithPill:(id)arg1 duration:(double)arg2 targetState:(struct SCTPresenceBitmojiState)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_processLongPress;
- (void)_cancelLongPressProcessing;
- (void)_scheduleLongPressProcessing;
- (void)_selectTappedParticipant;
- (void)_cancelTappedParticipantSelection;
- (void)_scheduleTappedParticipantSelection;
- (void)_pillPressedRecognized:(id)arg1;
- (void)_processDragEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processDragMove;
- (id)_createDragContextWithPoint:(struct CGPoint)arg1;
- (void)_performPostponedUserSelectionIfNeeded;
- (void)_resumeUIUpdates;
- (void)_pauseUIUpdatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_panGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateSelection:(_Bool)arg1 forParticipant:(id)arg2;
- (id)_createParticipantWithUsername:(id)arg1 displayName:(id)arg2 uniqueLabel:(id)arg3 presenceColor:(id)arg4 bitmojiAvatarId:(id)arg5;
- (void)_updateToHeight:(double)arg1;
- (void)_animateToHeight:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_orderedParticipants;
- (id)_pillForUsername:(id)arg1;
- (void)_performExitFullscreenAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performEnterFullscreenAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performChangePresenceOrderAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performChangeMediaAnimationForState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createPillView;
- (void)presencePill:(id)arg1 selectionChanged:(_Bool)arg2;
- (id)animationsForState:(id)arg1;
- (void)enumerateVideoViews:(CDUnknownBlockType)arg1;
- (void)reattachVideoView:(id)arg1 forUsername:(id)arg2;
- (id)fullscreenLayoutPreviewInfoForUsername:(id)arg1;
- (id)presenceBarPane;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)orderedParticipants;
- (void)TECHDEBT_setPresencePillTapListener:(id)arg1;
- (_Bool)presenceBar:(id)arg1 pointInside:(struct CGPoint)arg2;
- (void)_scheduleUIUpdate;
- (id)_participantForUsername:(id)arg1;
- (void)_initView;
@property(readonly, nonatomic) SCTChatPresenceBar *view;
- (id)initWithAvatarServices:(id)arg1 chatServices:(id)arg2 talkUIController:(id)arg3 speechActivityAnnouncer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

