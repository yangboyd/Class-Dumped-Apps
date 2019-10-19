//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIRenderer, YTIThumbnailDetails;

@interface YTIAppPromoCompanionAdRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *actionText; // @dynamic actionText;
@property(retain, nonatomic) YTICommand *adCompleteCommand; // @dynamic adCompleteCommand;
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTICommand *backgroundCommand; // @dynamic backgroundCommand;
@property(retain, nonatomic) YTIRenderer *companionExtension; // @dynamic companionExtension;
@property(nonatomic) int completionAction; // @dynamic completionAction;
@property(retain, nonatomic) YTIRenderer *ctaButton; // @dynamic ctaButton;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasActionText; // @dynamic hasActionText;
@property(nonatomic) _Bool hasAdCompleteCommand; // @dynamic hasAdCompleteCommand;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBackgroundCommand; // @dynamic hasBackgroundCommand;
@property(nonatomic) _Bool hasCompanionExtension; // @dynamic hasCompanionExtension;
@property(nonatomic) _Bool hasCompletionAction; // @dynamic hasCompletionAction;
@property(nonatomic) _Bool hasCtaButton; // @dynamic hasCtaButton;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIconClickCommand; // @dynamic hasIconClickCommand;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasRating; // @dynamic hasRating;
@property(nonatomic) _Bool hasRatingBarStyle; // @dynamic hasRatingBarStyle;
@property(nonatomic) _Bool hasRatingClickCommand; // @dynamic hasRatingClickCommand;
@property(nonatomic) _Bool hasSecondaryButton; // @dynamic hasSecondaryButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleClickCommand; // @dynamic hasTitleClickCommand;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *icon; // @dynamic icon;
@property(retain, nonatomic) YTIRenderer *iconClickCommand; // @dynamic iconClickCommand;
@property(retain, nonatomic) NSMutableArray *impressionCommandsArray; // @dynamic impressionCommandsArray;
@property(readonly, nonatomic) unsigned long long impressionCommandsArray_Count; // @dynamic impressionCommandsArray_Count;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) float rating; // @dynamic rating;
@property(nonatomic) int ratingBarStyle; // @dynamic ratingBarStyle;
@property(retain, nonatomic) YTIRenderer *ratingClickCommand; // @dynamic ratingClickCommand;
@property(retain, nonatomic) YTIRenderer *secondaryButton; // @dynamic secondaryButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIRenderer *titleClickCommand; // @dynamic titleClickCommand;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

