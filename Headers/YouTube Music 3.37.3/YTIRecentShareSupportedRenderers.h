//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIEnrolledContactRenderer, YTISharingGroupRenderer;

@interface YTIRecentShareSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIEnrolledContactRenderer *enrolledContactRenderer; // @dynamic enrolledContactRenderer;
@property(nonatomic) _Bool hasEnrolledContactRenderer; // @dynamic hasEnrolledContactRenderer;
@property(nonatomic) _Bool hasSharingGroupRenderer; // @dynamic hasSharingGroupRenderer;
@property(retain, nonatomic) YTISharingGroupRenderer *sharingGroupRenderer; // @dynamic sharingGroupRenderer;

@end

