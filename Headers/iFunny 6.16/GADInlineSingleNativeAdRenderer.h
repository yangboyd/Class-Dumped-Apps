//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/GADAdRendering-Protocol.h>

@class GADAdMediaContent, GADAdRenderingMetadata, GADEventContext, GADInstreamMediaContent, GADInternalNativeAd, GADNativeAdAttribution, GADURLSession, GADWebViewController, NSArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_group;

@interface GADInlineSingleNativeAdRenderer : NSObject <GADAdRendering>
{
    GADURLSession *_session;
    struct NSDictionary *_adConfiguration;
    GADEventContext *_adContext;
    NSMutableDictionary *_assets;
    CDUnknownBlockType _renderCompletionHandler;
    _Bool _disableImageLoading;
    NSArray *_images;
    GADInternalNativeAd *_internalNativeAd;
    GADAdMediaContent *_mediaContent;
    GADInstreamMediaContent *_instreamContent;
    NSSet *_requiredAssets;
    GADNativeAdAttribution *_attribution;
    GADWebViewController *_adVerificationWebViewController;
    GADWebViewController *_mediaContentWebViewController;
    NSObject<OS_dispatch_group> *_assetLoadingGroup;
    GADAdRenderingMetadata *_metadata;
}

- (void).cxx_destruct;
- (void)loadImageArray:(id)arg1 loadedImages:(id)arg2;
- (void)loadSingleImage:(id)arg1 assetName:(id)arg2;
- (void)renderAttribution;
- (void)loadAdVerificationWebView;
- (void)renderInstreamMediaContent;
- (void)renderMediaContent;
- (void)renderImages;
- (void)renderCustomAssets;
- (void)renderMuteAdInfo;
- (void)renderSingleAssets;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isVideo;
- (void)invalidateAndCancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

