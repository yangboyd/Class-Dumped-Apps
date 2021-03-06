//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTFullscreenEngagementCompanionRenderingSurface-Protocol.h"
#import "YTFullscreenEngagementOverlayViewDelegate-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"
#import "YTRelatedVideosViewControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTColdConfig, YTFullscreenEngagementActionBarController, YTFullscreenEngagementOverlayView, YTFullscreenMetadataHighlightsCollectionViewController, YTIFullscreenEngagementCompanionRenderer, YTIFullscreenEngagementOverlayRenderer, YTRelatedVideosViewController;
@protocol YTFullscreenEngagementOverlayControllerDelegate, YTResponder, YTVideoPlayerOverlayConfig;

@interface YTFullscreenEngagementOverlayController : NSObject <YTFullscreenEngagementOverlayViewDelegate, YTHotConfigObserver, YTRelatedVideosViewControllerDelegate, YTResponder, YTFullscreenEngagementCompanionRenderingSurface>
{
    YTFullscreenEngagementOverlayView *_overlayView;
    YTIFullscreenEngagementOverlayRenderer *_engagementOverlayRenderer;
    YTFullscreenMetadataHighlightsCollectionViewController *_metadataHighlightsCollectionViewController;
    YTRelatedVideosViewController *_relatedVideosViewController;
    YTFullscreenEngagementActionBarController *_actionBarController;
    YTColdConfig *_coldConfig;
    id <YTVideoPlayerOverlayConfig> _videoPlayerOverlayConfig;
    YTIFullscreenEngagementCompanionRenderer *_metadataHighlightCompanionAd;
    _Bool _enabled;
    _Bool _expanded;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTFullscreenEngagementOverlayControllerDelegate> _delegate;
}

+ (id)createMergedOverlayRendererFromOverlayRenderer:(id)arg1 companionAd:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <YTFullscreenEngagementOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)updateMetadataHighlights;
- (void)setCompanionAdRenderer:(id)arg1;
- (void)didClearAdLayout;
- (void)didReceiveAdLayout:(id)arg1;
- (void)relatedVideosControllerDidEndUserExpanding;
- (void)relatedVideosControllerDidBeginUserExpanding;
- (void)relatedVideosWillChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)playerControlsBehaviorDidChange:(id)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (void)fullscreenEngagementView:(id)arg1 didTapOverflowButton:(id)arg2;
- (void)fullscreenEngagementView:(id)arg1 didTapCloseButton:(id)arg2;
@property(readonly, nonatomic) YTFullscreenEngagementOverlayView *overlayView;
- (void)didPanBackground:(id)arg1;
- (long long)playerControlsBehavior;
- (void)setRelatedVideosVisible:(_Bool)arg1;
- (double)collapsedHeight;
- (void)setPlayerViewLayout:(int)arg1;
@property(nonatomic, getter=isExpandInteractionDisabled) _Bool expandInteractionDisabled;
@property(readonly, nonatomic) _Bool isUserExpanding;
- (_Bool)isEngagementOverlayAvailable;
- (void)setPlayerOverlayRenderer:(id)arg1 contentCPN:(id)arg2;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

