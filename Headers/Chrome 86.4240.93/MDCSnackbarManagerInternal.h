//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDCSnackbarManager, MDCSnackbarMessageView, MDCSnackbarOverlayView, NSMutableArray, NSMutableDictionary, UIView;
@protocol MDCSnackbarManagerDelegate;

@interface MDCSnackbarManagerInternal : NSObject
{
    _Bool _isVoiceOverRunningOverride;
    _Bool _showingMessage;
    MDCSnackbarManager *_manager;
    NSMutableArray *_pendingMessages;
    NSMutableDictionary *_suspensionTokens;
    MDCSnackbarOverlayView *_overlayView;
    UIView *_presentationHostView;
    MDCSnackbarMessageView *_currentSnackbar;
    id <MDCSnackbarManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MDCSnackbarManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showingMessage; // @synthesize showingMessage=_showingMessage;
@property(retain, nonatomic) MDCSnackbarMessageView *currentSnackbar; // @synthesize currentSnackbar=_currentSnackbar;
@property(retain, nonatomic) UIView *presentationHostView; // @synthesize presentationHostView=_presentationHostView;
@property(retain, nonatomic) MDCSnackbarOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSMutableDictionary *suspensionTokens; // @synthesize suspensionTokens=_suspensionTokens;
@property(retain, nonatomic) NSMutableArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(nonatomic) __weak MDCSnackbarManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool isVoiceOverRunningOverride; // @synthesize isVoiceOverRunningOverride=_isVoiceOverRunningOverride;
- (void)removeSuspensionIdentifierMainThread:(id)arg1 forCategory:(id)arg2;
- (void)addSuspensionIdentifierMainThread:(id)arg1 forCategory:(id)arg2;
- (_Bool)categorySuspended:(id)arg1;
- (_Bool)allMessagesSuspendedMainThread;
- (void)dismissAndCallCompletionBlocksOnMainThreadWithCategory:(id)arg1;
- (void)showMessageMainThread:(id)arg1;
- (void)deactivateOverlay:(id)arg1;
- (id)bestGuessWindow;
- (void)activateOverlay:(id)arg1 forMessage:(id)arg2;
- (_Bool)isSnackbarTransient:(id)arg1;
- (_Bool)isVoiceOverRunning;
- (void)hideSnackbarViewReally:(id)arg1 withAction:(id)arg2 userPrompted:(_Bool)arg3;
- (void)displaySnackbarViewForMessage:(id)arg1;
- (void)showNextMessageIfNecessaryMainThread;
- (id)dequeueNextShowableMessageMainThread;
- (_Bool)shouldShowMessageRightNowMainThread:(id)arg1;
- (id)initWithSnackbarManager:(id)arg1;

@end

