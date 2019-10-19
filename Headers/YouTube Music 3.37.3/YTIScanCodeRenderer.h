//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString, YTIThumbnailDetails, YTIYTCodeData;

@interface YTIScanCodeRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *cameraPermissionDeniedBody; // @dynamic cameraPermissionDeniedBody;
@property(retain, nonatomic) YTIFormattedString *cameraPermissionDeniedButtonText; // @dynamic cameraPermissionDeniedButtonText;
@property(retain, nonatomic) YTIFormattedString *cameraPermissionNotAskedBody; // @dynamic cameraPermissionNotAskedBody;
@property(retain, nonatomic) YTIFormattedString *cameraPermissionNotAskedButtonText; // @dynamic cameraPermissionNotAskedButtonText;
@property(copy, nonatomic) NSData *codeBytes; // @dynamic codeBytes;
@property(nonatomic) _Bool hasCameraPermissionDeniedBody; // @dynamic hasCameraPermissionDeniedBody;
@property(nonatomic) _Bool hasCameraPermissionDeniedButtonText; // @dynamic hasCameraPermissionDeniedButtonText;
@property(nonatomic) _Bool hasCameraPermissionNotAskedBody; // @dynamic hasCameraPermissionNotAskedBody;
@property(nonatomic) _Bool hasCameraPermissionNotAskedButtonText; // @dynamic hasCameraPermissionNotAskedButtonText;
@property(nonatomic) _Bool hasCodeBytes; // @dynamic hasCodeBytes;
@property(nonatomic) _Bool hasScanErrorCommand; // @dynamic hasScanErrorCommand;
@property(nonatomic) _Bool hasScanInstructions; // @dynamic hasScanInstructions;
@property(nonatomic) _Bool hasScanTabTitle; // @dynamic hasScanTabTitle;
@property(nonatomic) _Bool hasShowTabTitle; // @dynamic hasShowTabTitle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUserName; // @dynamic hasUserName;
@property(nonatomic) _Bool hasYtcodeData; // @dynamic hasYtcodeData;
@property(retain, nonatomic) YTICommand *scanErrorCommand; // @dynamic scanErrorCommand;
@property(retain, nonatomic) YTIFormattedString *scanInstructions; // @dynamic scanInstructions;
@property(retain, nonatomic) YTIFormattedString *scanTabTitle; // @dynamic scanTabTitle;
@property(retain, nonatomic) YTIFormattedString *showTabTitle; // @dynamic showTabTitle;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *userName; // @dynamic userName;
@property(retain, nonatomic) YTIYTCodeData *ytcodeData; // @dynamic ytcodeData;

@end

