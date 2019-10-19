//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAltitudeStickerViewDelegate-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCInfoStickerProtocol-Protocol.h"
#import "SCMentionStickerViewDelegate-Protocol.h"
#import "SCTimestampStickerViewDelegate-Protocol.h"
#import "SCVenueStickerViewDelegate-Protocol.h"
#import "SCWeatherStickerViewDelegate-Protocol.h"

@class NSDictionary, NSString, SCEventListenerAnnouncer, SCFuture;

@interface SCInfoSticker : NSObject <SCInfoStickerProtocol, SCAltitudeStickerViewDelegate, SCWeatherStickerViewDelegate, SCTimestampStickerViewDelegate, SCVenueStickerViewDelegate, SCMentionStickerViewDelegate, SCEventAnnouncing>
{
    NSDictionary *_config;
    SCFuture *_imageFuture;
    unsigned long long _type;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (unsigned long long)infoTypeForSticker:(id)arg1;
+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_triggerImageUpdateEventWithImage:(id)arg1;
- (id)_generateImageFromCurrentImageContext;
- (void)mentionStickerViewDidUpdate:(id)arg1;
- (void)venueStickerDidUpdate:(id)arg1;
- (void)timestampStickerDidUpdate:(id)arg1;
- (void)weatherStickerDidUpdate:(id)arg1;
- (void)altitudeStickerDidUpdate:(id)arg1;
- (id)stickerStateWithRelativeSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 isTracking:(_Bool)arg5 trackingTrajectory:(id)arg6 isFlipped:(_Bool)arg7;
- (id)config;
- (id)shortLoggingName;
- (id)loggingParameters;
- (id)stickerId;
- (id)packId;
- (unsigned long long)type;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)filterViewWithFrame:(struct CGRect)arg1 type:(long long)arg2;
- (id)toSOJUSticker;
- (id)thumbnailImageWithUserSession:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imageWithUserSession:(id)arg1 contexts:(id)arg2 isDecoded:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long infoType;
- (id)initWithFilterProviderForMemories:(id)arg1 sticker:(id)arg2 snap:(id)arg3 preferenceAdaptor:(id)arg4 downloadableManager:(id)arg5;
- (id)initWithConfigForPicker:(id)arg1;
- (id)initWithConfigForPreview:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

