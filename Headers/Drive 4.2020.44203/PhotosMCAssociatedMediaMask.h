//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCCompactWarpGridMask, PhotosMCVideoMask;

@interface PhotosMCAssociatedMediaMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCCompactWarpGridMask *compactWarpGrid; // @dynamic compactWarpGrid;
@property(nonatomic) _Bool hasCompactWarpGrid; // @dynamic hasCompactWarpGrid;
@property(nonatomic) _Bool hasOmitDownloadURLWithAssociatedMedia; // @dynamic hasOmitDownloadURLWithAssociatedMedia;
@property(nonatomic) _Bool hasVideo; // @dynamic hasVideo;
@property(nonatomic) _Bool omitDownloadURLWithAssociatedMedia; // @dynamic omitDownloadURLWithAssociatedMedia;
@property(retain, nonatomic) PhotosMCVideoMask *video; // @dynamic video;

@end

