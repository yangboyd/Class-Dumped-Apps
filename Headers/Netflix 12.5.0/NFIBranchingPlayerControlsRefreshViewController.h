//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerControlsRefreshViewController.h"

@class NFUIPlayerControlsFooterViewRefresh, NFUIPlayerControlsMainView, NSMutableArray, UITouch, UIView;
@protocol NFUIPlayerControlsDelegate><NFIBranchingPlayerControlsRefreshDelegate;

@interface NFIBranchingPlayerControlsRefreshViewController : NFUIPlayerControlsRefreshViewController
{
    _Bool _autoHideEnabled;
    _Bool _initialTimeoutSet;
    _Bool _choicePointActive;
    NFUIPlayerControlsMainView *_mainControlsView;
    NFUIPlayerControlsFooterViewRefresh *_footerControlsView;
    UIView *_shim;
    NSMutableArray *_controlSubviews;
    UITouch *_trackedTouchOnControls;
}

@property(nonatomic) _Bool choicePointActive; // @synthesize choicePointActive=_choicePointActive;
@property(nonatomic) _Bool initialTimeoutSet; // @synthesize initialTimeoutSet=_initialTimeoutSet;
@property(nonatomic) __weak UITouch *trackedTouchOnControls; // @synthesize trackedTouchOnControls=_trackedTouchOnControls;
@property(retain, nonatomic) NSMutableArray *controlSubviews; // @synthesize controlSubviews=_controlSubviews;
@property(nonatomic) _Bool autoHideEnabled; // @synthesize autoHideEnabled=_autoHideEnabled;
@property(nonatomic) __weak UIView *shim; // @synthesize shim=_shim;
@property(retain, nonatomic) NFUIPlayerControlsFooterViewRefresh *footerControlsView; // @synthesize footerControlsView=_footerControlsView;
@property(retain, nonatomic) NFUIPlayerControlsMainView *mainControlsView; // @synthesize mainControlsView=_mainControlsView;
- (void).cxx_destruct;
- (void)didPinchWithGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)showControlsSubviews:(id)arg1 animated:(_Bool)arg2;
- (void)showControls;
- (void)forwardByTimeInterval:(double)arg1;
- (void)rewindByTimeInterval:(double)arg1;
- (void)hideControls;
- (void)hideControls:(id)arg1;
- (void)hideControlsSubviews:(id)arg1 animated:(_Bool)arg2;
- (void)startAutoHideControlsTimer;
- (void)playerControllerReady:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)setDoubleTapGestureEnabled:(_Bool)arg1;
- (void)forceHideControlsIntoChoicePoint;
- (void)forceHideControls;
- (void)enableControls;
- (void)initialSegmentReady;
- (void)setMainControlsHidden:(_Bool)arg1;
- (id)getDoubleTapGestureRecognizer;
- (void)playPauseAction:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <NFUIPlayerControlsDelegate><NFIBranchingPlayerControlsRefreshDelegate> delegate; // @dynamic delegate;

@end

