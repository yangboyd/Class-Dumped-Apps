//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIKidsReportingRenderer, YTIMenuRenderer, YTIOptionsRenderer, YTIReportFormModalRenderer, YTISingleVideoReportingOptionRenderer;

@interface YTIVideoReportingSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIKidsReportingRenderer *kidsReportingRenderer; // @dynamic kidsReportingRenderer;
@property(retain, nonatomic) YTIMenuRenderer *menuRenderer; // @dynamic menuRenderer;
@property(retain, nonatomic) YTIOptionsRenderer *optionsRenderer; // @dynamic optionsRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTIReportFormModalRenderer *reportFormModalRenderer; // @dynamic reportFormModalRenderer;
@property(retain, nonatomic) YTISingleVideoReportingOptionRenderer *singleVideoReportingOptionRenderer; // @dynamic singleVideoReportingOptionRenderer;

@end

