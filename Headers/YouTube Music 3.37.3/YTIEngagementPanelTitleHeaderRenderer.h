//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIEngagementPanelTitleMenuSupportedRenderers, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIEngagementPanelTitleHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIFormattedString *contextualInfo; // @dynamic contextualInfo;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasContextualInfo; // @dynamic hasContextualInfo;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasInformationButton; // @dynamic hasInformationButton;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasShowCountBadge; // @dynamic hasShowCountBadge;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasSubtitleComplex; // @dynamic hasSubtitleComplex;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVisibilityButton; // @dynamic hasVisibilityButton;
@property(retain, nonatomic) YTIThumbnailDetails *icon; // @dynamic icon;
@property(retain, nonatomic) YTIRenderer *informationButton; // @dynamic informationButton;
@property(retain, nonatomic) YTIEngagementPanelTitleMenuSupportedRenderers *menu; // @dynamic menu;
@property(nonatomic) _Bool showCountBadge; // @dynamic showCountBadge;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIRenderer *subtitleComplex; // @dynamic subtitleComplex;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIRenderer *visibilityButton; // @dynamic visibilityButton;

@end

