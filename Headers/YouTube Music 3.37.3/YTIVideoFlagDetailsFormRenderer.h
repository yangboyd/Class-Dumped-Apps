//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString;

@interface YTIVideoFlagDetailsFormRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *alertText; // @dynamic alertText;
@property(retain, nonatomic) YTIFormattedString *footerText; // @dynamic footerText;
@property(nonatomic) _Bool hasAlertText; // @dynamic hasAlertText;
@property(nonatomic) _Bool hasFooterText; // @dynamic hasFooterText;
@property(nonatomic) _Bool hasSendReportText; // @dynamic hasSendReportText;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasTextPlaceholder; // @dynamic hasTextPlaceholder;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *sendReportText; // @dynamic sendReportText;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) YTIFormattedString *textPlaceholder; // @dynamic textPlaceholder;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

