//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>
#import <InstagramAppCoreFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class IGDirectVisualMessageViewerController, IGUserSession, NSString;
@protocol IGDirectVisualMessageViewerPresentationManagerContextDelegate, IGDirectVisualMessageViewerPresentationManagerListenerAnnouncer, NSObject;

@interface IGDirectVisualMessageViewerPresentationManager : NSObject <UIViewControllerTransitioningDelegate, IGUserSessionObject>
{
    IGUserSession *_userSession;
    IGDirectVisualMessageViewerController *_viewer;
    id <NSObject> _contextIdentifier;
    _Bool _isPreloading;
    id <IGDirectVisualMessageViewerPresentationManagerListenerAnnouncer> _annoucer;
    id <IGDirectVisualMessageViewerPresentationManagerContextDelegate> _contextDelegate;
}

- (void).cxx_destruct;
- (void)_clearPreloadContextIdentifier;
- (void)_beginPreloadingForCurrentContextIdentifier;
- (void)_handleCleanup;
- (void)_presentViewer:(id)arg1 sourceController:(id)arg2 contextIdentifier:(id)arg3 contextDelegate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_loadMediaForVisualMessage:(id)arg1 threadId:(id)arg2 service:(id)arg3 viewer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (long long)maxViewerLimit;
- (id)currentPreloadContextIdentifier;
- (void)cancelPresentationForContextDelegate:(id)arg1;
- (void)_prepareVisualMessageViewerForThread:(id)arg1 threadId:(id)arg2 visualMessage:(id)arg3 suppliedWindowOfVisualMessages:(id)arg4 threadService:(id)arg5 entryPoint:(long long)arg6 contextIdentifier:(id)arg7 contextDelegate:(id)arg8 autoLoopingMode:(unsigned long long)arg9 analyticsModule:(id)arg10 completion:(CDUnknownBlockType)arg11 viewerPreloadCompletion:(CDUnknownBlockType)arg12;
- (void)prepareVisualMessageViewerForThreadId:(id)arg1 visualMessage:(id)arg2 suppliedWindowOfVisualMessages:(id)arg3 threadService:(id)arg4 entryPoint:(long long)arg5 contextIdentifier:(id)arg6 contextDelegate:(id)arg7 autoLoopingMode:(unsigned long long)arg8 analyticsModule:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)presentVisualMessageViewerForThreadId:(id)arg1 visualMessage:(id)arg2 suppliedWindowOfVisualMessages:(id)arg3 threadService:(id)arg4 entryPoint:(long long)arg5 sourceController:(id)arg6 contextIdentifier:(id)arg7 contextDelegate:(id)arg8 autoLoopingMode:(unsigned long long)arg9 analyticsModule:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

