//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMUUploadRequestDelegate-Protocol.h"

@class GMUCNDEAssetFingerprint, GMUFingerprint, GMUPairedVideoUploadMediaRequest, GMUUploadBlobRequest, GMUUploadRequestCredentials, NSData, NSString, PEFEditList, PHAsset, PHLivePhoto;
@protocol GMUCNDELivePhotoUploadRequestDelegate;

@interface GMUCNDELivePhotoUploadRequest : NSObject <GMUUploadRequestDelegate>
{
    int _storagePolicy;
    id <GMUCNDELivePhotoUploadRequestDelegate> _delegate;
    PHAsset *_asset;
    PHLivePhoto *_originalLivePhoto;
    PEFEditList *_editList;
    GMUFingerprint *_photoFingerprint;
    GMUUploadRequestCredentials *_credentials;
    GMUCNDEAssetFingerprint *_originalLivePhotoFingerprint;
    GMUPairedVideoUploadMediaRequest *_uploadOriginalPairedVideoRequest;
    GMUUploadBlobRequest *_uploadEditedImageRequest;
    GMUUploadBlobRequest *_uploadEditedVideoRequest;
    NSData *_editedImageBlobRef;
    NSData *_editedVideoBlobRef;
}

+ (_Bool)environmentSupportsCNDEBackup:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSData *editedVideoBlobRef; // @synthesize editedVideoBlobRef=_editedVideoBlobRef;
@property(retain) NSData *editedImageBlobRef; // @synthesize editedImageBlobRef=_editedImageBlobRef;
@property(retain) GMUUploadBlobRequest *uploadEditedVideoRequest; // @synthesize uploadEditedVideoRequest=_uploadEditedVideoRequest;
@property(retain) GMUUploadBlobRequest *uploadEditedImageRequest; // @synthesize uploadEditedImageRequest=_uploadEditedImageRequest;
@property(retain) GMUPairedVideoUploadMediaRequest *uploadOriginalPairedVideoRequest; // @synthesize uploadOriginalPairedVideoRequest=_uploadOriginalPairedVideoRequest;
@property(retain) GMUCNDEAssetFingerprint *originalLivePhotoFingerprint; // @synthesize originalLivePhotoFingerprint=_originalLivePhotoFingerprint;
@property(readonly, nonatomic) int storagePolicy; // @synthesize storagePolicy=_storagePolicy;
@property(readonly, nonatomic) GMUUploadRequestCredentials *credentials; // @synthesize credentials=_credentials;
@property(readonly, nonatomic) GMUFingerprint *photoFingerprint; // @synthesize photoFingerprint=_photoFingerprint;
@property(readonly, nonatomic) PEFEditList *editList; // @synthesize editList=_editList;
@property(readonly, nonatomic) PHLivePhoto *originalLivePhoto; // @synthesize originalLivePhoto=_originalLivePhoto;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property __weak id <GMUCNDELivePhotoUploadRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)uploadRequest:(id)arg1 didCompleteWithBlobRef:(id)arg2;
- (_Bool)uploadRequest:(id)arg1 shouldUploadFingerprint:(id)arg2;
- (void)uploadRequestDidProgress:(id)arg1;
- (void)uploadRequest:(id)arg1 didCompleteWithError:(id)arg2 resultantMediaItem:(id)arg3;
- (void)handleError:(id)arg1;
- (void)cancel;
@property(readonly, nonatomic) double progress; // @dynamic progress;
- (void)start;
- (id)initWithAsset:(id)arg1 editList:(id)arg2 livePhoto:(id)arg3 credentials:(id)arg4 storagePolicy:(int)arg5 photoFingerprint:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

