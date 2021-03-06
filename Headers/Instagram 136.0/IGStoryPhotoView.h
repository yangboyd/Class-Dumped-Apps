//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGImageProgressViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryPlayerMediaViewType-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryStaticMediaProgressManagerDelegate-Protocol.h>

@class IGFeedItemVPVDImpressionHelper, IGImageProgressView, IGImageSpecifier, IGStoryStaticMediaProgressManager, NSString;
@protocol IGStoryItemType><IGUnitItemInformationProviding, IGStoryPlayerMediaViewDelegate, IGUserLauncherSet;

@interface IGStoryPhotoView : UIView <IGImageProgressViewDelegate, IGStoryStaticMediaProgressManagerDelegate, IGStoryPlayerMediaViewType>
{
    IGFeedItemVPVDImpressionHelper *vpvdImpressionHelper;
    id <IGStoryItemType><IGUnitItemInformationProviding> _item;
    IGImageProgressView *_photoView;
    IGStoryStaticMediaProgressManager *_progressManager;
    IGImageSpecifier *_mediaViewLastLoadedImageSpecifier;
    id <IGStoryPlayerMediaViewDelegate> _delegate;
    NSString *_module;
    id <IGUserLauncherSet> _launcherSet;
}

@property(retain, nonatomic) id <IGUserLauncherSet> launcherSet; // @synthesize launcherSet=_launcherSet;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) __weak id <IGStoryPlayerMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGImageSpecifier *mediaViewLastLoadedImageSpecifier; // @synthesize mediaViewLastLoadedImageSpecifier=_mediaViewLastLoadedImageSpecifier;
@property(retain, nonatomic) IGStoryStaticMediaProgressManager *progressManager; // @synthesize progressManager=_progressManager;
@property(readonly, nonatomic) IGImageProgressView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) id <IGStoryItemType><IGUnitItemInformationProviding> item; // @synthesize item=_item;
@property(retain, nonatomic) IGFeedItemVPVDImpressionHelper *vpvdImpressionHelper; // @synthesize vpvdImpressionHelper;
- (void).cxx_destruct;
- (_Bool)isShowingContent;
- (_Bool)isViewFinishedLoading;
- (void)storyStaticMediaProgressManagerDidPlayToEnd:(id)arg1;
- (void)storyStaticMediaProgressManager:(id)arg1 didUpdateProgress:(double)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didLoadPreviewImage:(id)arg2 progressiveJPEGScanNumber:(id)arg3;
- (double)cellPlayTime;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize)mediaSize;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)prepareForReuse;
- (void)seekToBeginning;
- (_Bool)isPlaying;
- (void)stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)retryLoadItem:(id)arg1;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 experimentSetProvider:(id)arg5 launcherSet:(id)arg6 module:(id)arg7;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

