//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderer-Protocol.h>
#import <Module_Framework/YTInnerTubeSectionRenderers-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIHorizontalCardListButtonSupportedRenderers, YTIHorizontalCardListHeaderSupportedRenderers, YTIHorizontalCardListHintSupportedRenderers, YTIHorizontalCardListStyle, YTIRenderer;

@interface YTIHorizontalCardListRenderer : GPBMessage <YTInnerTubeSectionRenderers, YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;
- (id)sectionRenderers;

// Remaining properties
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTIHorizontalCardListButtonSupportedRenderers *button; // @dynamic button;
@property(retain, nonatomic) NSMutableArray *cardsArray; // @dynamic cardsArray;
@property(readonly, nonatomic) unsigned long long cardsArray_Count; // @dynamic cardsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasLookupTag; // @dynamic hasLookupTag;
@property(nonatomic) _Bool hasNextButton; // @dynamic hasNextButton;
@property(nonatomic) _Bool hasPreviousButton; // @dynamic hasPreviousButton;
@property(nonatomic) _Bool hasSortFilter; // @dynamic hasSortFilter;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVerticalPadding; // @dynamic hasVerticalPadding;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIHorizontalCardListHeaderSupportedRenderers *header; // @dynamic header;
@property(retain, nonatomic) YTIHorizontalCardListHintSupportedRenderers *hint; // @dynamic hint;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(copy, nonatomic) NSString *lookupTag; // @dynamic lookupTag;
@property(retain, nonatomic) YTIRenderer *nextButton; // @dynamic nextButton;
@property(retain, nonatomic) YTIRenderer *previousButton; // @dynamic previousButton;
@property(retain, nonatomic) YTIRenderer *sortFilter; // @dynamic sortFilter;
@property(retain, nonatomic) YTIHorizontalCardListStyle *style; // @dynamic style;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) float verticalPadding; // @dynamic verticalPadding;

@end

