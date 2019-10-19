//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageMessageOverlayViewDelegate-Protocol.h"
#import "SPTNavigationManagerDelegate-Protocol.h"

@class NSString, SPTInAppMessageNoteMessageOverlayView, SPTNavigationManager, UILayoutGuide, UINavigationController;
@protocol SPTMetaViewController;

@interface SPTInAppMessageNotePresentationManager : NSObject <SPTNavigationManagerDelegate, SPTInAppMessageMessageOverlayViewDelegate>
{
    _Bool _presentingNote;
    id <SPTMetaViewController> _metaViewController;
    UILayoutGuide *_mainContentLayoutGuideProvider;
    SPTNavigationManager *_navigationManager;
    UINavigationController *_selectedViewController;
    SPTInAppMessageNoteMessageOverlayView *_noteMessageOverlayView;
}

@property(retain, nonatomic) SPTInAppMessageNoteMessageOverlayView *noteMessageOverlayView; // @synthesize noteMessageOverlayView=_noteMessageOverlayView;
@property(retain, nonatomic) UINavigationController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(retain, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) UILayoutGuide *mainContentLayoutGuideProvider; // @synthesize mainContentLayoutGuideProvider=_mainContentLayoutGuideProvider;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic, getter=isPresentingNote) _Bool presentingNote; // @synthesize presentingNote=_presentingNote;
- (void).cxx_destruct;
- (_Bool)isNowPlayingViewController:(id)arg1;
- (void)userSwipedNoteAway;
- (void)removeNoteMessageOverlay;
- (void)navigationManager:(id)arg1 didNavigateFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)dismissNoteMessageView;
- (void)presentNoteMessageView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setupNoteMessageOverlayView;
- (void)dealloc;
- (id)initWithMetaViewController:(id)arg1 mainContentLayoutGuideProvider:(id)arg2 navigationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

