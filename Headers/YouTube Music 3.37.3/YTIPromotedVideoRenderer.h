//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTEngagementToolbarViewModel-Protocol.h"
#import "YTVideoViewModel-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIActiveViewDisplayMeasurement, YTIChannelThumbnailSupportedRenderers, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIPromotedVideoCTASupportedRenderers, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData;

@interface YTIPromotedVideoRenderer : GPBMessage <YTEngagementToolbarViewModel, YTVideoViewModel>
{
}

+ (id)descriptor;
- (id)createStoryRenderer;
- (_Bool)hasCreateStoryRenderer;
- (_Bool)isPostsV2Enabled;
- (id)engagementToolbarStyle;
- (_Bool)hasEngagementToolbarStyle;
- (id)likeText;
- (_Bool)replyButtonHidden;
- (id)overflowMenuRenderer;
- (_Bool)hasOverflowMenuRenderer;
- (id)creatorHeartRenderer;
- (_Bool)hasCreatorHeartRenderer;
- (id)banButtonRenderer;
- (_Bool)hasBanButtonRenderer;
- (id)removeButtonRenderer;
- (_Bool)hasRemoveButtonRenderer;
- (id)reportButtonRenderer;
- (_Bool)hasReportButtonRenderer;
- (id)approveButtonRenderer;
- (_Bool)hasApproveButtonRenderer;
- (id)liveChatButtonRenderer;
- (_Bool)hasLiveChatButtonRenderer;
- (id)replyButtonRenderer;
- (_Bool)hasReplyButtonRenderer;
- (id)dislikeButtonRenderer;
- (_Bool)hasDislikeButtonRenderer;
- (id)likeButtonRenderer;
- (_Bool)hasLikeButtonRenderer;
@property(readonly, nonatomic) _Bool isAd;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *thumbnailBadgesArray;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) _Bool hasPresentationStyle;
@property(readonly, nonatomic) int presentationStyle;
@property(readonly, nonatomic) _Bool hasUpcomingEventData;
@property(readonly, nonatomic) YTIUpcomingEventData *upcomingEventData;
@property(readonly, nonatomic) YTIFormattedString *secondaryHeadline;
@property(readonly, nonatomic) _Bool hasSecondaryHeadline;
@property(readonly, nonatomic) _Bool hasIsWatched;
@property(readonly, nonatomic) _Bool isWatched;
@property(readonly, nonatomic) _Bool hasOwnerText;
@property(readonly, nonatomic) YTIFormattedString *ownerText;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasShortViewCountText;
@property(readonly, nonatomic) YTIFormattedString *shortViewCountText;
@property(readonly, nonatomic) YTIFormattedString *recommendationText;
@property(readonly, nonatomic) _Bool hasRecommendationText;
@property(readonly, nonatomic) NSMutableArray *badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count;
@property(readonly, nonatomic) _Bool hasPublishedTimeText;
@property(readonly, nonatomic) YTIFormattedString *publishedTimeText;
@property(readonly, nonatomic) YTIFormattedString *descriptionP;
@property(readonly, nonatomic) _Bool hasDescriptionP;
@property(readonly, nonatomic) _Bool hasChannelThumbnailSupportedRenderers;
@property(readonly, nonatomic) YTIChannelThumbnailSupportedRenderers *channelThumbnailSupportedRenderers;

// Remaining properties
@property(retain, nonatomic) YTIActiveViewDisplayMeasurement *activeView; // @dynamic activeView;
@property(copy, nonatomic) NSString *adPlaybackContextParams; // @dynamic adPlaybackContextParams;
@property(retain, nonatomic) YTICommand *channelEndpoint; // @dynamic channelEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(retain, nonatomic) NSMutableArray *clickTrackingUrlsArray; // @dynamic clickTrackingUrlsArray;
@property(readonly, nonatomic) unsigned long long clickTrackingUrlsArray_Count; // @dynamic clickTrackingUrlsArray_Count;
@property(retain, nonatomic) YTIPromotedVideoCTASupportedRenderers *ctaRenderer; // @dynamic ctaRenderer;
@property(copy, nonatomic) NSString *debugAdTag; // @dynamic debugAdTag;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasActiveView; // @dynamic hasActiveView;
@property(nonatomic) _Bool hasAdPlaybackContextParams; // @dynamic hasAdPlaybackContextParams;
@property(nonatomic) _Bool hasChannelEndpoint; // @dynamic hasChannelEndpoint;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasCtaRenderer; // @dynamic hasCtaRenderer;
@property(nonatomic) _Bool hasDebugAdTag; // @dynamic hasDebugAdTag;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSMutableArray *impressionUrlsArray; // @dynamic impressionUrlsArray;
@property(readonly, nonatomic) unsigned long long impressionUrlsArray_Count; // @dynamic impressionUrlsArray_Count;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(nonatomic) int style; // @dynamic style;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end

