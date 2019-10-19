//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTIButtonRenderer, YTIEngagementPanelOpenStyle, YTIEngagementPanelSectionListHeaderSupportedRenderers, YTIEngagementPanelSectionListRenderer, YTIFormattedString, YTIMenuRenderer, YTISortFilterSubMenuRenderer, YTIThumbnailDetails, YTIVisualElement;

@protocol YTEngagementPanelViewModel <NSObject>
- (YTIVisualElement *)visualElement;
- (YTIEngagementPanelOpenStyle *)openStyle;
- (YTIEngagementPanelSectionListHeaderSupportedRenderers *)headerRenderer;
- (YTIEngagementPanelSectionListRenderer *)sectionListRenderer;
- (id)contentModel;
- (_Bool)disablePullRefresh;
- (_Bool)isAdsHeaderRenderer;
- (void)updateSortFilterSubMenuRenderer:(YTISortFilterSubMenuRenderer *)arg1;
- (_Bool)shouldShowCountBadge;
- (_Bool)shouldRetainVideoHeight;
- (YTIButtonRenderer *)actionButton;
- (YTIThumbnailDetails *)thumbnail;
- (YTIMenuRenderer *)overflowMenu;
- (YTIFormattedString *)subtitle;
- (YTISortFilterSubMenuRenderer *)sortFilterSubMenuRenderer;
- (YTIFormattedString *)headerContexualInfo;
- (YTIFormattedString *)headerTitle;
- (NSString *)panelIdentifier;
@end

