//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGMediaMetadata, NSString, NSURL, UIImage;

@interface IGDirectOutgoingVisualMedia : FBValueObject <NSCopying, NSCoding>
{
    _Bool _hasTranscription;
    NSString *_dependentMediaUploadId;
    NSString *_analyticsWaterfallId;
    IGMediaMetadata *_mediaMetadata;
    long long _viewMode;
    long long _replyType;
    UIImage *_uploadImage;
    NSURL *_initialUploadVideoURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasTranscription; // @synthesize hasTranscription=_hasTranscription;
@property(readonly, copy, nonatomic) NSURL *initialUploadVideoURL; // @synthesize initialUploadVideoURL=_initialUploadVideoURL;
@property(readonly, copy, nonatomic) UIImage *uploadImage; // @synthesize uploadImage=_uploadImage;
@property(readonly, nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(readonly, nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(readonly, copy, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(readonly, copy, nonatomic) NSString *analyticsWaterfallId; // @synthesize analyticsWaterfallId=_analyticsWaterfallId;
@property(readonly, copy, nonatomic) NSString *dependentMediaUploadId; // @synthesize dependentMediaUploadId=_dependentMediaUploadId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDependentMediaUploadId:(id)arg1 analyticsWaterfallId:(id)arg2 mediaMetadata:(id)arg3 viewMode:(long long)arg4 replyType:(long long)arg5 uploadImage:(id)arg6 initialUploadVideoURL:(id)arg7 hasTranscription:(_Bool)arg8;
- (id)initWithCoder:(id)arg1;

@end

