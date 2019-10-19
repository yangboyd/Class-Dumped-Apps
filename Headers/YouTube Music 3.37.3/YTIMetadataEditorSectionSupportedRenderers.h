//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILocationEditRenderer, YTIMdeAddToPlaylistRenderer, YTIMdeAgeRestrictionRenderer, YTIMdeBroadcastDelayRenderer, YTIMdeCategoryRenderer, YTIMdeClaimSettingsRenderer, YTIMdeCommentOptionsRenderer, YTIMdeCommitButtonRenderer, YTIMdeDeleteButtonRenderer, YTIMdeDescriptionRenderer, YTIMdeDetailedCommitButtonRenderer, YTIMdeDistributionOptionsRenderer, YTIMdeDownloadThumbnailRenderer, YTIMdeDvrEnabledRenderer, YTIMdeEditCustomThumbnailRenderer, YTIMdeGameTitleRenderer, YTIMdeLicenseRenderer, YTIMdeMonetizationRenderer, YTIMdePrivacyRenderer, YTIMdeRecordingOptionsRenderer, YTIMdeStreamOptimizationsRenderer, YTIMdeTagsRenderer, YTIMdeTargetedAudienceRenderer, YTIMdeThumbnailRenderer, YTIMdeTimeSelectorRenderer, YTIMdeTitleRenderer, YTIMessageRenderer, YTITextBadgeRenderer;

@interface YTIMetadataEditorSectionSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMdeAgeRestrictionRenderer *ageRestriction; // @dynamic ageRestriction;
@property(retain, nonatomic) YTIMdeBroadcastDelayRenderer *broadcastDelay; // @dynamic broadcastDelay;
@property(retain, nonatomic) YTIMdeCategoryRenderer *category; // @dynamic category;
@property(retain, nonatomic) YTIMdeCommentOptionsRenderer *commentOptions; // @dynamic commentOptions;
@property(retain, nonatomic) YTIMdeCommitButtonRenderer *commitButton; // @dynamic commitButton;
@property(retain, nonatomic) YTIMdeDeleteButtonRenderer *deleteButton; // @dynamic deleteButton;
@property(retain, nonatomic) YTIMdeDescriptionRenderer *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTIMdeDistributionOptionsRenderer *distributionOptions; // @dynamic distributionOptions;
@property(retain, nonatomic) YTIMdeDvrEnabledRenderer *dvrEnabled; // @dynamic dvrEnabled;
@property(retain, nonatomic) YTIMdeGameTitleRenderer *gameTitle; // @dynamic gameTitle;
@property(nonatomic) _Bool hasAgeRestriction; // @dynamic hasAgeRestriction;
@property(nonatomic) _Bool hasBroadcastDelay; // @dynamic hasBroadcastDelay;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasCommentOptions; // @dynamic hasCommentOptions;
@property(nonatomic) _Bool hasCommitButton; // @dynamic hasCommitButton;
@property(nonatomic) _Bool hasDeleteButton; // @dynamic hasDeleteButton;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDistributionOptions; // @dynamic hasDistributionOptions;
@property(nonatomic) _Bool hasDvrEnabled; // @dynamic hasDvrEnabled;
@property(nonatomic) _Bool hasGameTitle; // @dynamic hasGameTitle;
@property(nonatomic) _Bool hasLicense; // @dynamic hasLicense;
@property(nonatomic) _Bool hasLocationEditRenderer; // @dynamic hasLocationEditRenderer;
@property(nonatomic) _Bool hasMdeAddToPlaylistRenderer; // @dynamic hasMdeAddToPlaylistRenderer;
@property(nonatomic) _Bool hasMdeClaimSettingsRenderer; // @dynamic hasMdeClaimSettingsRenderer;
@property(nonatomic) _Bool hasMdeDetailedCommitButtonRenderer; // @dynamic hasMdeDetailedCommitButtonRenderer;
@property(nonatomic) _Bool hasMdeDownloadThumbnailRenderer; // @dynamic hasMdeDownloadThumbnailRenderer;
@property(nonatomic) _Bool hasMdeEditCustomThumbnailRenderer; // @dynamic hasMdeEditCustomThumbnailRenderer;
@property(nonatomic) _Bool hasMdeMonetizationRenderer; // @dynamic hasMdeMonetizationRenderer;
@property(nonatomic) _Bool hasMdeStreamOptimizationsRenderer; // @dynamic hasMdeStreamOptimizationsRenderer;
@property(nonatomic) _Bool hasMdeTargetedAudienceRenderer; // @dynamic hasMdeTargetedAudienceRenderer;
@property(nonatomic) _Bool hasMdeTimeSelectorRenderer; // @dynamic hasMdeTimeSelectorRenderer;
@property(nonatomic) _Bool hasMessageRenderer; // @dynamic hasMessageRenderer;
@property(nonatomic) _Bool hasPrivacy; // @dynamic hasPrivacy;
@property(nonatomic) _Bool hasRecordingOptions; // @dynamic hasRecordingOptions;
@property(nonatomic) _Bool hasTags; // @dynamic hasTags;
@property(nonatomic) _Bool hasTextBadgeRenderer; // @dynamic hasTextBadgeRenderer;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIMdeLicenseRenderer *license; // @dynamic license;
@property(retain, nonatomic) YTILocationEditRenderer *locationEditRenderer; // @dynamic locationEditRenderer;
@property(retain, nonatomic) YTIMdeAddToPlaylistRenderer *mdeAddToPlaylistRenderer; // @dynamic mdeAddToPlaylistRenderer;
@property(retain, nonatomic) YTIMdeClaimSettingsRenderer *mdeClaimSettingsRenderer; // @dynamic mdeClaimSettingsRenderer;
@property(retain, nonatomic) YTIMdeDetailedCommitButtonRenderer *mdeDetailedCommitButtonRenderer; // @dynamic mdeDetailedCommitButtonRenderer;
@property(retain, nonatomic) YTIMdeDownloadThumbnailRenderer *mdeDownloadThumbnailRenderer; // @dynamic mdeDownloadThumbnailRenderer;
@property(retain, nonatomic) YTIMdeEditCustomThumbnailRenderer *mdeEditCustomThumbnailRenderer; // @dynamic mdeEditCustomThumbnailRenderer;
@property(retain, nonatomic) YTIMdeMonetizationRenderer *mdeMonetizationRenderer; // @dynamic mdeMonetizationRenderer;
@property(retain, nonatomic) YTIMdeStreamOptimizationsRenderer *mdeStreamOptimizationsRenderer; // @dynamic mdeStreamOptimizationsRenderer;
@property(retain, nonatomic) YTIMdeTargetedAudienceRenderer *mdeTargetedAudienceRenderer; // @dynamic mdeTargetedAudienceRenderer;
@property(retain, nonatomic) YTIMdeTimeSelectorRenderer *mdeTimeSelectorRenderer; // @dynamic mdeTimeSelectorRenderer;
@property(retain, nonatomic) YTIMessageRenderer *messageRenderer; // @dynamic messageRenderer;
@property(retain, nonatomic) YTIMdePrivacyRenderer *privacy; // @dynamic privacy;
@property(retain, nonatomic) YTIMdeRecordingOptionsRenderer *recordingOptions; // @dynamic recordingOptions;
@property(retain, nonatomic) YTIMdeTagsRenderer *tags; // @dynamic tags;
@property(retain, nonatomic) YTITextBadgeRenderer *textBadgeRenderer; // @dynamic textBadgeRenderer;
@property(retain, nonatomic) YTIMdeThumbnailRenderer *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIMdeTitleRenderer *title; // @dynamic title;

@end

