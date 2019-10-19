//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SCUnlockableLensSwipeTrackInfo : NSObject <NSCopying>
{
    _Bool _isAudioOn;
    _Bool _withWorldCamera;
    _Bool _withSelfieCamera;
    _Bool _shouldRecordAttachment;
    _Bool _withAttachmentOpen;
    _Bool _attachmentIsRedirectToStore;
    _Bool _attachmentIsRedirectToWebview;
    _Bool _attachmentIsPixelCookieAvailable;
    unsigned long long _camera;
    NSString *_lensOptionId;
    NSString *_encryptedGeoData;
    long long _unlockType;
    double _firstFaceRenderTimestampSec;
    double _firstTriggerTimestampSec;
    NSString *_unlockableId;
    unsigned long long _snapSendCount;
    unsigned long long _storyPostCount;
    unsigned long long _memoriesSaveCount;
    unsigned long long _directSnapSendRecipients;
    double _totalSwipedViewSec;
    unsigned long long _swipedOverCount;
    double _maxSwipeTimeSec;
    double _recordingTimeSec;
    double _postCaptureTimeSec;
    double _totalTimeSec;
    double _maxContinuousTimeSec;
    long long _indexPosition;
    NSString *_rawAdData;
    NSString *_encryptedSponsoredUnlockableTargetingInfoData;
    NSString *_rankingId;
    NSString *_rankingData;
    NSString *_attachmentType;
    NSDate *_attachmentOpenTimestamp;
    double _attachmentViewTimeSec;
    double _attachmentMediaDurationSec;
}

@property(readonly, nonatomic) _Bool attachmentIsPixelCookieAvailable; // @synthesize attachmentIsPixelCookieAvailable=_attachmentIsPixelCookieAvailable;
@property(readonly, nonatomic) _Bool attachmentIsRedirectToWebview; // @synthesize attachmentIsRedirectToWebview=_attachmentIsRedirectToWebview;
@property(readonly, nonatomic) _Bool attachmentIsRedirectToStore; // @synthesize attachmentIsRedirectToStore=_attachmentIsRedirectToStore;
@property(readonly, nonatomic) double attachmentMediaDurationSec; // @synthesize attachmentMediaDurationSec=_attachmentMediaDurationSec;
@property(readonly, nonatomic) double attachmentViewTimeSec; // @synthesize attachmentViewTimeSec=_attachmentViewTimeSec;
@property(readonly, copy, nonatomic) NSDate *attachmentOpenTimestamp; // @synthesize attachmentOpenTimestamp=_attachmentOpenTimestamp;
@property(readonly, copy, nonatomic) NSString *attachmentType; // @synthesize attachmentType=_attachmentType;
@property(readonly, nonatomic) _Bool withAttachmentOpen; // @synthesize withAttachmentOpen=_withAttachmentOpen;
@property(readonly, nonatomic) _Bool shouldRecordAttachment; // @synthesize shouldRecordAttachment=_shouldRecordAttachment;
@property(readonly, copy, nonatomic) NSString *rankingData; // @synthesize rankingData=_rankingData;
@property(readonly, copy, nonatomic) NSString *rankingId; // @synthesize rankingId=_rankingId;
@property(readonly, copy, nonatomic) NSString *encryptedSponsoredUnlockableTargetingInfoData; // @synthesize encryptedSponsoredUnlockableTargetingInfoData=_encryptedSponsoredUnlockableTargetingInfoData;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, nonatomic) long long indexPosition; // @synthesize indexPosition=_indexPosition;
@property(readonly, nonatomic) double maxContinuousTimeSec; // @synthesize maxContinuousTimeSec=_maxContinuousTimeSec;
@property(readonly, nonatomic) double totalTimeSec; // @synthesize totalTimeSec=_totalTimeSec;
@property(readonly, nonatomic) double postCaptureTimeSec; // @synthesize postCaptureTimeSec=_postCaptureTimeSec;
@property(readonly, nonatomic) double recordingTimeSec; // @synthesize recordingTimeSec=_recordingTimeSec;
@property(readonly, nonatomic) double maxSwipeTimeSec; // @synthesize maxSwipeTimeSec=_maxSwipeTimeSec;
@property(readonly, nonatomic) unsigned long long swipedOverCount; // @synthesize swipedOverCount=_swipedOverCount;
@property(readonly, nonatomic) double totalSwipedViewSec; // @synthesize totalSwipedViewSec=_totalSwipedViewSec;
@property(readonly, nonatomic) unsigned long long directSnapSendRecipients; // @synthesize directSnapSendRecipients=_directSnapSendRecipients;
@property(readonly, nonatomic) unsigned long long memoriesSaveCount; // @synthesize memoriesSaveCount=_memoriesSaveCount;
@property(readonly, nonatomic) unsigned long long storyPostCount; // @synthesize storyPostCount=_storyPostCount;
@property(readonly, nonatomic) unsigned long long snapSendCount; // @synthesize snapSendCount=_snapSendCount;
@property(readonly, copy, nonatomic) NSString *unlockableId; // @synthesize unlockableId=_unlockableId;
@property(readonly, nonatomic) double firstTriggerTimestampSec; // @synthesize firstTriggerTimestampSec=_firstTriggerTimestampSec;
@property(readonly, nonatomic) double firstFaceRenderTimestampSec; // @synthesize firstFaceRenderTimestampSec=_firstFaceRenderTimestampSec;
@property(readonly, nonatomic) long long unlockType; // @synthesize unlockType=_unlockType;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(readonly, copy, nonatomic) NSString *lensOptionId; // @synthesize lensOptionId=_lensOptionId;
@property(readonly, nonatomic) _Bool withSelfieCamera; // @synthesize withSelfieCamera=_withSelfieCamera;
@property(readonly, nonatomic) _Bool withWorldCamera; // @synthesize withWorldCamera=_withWorldCamera;
@property(readonly, nonatomic) _Bool isAudioOn; // @synthesize isAudioOn=_isAudioOn;
@property(readonly, nonatomic) unsigned long long camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCamera:(unsigned long long)arg1 isAudioOn:(_Bool)arg2 withWorldCamera:(_Bool)arg3 withSelfieCamera:(_Bool)arg4 lensOptionId:(id)arg5 encryptedGeoData:(id)arg6 unlockType:(long long)arg7 firstFaceRenderTimestampSec:(double)arg8 firstTriggerTimestampSec:(double)arg9 unlockableId:(id)arg10 snapSendCount:(unsigned long long)arg11 storyPostCount:(unsigned long long)arg12 memoriesSaveCount:(unsigned long long)arg13 directSnapSendRecipients:(unsigned long long)arg14 totalSwipedViewSec:(double)arg15 swipedOverCount:(unsigned long long)arg16 maxSwipeTimeSec:(double)arg17 recordingTimeSec:(double)arg18 postCaptureTimeSec:(double)arg19 totalTimeSec:(double)arg20 maxContinuousTimeSec:(double)arg21 indexPosition:(long long)arg22 rawAdData:(id)arg23 encryptedSponsoredUnlockableTargetingInfoData:(id)arg24 rankingId:(id)arg25 rankingData:(id)arg26 shouldRecordAttachment:(_Bool)arg27 withAttachmentOpen:(_Bool)arg28 attachmentType:(id)arg29 attachmentOpenTimestamp:(id)arg30 attachmentViewTimeSec:(double)arg31 attachmentMediaDurationSec:(double)arg32 attachmentIsRedirectToStore:(_Bool)arg33 attachmentIsRedirectToWebview:(_Bool)arg34 attachmentIsPixelCookieAvailable:(_Bool)arg35;

@end

