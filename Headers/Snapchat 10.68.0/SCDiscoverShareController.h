//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, PreviewViewController, SCBaseUploadableChatMedia, SCDiscoverMediaBlob, SCDiscoverMediaMessagePrepper, SCExpandingPreviewAnimator, SCPreviewConfiguration, SCSendToTransitionProvider, SCUpdateListenerAnnouncer, SCUserSession, UIViewController;
@protocol SCDiscoverShareControllerDelegate, SCSendToScreen, SCStreamingMediaFetching;

@interface SCDiscoverShareController : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SendSnapNavigationControllerDelegate, SCUpdateAnnouncing>
{
    SCUserSession *_userSession;
    SCExpandingPreviewAnimator *_previewAnimator;
    UIViewController<SCSendToScreen> *_sendViewController;
    SCPreviewConfiguration *_previewConfiguration;
    SCBaseUploadableChatMedia *_discoverMedia;
    SCDiscoverMediaMessagePrepper *_discoverMediaMessagePrepper;
    UIViewController *_fromViewController;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCUpdateListenerAnnouncer *_fullscreenSendAnnouncer;
    id <SCStreamingMediaFetching> _streamingMediaFetcher;
    NSDictionary *_context;
    id <SCDiscoverShareControllerDelegate> _delegate;
    SCDiscoverMediaBlob *_blob;
    long long _messageBodyType;
    long long _state;
    PreviewViewController *_previewViewController;
}

+ (id)announcerIdentifier;
+ (id)selectRecipientConfiguration:(id)arg1;
@property(retain, nonatomic) PreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long messageBodyType; // @synthesize messageBodyType=_messageBodyType;
@property(retain, nonatomic) SCDiscoverMediaBlob *blob; // @synthesize blob=_blob;
@property(nonatomic) __weak id <SCDiscoverShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setState:(long long)arg1;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)_announceFullscreenSend;
- (void)_didDismissSendViewController;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
- (id)_previewConfigurationForImage:(id)arg1 snapSaverImageProvider:(CDUnknownBlockType)arg2 savingDisabled:(_Bool)arg3 snapPageSource:(long long)arg4;
- (id)_previewConfigurationForVideoURL:(id)arg1 videoSize:(struct CGSize)arg2 videoOverlayImage:(id)arg3 shareFrameMedia:(id)arg4 firstFrame:(id)arg5;
- (void)sendPressedFromMiniProfileFromViewController:(id)arg1 sendViewControllerNavigationDelegate:(id)arg2;
- (void)_sendPressedFromViewController:(id)arg1 sendViewControllerNavigationDelegate:(id)arg2 context:(id)arg3;
- (void)savePressedFromContextMenuFromViewController:(id)arg1 context:(id)arg2;
- (void)editPressedFromContextMenuFromViewController:(id)arg1;
- (void)sendPressedFromContextMenuFromViewController:(id)arg1 context:(id)arg2;
- (void)endDiscoverShare;
- (void)_dismissPreviewViewController;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didSaveSnapWithParameters:(id)arg1;
- (void)didSendDiscoverSharedMessageWithParameters:(id)arg1;
- (void)didCancelFromPreview:(id)arg1;
- (void)shareWithVideo:(id)arg1 overlayImages:(id)arg2 firstFrame:(id)arg3 shareFrameMedia:(id)arg4 fromViewController:(id)arg5 touchOrigin:(struct CGPoint)arg6 enableRotationalPreview:(_Bool)arg7;
- (void)shareWithImage:(id)arg1 overlayImages:(id)arg2 fromViewController:(id)arg3 touchOrigin:(struct CGPoint)arg4 snapSaverImageProvider:(CDUnknownBlockType)arg5 savingDisabled:(_Bool)arg6 snapPageSource:(long long)arg7;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

