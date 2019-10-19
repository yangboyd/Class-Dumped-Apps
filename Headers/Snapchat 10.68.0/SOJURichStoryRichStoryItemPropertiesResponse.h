//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJURichStoryRichStoryItemPropertiesResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJURichStoryRichStoryAdToLens, SOJURichStoryRichStoryAppInstallAndroid, SOJURichStoryRichStoryAppInstallIos, SOJURichStoryRichStoryCameraAttachment, SOJURichStoryRichStoryDeepLinkAttachment, SOJURichStoryRichStoryInteractionZone, SOJURichStoryRichStoryNotificationOptIn, SOJURichStoryRichStorySubscription;

@interface SOJURichStoryRichStoryItemPropertiesResponse : NSObject <SOJURichStoryRichStoryItemPropertiesResponse>
{
    NSString *_file;
    NSArray *_images;
    NSArray *_articleVideos;
    NSString *_background;
    NSString *_backgroundType;
    NSString *_overlay;
    NSString *_videoId;
    NSString *_mode;
    NSString *_docking;
    NSString *_sponsoredOverlay;
    NSString *_videoFirstFrame;
    NSString *_videoShareFrame;
    NSNumber *_zIndex;
    NSString *_icon;
    NSString *_title;
    SOJURichStoryRichStoryAppInstallIos *_ios;
    SOJURichStoryRichStoryAppInstallAndroid *_android;
    NSString *_url;
    NSNumber *_allowJsInjection;
    NSArray *_deepLinkUrls;
    NSArray *_allowedWebviewMacros;
    NSNumber *_allowWebStorage;
    NSNumber *_useImmersiveMode;
    NSNumber *_videoRotationEnabled;
    NSString *_sharingAudience;
    NSString *_sharingMethod;
    SOJURichStoryRichStoryDeepLinkAttachment *_deepLinkAttachment;
    NSNumber *_iosSmartDeeplinkAppId;
    NSString *_androidSmartDeeplinkPackageId;
    NSNumber *_controlAudio;
    NSNumber *_blockWebviewPreloading;
    NSString *_subscriptionMethod;
    NSArray *_jsBridgeCapabilities;
    NSArray *_commerceCatalogs;
    SOJURichStoryRichStoryNotificationOptIn *_notificationOptIn;
    SOJURichStoryRichStorySubscription *_subscription;
    SOJURichStoryRichStoryInteractionZone *_interactionZone;
    SOJURichStoryRichStoryCameraAttachment *_cameraAttachment;
    SOJURichStoryRichStoryAdToLens *_adToLens;
    NSNumber *_injectBitmojiAvatarId;
    NSString *_webviewBackgroundColor;
    NSNumber *_contentAspectRatio;
    NSString *_bitmojiRemoteVideoId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *bitmojiRemoteVideoId; // @synthesize bitmojiRemoteVideoId=_bitmojiRemoteVideoId;
@property(readonly, copy, nonatomic) NSNumber *contentAspectRatio; // @synthesize contentAspectRatio=_contentAspectRatio;
@property(readonly, copy, nonatomic) NSString *webviewBackgroundColor; // @synthesize webviewBackgroundColor=_webviewBackgroundColor;
@property(readonly, copy, nonatomic) NSNumber *injectBitmojiAvatarId; // @synthesize injectBitmojiAvatarId=_injectBitmojiAvatarId;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryAdToLens *adToLens; // @synthesize adToLens=_adToLens;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryCameraAttachment *cameraAttachment; // @synthesize cameraAttachment=_cameraAttachment;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryInteractionZone *interactionZone; // @synthesize interactionZone=_interactionZone;
@property(readonly, copy, nonatomic) SOJURichStoryRichStorySubscription *subscription; // @synthesize subscription=_subscription;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryNotificationOptIn *notificationOptIn; // @synthesize notificationOptIn=_notificationOptIn;
@property(readonly, copy, nonatomic) NSArray *commerceCatalogs; // @synthesize commerceCatalogs=_commerceCatalogs;
@property(readonly, copy, nonatomic) NSArray *jsBridgeCapabilities; // @synthesize jsBridgeCapabilities=_jsBridgeCapabilities;
@property(readonly, copy, nonatomic) NSString *subscriptionMethod; // @synthesize subscriptionMethod=_subscriptionMethod;
@property(readonly, copy, nonatomic) NSNumber *blockWebviewPreloading; // @synthesize blockWebviewPreloading=_blockWebviewPreloading;
@property(readonly, copy, nonatomic) NSNumber *controlAudio; // @synthesize controlAudio=_controlAudio;
@property(readonly, copy, nonatomic) NSString *androidSmartDeeplinkPackageId; // @synthesize androidSmartDeeplinkPackageId=_androidSmartDeeplinkPackageId;
@property(readonly, copy, nonatomic) NSNumber *iosSmartDeeplinkAppId; // @synthesize iosSmartDeeplinkAppId=_iosSmartDeeplinkAppId;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryDeepLinkAttachment *deepLinkAttachment; // @synthesize deepLinkAttachment=_deepLinkAttachment;
@property(readonly, copy, nonatomic) NSString *sharingMethod; // @synthesize sharingMethod=_sharingMethod;
@property(readonly, copy, nonatomic) NSString *sharingAudience; // @synthesize sharingAudience=_sharingAudience;
@property(readonly, copy, nonatomic) NSNumber *videoRotationEnabled; // @synthesize videoRotationEnabled=_videoRotationEnabled;
@property(readonly, copy, nonatomic) NSNumber *useImmersiveMode; // @synthesize useImmersiveMode=_useImmersiveMode;
@property(readonly, copy, nonatomic) NSNumber *allowWebStorage; // @synthesize allowWebStorage=_allowWebStorage;
@property(readonly, copy, nonatomic) NSArray *allowedWebviewMacros; // @synthesize allowedWebviewMacros=_allowedWebviewMacros;
@property(readonly, copy, nonatomic) NSArray *deepLinkUrls; // @synthesize deepLinkUrls=_deepLinkUrls;
@property(readonly, copy, nonatomic) NSNumber *allowJsInjection; // @synthesize allowJsInjection=_allowJsInjection;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryAppInstallAndroid *android; // @synthesize android=_android;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryAppInstallIos *ios; // @synthesize ios=_ios;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSNumber *zIndex; // @synthesize zIndex=_zIndex;
@property(readonly, copy, nonatomic) NSString *videoShareFrame; // @synthesize videoShareFrame=_videoShareFrame;
@property(readonly, copy, nonatomic) NSString *videoFirstFrame; // @synthesize videoFirstFrame=_videoFirstFrame;
@property(readonly, copy, nonatomic) NSString *sponsoredOverlay; // @synthesize sponsoredOverlay=_sponsoredOverlay;
@property(readonly, copy, nonatomic) NSString *docking; // @synthesize docking=_docking;
@property(readonly, copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, copy, nonatomic) NSString *overlay; // @synthesize overlay=_overlay;
@property(readonly, copy, nonatomic) NSString *backgroundType; // @synthesize backgroundType=_backgroundType;
@property(readonly, copy, nonatomic) NSString *background; // @synthesize background=_background;
@property(readonly, copy, nonatomic) NSArray *articleVideos; // @synthesize articleVideos=_articleVideos;
@property(readonly, copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFile:(id)arg1 images:(id)arg2 articleVideos:(id)arg3 background:(id)arg4 backgroundType:(id)arg5 overlay:(id)arg6 videoId:(id)arg7 mode:(id)arg8 docking:(id)arg9 sponsoredOverlay:(id)arg10 videoFirstFrame:(id)arg11 videoShareFrame:(id)arg12 zIndex:(id)arg13 icon:(id)arg14 title:(id)arg15 ios:(id)arg16 android:(id)arg17 url:(id)arg18 allowJsInjection:(id)arg19 deepLinkUrls:(id)arg20 allowedWebviewMacros:(id)arg21 allowWebStorage:(id)arg22 useImmersiveMode:(id)arg23 videoRotationEnabled:(id)arg24 sharingAudience:(id)arg25 sharingMethod:(id)arg26 deepLinkAttachment:(id)arg27 iosSmartDeeplinkAppId:(id)arg28 androidSmartDeeplinkPackageId:(id)arg29 controlAudio:(id)arg30 blockWebviewPreloading:(id)arg31 subscriptionMethod:(id)arg32 jsBridgeCapabilities:(id)arg33 commerceCatalogs:(id)arg34 notificationOptIn:(id)arg35 subscription:(id)arg36 interactionZone:(id)arg37 cameraAttachment:(id)arg38 adToLens:(id)arg39 injectBitmojiAvatarId:(id)arg40 webviewBackgroundColor:(id)arg41 contentAspectRatio:(id)arg42 bitmojiRemoteVideoId:(id)arg43;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (float)contentAspectRatioValue;
- (_Bool)injectBitmojiAvatarIdValue;
- (long long)subscriptionMethodEnum;
- (_Bool)blockWebviewPreloadingValue;
- (_Bool)controlAudioValue;
- (long long)iosSmartDeeplinkAppIdValue;
- (long long)sharingMethodEnum;
- (long long)sharingAudienceEnum;
- (_Bool)videoRotationEnabledValue;
- (_Bool)useImmersiveModeValue;
- (_Bool)allowWebStorageValue;
- (_Bool)allowJsInjectionValue;
- (int)zIndexValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

