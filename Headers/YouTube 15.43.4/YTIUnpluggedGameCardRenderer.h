//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIBadgeSupportedRenderers, YTICommand, YTIFormattedString, YTIRenderer;

@interface YTIUnpluggedGameCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasStatusIconsContainer; // @dynamic hasStatusIconsContainer;
@property(nonatomic) _Bool hasTertiaryText; // @dynamic hasTertiaryText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUltraHighDefinitionBadge; // @dynamic hasUltraHighDefinitionBadge;
@property(retain, nonatomic) YTIRenderer *header; // @dynamic header;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(retain, nonatomic) YTIRenderer *statusIconsContainer; // @dynamic statusIconsContainer;
@property(retain, nonatomic) YTIFormattedString *tertiaryText; // @dynamic tertiaryText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIBadgeSupportedRenderers *ultraHighDefinitionBadge; // @dynamic ultraHighDefinitionBadge;

@end

