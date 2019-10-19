//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIThumbnailDetails, YTIUnclickableBorderInfo;

@interface YTIPromotedNativeTextCtdContent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *actionText; // @dynamic actionText;
@property(retain, nonatomic) NSMutableArray *clickLocationTargetsArray; // @dynamic clickLocationTargetsArray;
@property(readonly, nonatomic) unsigned long long clickLocationTargetsArray_Count; // @dynamic clickLocationTargetsArray_Count;
@property(nonatomic) long long clickTargetDelayMs; // @dynamic clickTargetDelayMs;
@property(retain, nonatomic) YTIButtonSupportedRenderers *closeButton; // @dynamic closeButton;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasActionText; // @dynamic hasActionText;
@property(nonatomic) _Bool hasClickTargetDelayMs; // @dynamic hasClickTargetDelayMs;
@property(nonatomic) _Bool hasCloseButton; // @dynamic hasCloseButton;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasPrice; // @dynamic hasPrice;
@property(nonatomic) _Bool hasRating; // @dynamic hasRating;
@property(nonatomic) _Bool hasShowBottomSeparator; // @dynamic hasShowBottomSeparator;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUnclickableBorderInfo; // @dynamic hasUnclickableBorderInfo;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *price; // @dynamic price;
@property(nonatomic) float rating; // @dynamic rating;
@property(nonatomic) _Bool showBottomSeparator; // @dynamic showBottomSeparator;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIUnclickableBorderInfo *unclickableBorderInfo; // @dynamic unclickableBorderInfo;

@end

