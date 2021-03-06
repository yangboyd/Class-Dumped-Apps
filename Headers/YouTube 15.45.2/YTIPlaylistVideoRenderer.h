//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTClientBindingData-Protocol.h>
#import <Module_Framework/YTRendererForOfflineVideo-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIIosClientOfflineData, YTIMainAppCompactRendererStyle, YTIMenuSupportedRenderers, YTIPlaylistVideoBindingSupportedDatas, YTIPlaylistVideoOfflineabilitySupportedRenderers, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIUpcomingEventData, YTIVideoClientBindingData;

@interface YTIPlaylistVideoRenderer : GPBMessage <YTRendererForOfflineVideo, YTClientBindingData>
{
}

+ (id)descriptor;
+ (id)playlistVideoRendererWithOfflineVideoData:(id)arg1 playlistID:(id)arg2 index:(unsigned long long)arg3 useOfflineWatchNavigationEndpoint:(_Bool)arg4 shouldBadgeWatchPercent:(_Bool)arg5;
+ (id)playlistVideoRendererWithOfflineVideo:(id)arg1 playlistID:(id)arg2 index:(unsigned long long)arg3 offlineMode:(_Bool)arg4 useOfflineWatchNavigationEndpoint:(_Bool)arg5 shouldBadgeWatchPercent:(_Bool)arg6;
+ (_Bool)supportsOfflineResumePlayback;
@property(readonly, nonatomic) YTIVideoClientBindingData *videoClientBindingData;
@property(readonly, nonatomic) _Bool hasVideoClientBindingData;
- (void)setIosClientOfflineData:(id)arg1;
@property(readonly, nonatomic) YTIIosClientOfflineData *iosClientOfflineData;
@property(readonly, nonatomic) _Bool hasIosClientOfflineData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *bindingPlaylistID;
@property(readonly, nonatomic) NSString *bindingVideoID;

// Remaining properties
@property(copy, nonatomic) NSString *annotation; // @dynamic annotation;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIPlaylistVideoBindingSupportedDatas *binding; // @dynamic binding;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge; // @dynamic bottomStandaloneBadge;
@property(nonatomic) float clipEndSeconds; // @dynamic clipEndSeconds;
@property(nonatomic) float clipStartSeconds; // @dynamic clipStartSeconds;
@property(retain, nonatomic) YTIThumbnailDetails *contributorAvatar; // @dynamic contributorAvatar;
@property(retain, nonatomic) YTICommand *contributorChannelEndpoint; // @dynamic contributorChannelEndpoint;
@property(retain, nonatomic) YTIFormattedString *contributorName; // @dynamic contributorName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAnnotation; // @dynamic hasAnnotation;
@property(nonatomic) _Bool hasBinding; // @dynamic hasBinding;
@property(nonatomic) _Bool hasBottomStandaloneBadge; // @dynamic hasBottomStandaloneBadge;
@property(nonatomic) _Bool hasClipEndSeconds; // @dynamic hasClipEndSeconds;
@property(nonatomic) _Bool hasClipStartSeconds; // @dynamic hasClipStartSeconds;
@property(nonatomic) _Bool hasContributorAvatar; // @dynamic hasContributorAvatar;
@property(nonatomic) _Bool hasContributorChannelEndpoint; // @dynamic hasContributorChannelEndpoint;
@property(nonatomic) _Bool hasContributorName; // @dynamic hasContributorName;
@property(nonatomic) _Bool hasIndex; // @dynamic hasIndex;
@property(nonatomic) _Bool hasIsPlayable; // @dynamic hasIsPlayable;
@property(nonatomic) _Bool hasIsWatched; // @dynamic hasIsWatched;
@property(nonatomic) _Bool hasLengthSeconds; // @dynamic hasLengthSeconds;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasMainAppStyle; // @dynamic hasMainAppStyle;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfferButton; // @dynamic hasOfferButton;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPlaylistSegment; // @dynamic hasPlaylistSegment;
@property(nonatomic) _Bool hasReorderHint; // @dynamic hasReorderHint;
@property(nonatomic) _Bool hasSetVideoId; // @dynamic hasSetVideoId;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasStandaloneBadge; // @dynamic hasStandaloneBadge;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTopStandaloneBadge; // @dynamic hasTopStandaloneBadge;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpcomingEventData; // @dynamic hasUpcomingEventData;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(retain, nonatomic) YTIFormattedString *index; // @dynamic index;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(nonatomic) _Bool isWatched; // @dynamic isWatched;
@property(nonatomic) unsigned long long lengthSeconds; // @dynamic lengthSeconds;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTIMainAppCompactRendererStyle *mainAppStyle; // @dynamic mainAppStyle;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIButtonSupportedRenderers *offerButton; // @dynamic offerButton;
@property(retain, nonatomic) YTIPlaylistVideoOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) YTIRenderer *playlistSegment; // @dynamic playlistSegment;
@property(retain, nonatomic) YTIRenderer *reorderHint; // @dynamic reorderHint;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(copy, nonatomic) NSString *setVideoId; // @dynamic setVideoId;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge; // @dynamic standaloneBadge;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *swipeButtonsArray; // @dynamic swipeButtonsArray;
@property(readonly, nonatomic) unsigned long long swipeButtonsArray_Count; // @dynamic swipeButtonsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *thumbnailOverlaysArray; // @dynamic thumbnailOverlaysArray;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count; // @dynamic thumbnailOverlaysArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge; // @dynamic topStandaloneBadge;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIUpcomingEventData *upcomingEventData; // @dynamic upcomingEventData;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

