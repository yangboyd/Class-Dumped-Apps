//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIUploadInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int connectionType; // @dynamic connectionType;
@property(copy, nonatomic) NSString *encryptedVideoId; // @dynamic encryptedVideoId;
@property(copy, nonatomic) NSString *externalChannelId; // @dynamic externalChannelId;
@property(copy, nonatomic) NSString *frontendUploadId; // @dynamic frontendUploadId;
@property(nonatomic) _Bool hasConnectionType; // @dynamic hasConnectionType;
@property(nonatomic) _Bool hasEncryptedVideoId; // @dynamic hasEncryptedVideoId;
@property(nonatomic) _Bool hasExternalChannelId; // @dynamic hasExternalChannelId;
@property(nonatomic) _Bool hasFrontendUploadId; // @dynamic hasFrontendUploadId;
@property(nonatomic) _Bool hasTransferId; // @dynamic hasTransferId;
@property(nonatomic) _Bool hasUploadConnectionPreference; // @dynamic hasUploadConnectionPreference;
@property(nonatomic) _Bool hasUploadType; // @dynamic hasUploadType;
@property(copy, nonatomic) NSString *transferId; // @dynamic transferId;
@property(nonatomic) int uploadConnectionPreference; // @dynamic uploadConnectionPreference;
@property(nonatomic) int uploadType; // @dynamic uploadType;

@end

