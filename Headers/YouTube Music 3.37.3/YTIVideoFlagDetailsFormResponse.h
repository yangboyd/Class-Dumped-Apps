//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIRenderer, YTIResponseContext;

@interface YTIVideoFlagDetailsFormResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLegalReportDetailsForm; // @dynamic hasLegalReportDetailsForm;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasVideoFlagDetailsForm; // @dynamic hasVideoFlagDetailsForm;
@property(retain, nonatomic) YTIRenderer *legalReportDetailsForm; // @dynamic legalReportDetailsForm;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTIRenderer *videoFlagDetailsForm; // @dynamic videoFlagDetailsForm;

@end

