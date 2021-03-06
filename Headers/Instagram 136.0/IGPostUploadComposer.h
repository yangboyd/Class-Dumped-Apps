//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGImageEncoding, IGPostSessionLogger, IGPostVideoUpload, IGUploadCompositionBuilder, IGUploadService, IGUploadSessionBuilder, IGUserSession, NSMutableArray, NSMutableDictionary, NSString;

@interface IGPostUploadComposer : NSObject
{
    IGUploadService *_uploadService;
    IGUserSession *_userSession;
    NSString *_mediaExportPath;
    NSString *_videoSegmentsExportPath;
    IGPostSessionLogger *_postSessionLogger;
    IGUploadSessionBuilder *_uploadSessionBuilder;
    IGUploadCompositionBuilder *_uploadCompositionBuilder;
    NSMutableArray *_uploadIds;
    IGPostVideoUpload *_pendingVideoUpload;
    NSMutableDictionary *_mediaIdToHasEdits;
    NSString *_postId;
    IGImageEncoding *_previewImageEncoding;
    long long _postDataType;
}

@property(readonly, nonatomic) long long postDataType; // @synthesize postDataType=_postDataType;
@property(readonly, nonatomic) IGImageEncoding *previewImageEncoding; // @synthesize previewImageEncoding=_previewImageEncoding;
@property(readonly, copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
- (void).cxx_destruct;
- (id)_audioFileCopyUrlForOriginalAudioFileUrl:(id)arg1;
- (id)_createUploadParamsWithAdditionalParams:(id)arg1;
- (id)_createVideoUploadParamsWithAdditionalParams:(id)arg1;
- (void)_completeUploadWithCoverPhotoImageEncoding:(id)arg1 videoUpload:(id)arg2;
- (void)_uploadImageWithImageUploadModel:(id)arg1 uploadId:(id)arg2 mediaType:(long long)arg3 edited:(_Bool)arg4 extraUploadParams:(id)arg5;
- (void)cancel;
- (id)createUploadSession;
- (id)createUploadComposition;
- (id)uploadCarouselWithAssets:(id)arg1 shouldMeasureQuality:(_Bool)arg2;
- (void)uploadAudioWithAudioFileUrl:(id)arg1 uploadParams:(id)arg2;
- (void)uploadPhotoWithImageEncoding:(id)arg1 previewImageEncoding:(id)arg2 uploadParams:(id)arg3;
- (void)completePendingVideoUploadRequestWithNoCoverPhotoIfNeeded;
- (void)uploadVideoCoverPhotoWithImageEncoding:(id)arg1;
- (void)uploadVideoSource:(id)arg1 renderOptions:(id)arg2 transcodeOptions:(id)arg3 previewImageEncoding:(id)arg4 useFirstFrameForCoverPhoto:(_Bool)arg5 mediaId:(id)arg6 uploadParams:(id)arg7 shouldMeasureQuality:(_Bool)arg8;
- (id)mediaIdToHasEdits;
- (id)uploadIds;
- (id)initWithPostId:(id)arg1 uploadService:(id)arg2 userSession:(id)arg3 uploadServicePath:(id)arg4 mediaExportPath:(id)arg5 videoSegmentsExportPath:(id)arg6 loggingContext:(id)arg7;

@end

