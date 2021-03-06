//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PEFEditList, PhotosMCImageProperties, PhotosMCVideoExifData, PhotosMCVideoProperties;

@interface PhotosMCVideo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *downloadURL; // @dynamic downloadURL;
@property(retain, nonatomic) PEFEditList *editList; // @dynamic editList;
@property(retain, nonatomic) PhotosMCVideoExifData *exifData; // @dynamic exifData;
@property(nonatomic) _Bool hasDownloadURL; // @dynamic hasDownloadURL;
@property(nonatomic) _Bool hasEditList; // @dynamic hasEditList;
@property(nonatomic) _Bool hasExifData; // @dynamic hasExifData;
@property(nonatomic) _Bool hasProcessingStatus; // @dynamic hasProcessingStatus;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasVideoCid; // @dynamic hasVideoCid;
@property(nonatomic) _Bool hasVideoProperties; // @dynamic hasVideoProperties;
@property(nonatomic) int processingStatus; // @dynamic processingStatus;
@property(retain, nonatomic) PhotosMCImageProperties *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *videoCid; // @dynamic videoCid;
@property(retain, nonatomic) PhotosMCVideoProperties *videoProperties; // @dynamic videoProperties;

@end

