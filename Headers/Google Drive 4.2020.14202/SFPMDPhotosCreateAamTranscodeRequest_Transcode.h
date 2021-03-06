//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSData, PhotosMCItemId;

@interface SFPMDPhotosCreateAamTranscodeRequest_Transcode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool hasTranscodeHeight; // @dynamic hasTranscodeHeight;
@property(nonatomic) _Bool hasTranscodeWidth; // @dynamic hasTranscodeWidth;
@property(nonatomic) _Bool hasUploadToken; // @dynamic hasUploadToken;
@property(retain, nonatomic) PhotosMCItemId *itemId; // @dynamic itemId;
@property(nonatomic) int transcodeHeight; // @dynamic transcodeHeight;
@property(nonatomic) int transcodeWidth; // @dynamic transcodeWidth;
@property(copy, nonatomic) NSData *uploadToken; // @dynamic uploadToken;

@end

