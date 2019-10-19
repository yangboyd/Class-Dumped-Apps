//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptionDelegate-Protocol.h"
#import "SCTouchControllable-Protocol.h"

@class NSArray, NSString, SCCaptionState;
@protocol SCCaption, SCCaptionManagerDelegate;

@interface SCCaptionManager : NSObject <SCCaptionDelegate, SCTouchControllable>
{
    _Bool _userDidCycleAllCaptionModes;
    _Bool _isLagunaMedia;
    id <SCCaptionManagerDelegate> _delegate;
    NSArray *_captionModes;
    id <SCCaption> _caption;
    long long _currentModeIndex;
    long long _numberOfCaptionModesCycled;
    SCCaptionState *_initialState;
    SCCaptionState *_temporaryState;
    struct CGRect _originalContentBounds;
    struct CGAffineTransform _currentTransform;
}

+ (id)captionModeForLogging:(_Bool)arg1 alignment:(long long)arg2;
@property(nonatomic) struct CGAffineTransform currentTransform; // @synthesize currentTransform=_currentTransform;
@property(nonatomic) _Bool isLagunaMedia; // @synthesize isLagunaMedia=_isLagunaMedia;
@property(nonatomic) struct CGRect originalContentBounds; // @synthesize originalContentBounds=_originalContentBounds;
@property(retain, nonatomic) SCCaptionState *temporaryState; // @synthesize temporaryState=_temporaryState;
@property(retain, nonatomic) SCCaptionState *initialState; // @synthesize initialState=_initialState;
@property(nonatomic) long long numberOfCaptionModesCycled; // @synthesize numberOfCaptionModesCycled=_numberOfCaptionModesCycled;
@property(nonatomic) long long currentModeIndex; // @synthesize currentModeIndex=_currentModeIndex;
@property(retain, nonatomic) id <SCCaption> caption; // @synthesize caption=_caption;
@property(nonatomic) _Bool userDidCycleAllCaptionModes; // @synthesize userDidCycleAllCaptionModes=_userDidCycleAllCaptionModes;
@property(copy, nonatomic) NSArray *captionModes; // @synthesize captionModes=_captionModes;
@property(nonatomic) __weak id <SCCaptionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)shareLoggingParameters;
- (void)setContainerViewTransform:(struct CGAffineTransform)arg1 pauseTransform:(_Bool)arg2;
- (void)setLagunaMedia:(_Bool)arg1;
- (void)updateColor:(id)arg1;
- (void)didSwipeLeftOnCaption;
- (void)didSwipeRightOnCaption;
- (void)textChanged;
- (void)didStartEditingCaption:(id)arg1;
- (void)stoppedEditing;
- (void)prepareCaptionEditing;
- (_Bool)canStartEditingCaption;
- (void)viewDidLayoutSubviewsWithSuperviewBounds:(struct CGRect)arg1 superviewContentBounds:(struct CGRect)arg2;
- (struct CGRect)screenshotFrame;
- (id)screenshotImageView;
- (struct CGRect)frame;
- (id)imageFromView;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pinch:(id)arg1;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (void)startEditing;
- (void)stopEditing;
- (void)setHidden:(_Bool)arg1;
- (void)setText:(id)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)clearCaptionCycleState;
- (id)bigTextCaptionView;
- (_Bool)captionPresent;
- (id)attributedText;
- (id)text;
- (_Bool)isCaptionTracking;
- (_Bool)isFullscreen;
- (_Bool)isEditing;
- (_Bool)isHidden;
- (id)state;
- (void)cleanUpLastMode;
- (id)currentView;
- (id)newViewForCurrentCaptionModeWithSuperviewBounds:(struct CGRect)arg1 superviewContentBounds:(struct CGRect)arg2;
- (void)nextMode;
- (id)videoTrackedImageWithCroppingAspectRatio:(double)arg1;
- (id)initWithCaptionModes:(id)arg1 captionState:(id)arg2 originalContentBounds:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

