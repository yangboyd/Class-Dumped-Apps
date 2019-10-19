//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCChatQuickCaptionDelegate-Protocol.h"
#import "SCFeatureCaption-Protocol.h"

@class NSString, SCCaptionManager, SCCaptionState, SCUserSession, UIView;
@protocol SCChatQuickCaptionDelegate, SCFeatureCaptionDelegate, SCFeatureContainerView;

@interface SCFeatureCaptionImpl : SCFeature <SCChatQuickCaptionDelegate, SCFeatureCaption, SCCameraGestureResponder>
{
    id <SCFeatureCaptionDelegate> _delegate;
    SCUserSession *_userSession;
    UIView<SCFeatureContainerView> *_containerView;
    UIView *_quickCaptionView;
    SCCaptionState *_captionState;
    SCCaptionManager *_captionManager;
    id <SCChatQuickCaptionDelegate> _quickCaptionDelegate;
}

@property(nonatomic) __weak id <SCChatQuickCaptionDelegate> quickCaptionDelegate; // @synthesize quickCaptionDelegate=_quickCaptionDelegate;
@property(retain, nonatomic) SCCaptionManager *captionManager; // @synthesize captionManager=_captionManager;
@property(retain, nonatomic) SCCaptionState *captionState; // @synthesize captionState=_captionState;
@property(retain, nonatomic) UIView *quickCaptionView; // @synthesize quickCaptionView=_quickCaptionView;
@property(retain, nonatomic) UIView<SCFeatureContainerView> *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <SCFeatureCaptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captionUpdatedWithText:(id)arg1;
- (void)forwardCameraOverlayTapGesture:(id)arg1;
- (void)configureWithView:(id)arg1;
- (id)initWithUserSession:(id)arg1 captionState:(id)arg2 quickCaptionDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

