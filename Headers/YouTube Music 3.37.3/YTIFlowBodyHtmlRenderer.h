//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSData, NSString;

@interface YTIFlowBodyHtmlRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHtmlContent; // @dynamic hasHtmlContent;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *htmlContent; // @dynamic htmlContent;
@property(retain, nonatomic) GPBEnumArray *imagesArray; // @dynamic imagesArray;
@property(readonly, nonatomic) unsigned long long imagesArray_Count; // @dynamic imagesArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

