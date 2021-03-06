//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTFileUploadingService-Protocol.h"

@class NSMutableDictionary;

@interface GBTFileUploadingServiceImpl : NSObject <GBTFileUploadingService>
{
    NSMutableDictionary *_uploadServices;
}

- (void).cxx_destruct;
- (id)filenameWithImage:(id)arg1;
- (id)filenameWithAsset:(id)arg1;
- (_Bool)hasAttachmentsWithType:(id)arg1 inMessage:(id)arg2;
- (void)saveImapAttachment:(id)arg1 toDraft:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelUploadForAttachmentId:(id)arg1;
- (_Bool)isUploadingForAttachmentId:(id)arg1;
- (void)uploadWithAttachment:(id)arg1 toDraft:(id)arg2 draftServerPermId:(id)arg3 client:(id)arg4 completion:(CDUnknownBlockType)arg5 progress:(CDUnknownBlockType)arg6;
- (long long)maxUploadFileSizeInBytes;
- (id)init;

@end

