//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTImageAttachmentCreationEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTCropCoordinatesModel;

@interface YTMutableImageAttachmentCreationEntityModel : YTImageAttachmentCreationEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(retain, nonatomic) YTCropCoordinatesModel *previewCoordinates; // @dynamic previewCoordinates;
@property(nonatomic) int source; // @dynamic source;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) NSString *sourceExternalVideoId; // @dynamic sourceExternalVideoId;
@property(retain, nonatomic) NSString *encryptedBlobId; // @dynamic encryptedBlobId;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end

