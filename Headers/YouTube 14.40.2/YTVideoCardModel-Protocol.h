//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIRenderer, YTIStandaloneBadgeSupportedRenderers, YTIThumbnailDetails, YTIVideoCardStyle;

@protocol YTVideoCardModel <NSObject>
@property(readonly, nonatomic) _Bool hasOfferButton;
@property(readonly, nonatomic) YTIRenderer *offerButton;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count;
@property(readonly, nonatomic) NSMutableArray *buttonsArray;
@property(readonly, nonatomic) _Bool hasStyle;
@property(readonly, nonatomic) YTIVideoCardStyle *style;
@property(readonly, nonatomic) unsigned long long badgesArray_Count;
@property(readonly, nonatomic) NSMutableArray *badgesArray;
@property(readonly, nonatomic) _Bool hasMenu;
@property(readonly, nonatomic) YTIMenuSupportedRenderers *menu;
@property(readonly, nonatomic) unsigned long long thumbnailOverlaysArray_Count;
@property(readonly, nonatomic) NSMutableArray *thumbnailOverlaysArray;
@property(readonly, nonatomic) _Bool hasBottomStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *bottomStandaloneBadge;
@property(readonly, nonatomic) _Bool hasStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *standaloneBadge;
@property(readonly, nonatomic) _Bool hasTopStandaloneBadge;
@property(readonly, nonatomic) YTIStandaloneBadgeSupportedRenderers *topStandaloneBadge;
@property(readonly, nonatomic) _Bool hasThumbnail;
@property(readonly, nonatomic) YTIThumbnailDetails *thumbnail;
@property(readonly, nonatomic) _Bool hasNavigationEndpoint;
@property(readonly, nonatomic) YTICommand *navigationEndpoint;
@property(readonly, nonatomic) _Bool hasLengthText;
@property(readonly, nonatomic) YTIFormattedString *lengthText;
@property(readonly, nonatomic) _Bool hasMetadataText;
@property(readonly, nonatomic) YTIFormattedString *metadataText;
@property(readonly, nonatomic) _Bool hasBylineText;
@property(readonly, nonatomic) YTIFormattedString *bylineText;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) YTIFormattedString *title;
@end

