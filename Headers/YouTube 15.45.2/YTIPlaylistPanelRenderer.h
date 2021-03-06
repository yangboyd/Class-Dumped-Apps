//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderer-Protocol.h>
#import <Module_Framework/YTInnerTubeSectionRenderers-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIAutomixTunerControlSupportedRenderers, YTICommand, YTIFormattedString, YTILikeButtonSupportedRenderers, YTIMenuSupportedRenderers, YTIPlaylistPanelButtonSupportedRenderers, YTIPlaylistPanelRenderer_PlaylistPanelOfflineabilitySupportedRenderers, YTIPlaylistPanelShareButtonSupportedRenderers, YTIPlaylistSaveButtonSupportedRenderers, YTIRenderer;

@interface YTIPlaylistPanelRenderer : GPBMessage <YTInnerTubeSectionRenderer, YTInnerTubeSectionRenderers>
{
}

+ (id)descriptor;
+ (id)playlistPanelRendererWithPlaylistID:(id)arg1 playlistTitle:(id)arg2 channelName:(id)arg3 offlineVideos:(id)arg4 currentIndex:(unsigned long long)arg5 offlineMode:(_Bool)arg6;
+ (id)playlistPanelRendererWithOfflinePlaylist:(id)arg1 offlineVideos:(id)arg2 currentIndex:(unsigned long long)arg3 offlineMode:(_Bool)arg4;
+ (id)playlistPanelRendererWithOfflineVideoList:(id)arg1 title:(id)arg2 offlineVideos:(id)arg3 currentIndex:(unsigned long long)arg4 offlineMode:(_Bool)arg5;
+ (id)playlistPanelRendererWithPlaylist:(id)arg1 offlineVideos:(id)arg2 currentIndex:(unsigned long long)arg3 offlineMode:(_Bool)arg4;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;
- (id)contentsKey;
- (id)sectionRenderers;

// Remaining properties
@property(nonatomic) _Bool allowLikes; // @dynamic allowLikes;
@property(retain, nonatomic) YTIAutomixTunerControlSupportedRenderers *automixTunerControl; // @dynamic automixTunerControl;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(nonatomic) int currentIndex; // @dynamic currentIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasAllowLikes; // @dynamic hasAllowLikes;
@property(nonatomic) _Bool hasAutomixTunerControl; // @dynamic hasAutomixTunerControl;
@property(nonatomic) _Bool hasCurrentIndex; // @dynamic hasCurrentIndex;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasIsCourse; // @dynamic hasIsCourse;
@property(nonatomic) _Bool hasIsEditable; // @dynamic hasIsEditable;
@property(nonatomic) _Bool hasIsInfinite; // @dynamic hasIsInfinite;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasLikeStatus; // @dynamic hasLikeStatus;
@property(nonatomic) _Bool hasLocalCurrentIndex; // @dynamic hasLocalCurrentIndex;
@property(nonatomic) _Bool hasLongBylineText; // @dynamic hasLongBylineText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNumItemsToShow; // @dynamic hasNumItemsToShow;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasOnReorderEndpoint; // @dynamic hasOnReorderEndpoint;
@property(nonatomic) _Bool hasOwnerName; // @dynamic hasOwnerName;
@property(nonatomic) _Bool hasPlayerInfoView; // @dynamic hasPlayerInfoView;
@property(nonatomic) _Bool hasPlaylistButtons; // @dynamic hasPlaylistButtons;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasPlaylistShareURL; // @dynamic hasPlaylistShareURL;
@property(nonatomic) _Bool hasPreviewDescription; // @dynamic hasPreviewDescription;
@property(nonatomic) _Bool hasSaveButton; // @dynamic hasSaveButton;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasShortBylineText; // @dynamic hasShortBylineText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasTotalVideos; // @dynamic hasTotalVideos;
@property(nonatomic) _Bool hasTotalVideosText; // @dynamic hasTotalVideosText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoCountText; // @dynamic hasVideoCountText;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isCourse; // @dynamic isCourse;
@property(nonatomic) _Bool isEditable; // @dynamic isEditable;
@property(nonatomic) _Bool isInfinite; // @dynamic isInfinite;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(nonatomic) int likeStatus; // @dynamic likeStatus;
@property(nonatomic) int localCurrentIndex; // @dynamic localCurrentIndex;
@property(retain, nonatomic) YTIFormattedString *longBylineText; // @dynamic longBylineText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(nonatomic) int numItemsToShow; // @dynamic numItemsToShow;
@property(retain, nonatomic) YTIPlaylistPanelRenderer_PlaylistPanelOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) YTICommand *onReorderEndpoint; // @dynamic onReorderEndpoint;
@property(retain, nonatomic) NSMutableArray *ownerBadgesArray; // @dynamic ownerBadgesArray;
@property(readonly, nonatomic) unsigned long long ownerBadgesArray_Count; // @dynamic ownerBadgesArray_Count;
@property(retain, nonatomic) YTIFormattedString *ownerName; // @dynamic ownerName;
@property(nonatomic) int playerInfoView; // @dynamic playerInfoView;
@property(retain, nonatomic) YTIPlaylistPanelButtonSupportedRenderers *playlistButtons; // @dynamic playlistButtons;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(copy, nonatomic) NSString *playlistShareURL; // @dynamic playlistShareURL;
@property(retain, nonatomic) YTIFormattedString *previewDescription; // @dynamic previewDescription;
@property(retain, nonatomic) YTIPlaylistSaveButtonSupportedRenderers *saveButton; // @dynamic saveButton;
@property(retain, nonatomic) YTIPlaylistPanelShareButtonSupportedRenderers *shareButton; // @dynamic shareButton;
@property(retain, nonatomic) YTIFormattedString *shortBylineText; // @dynamic shortBylineText;
@property(readonly, nonatomic) int shuffleButtonOneOfCase; // @dynamic shuffleButtonOneOfCase;
@property(retain, nonatomic) YTIRenderer *shuffleToggleButton; // @dynamic shuffleToggleButton;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(nonatomic) int totalVideos; // @dynamic totalVideos;
@property(retain, nonatomic) YTIFormattedString *totalVideosText; // @dynamic totalVideosText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *videoCountText; // @dynamic videoCountText;

@end

