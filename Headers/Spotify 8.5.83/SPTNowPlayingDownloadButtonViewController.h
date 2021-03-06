//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEncoreDownloadButtonDelegate-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"
#import "_TtP17OfflineMixFeature43SPTOfflineMixNowPlayingOfflineModelObserver_-Protocol.h"

@class NSString, SPTEncoreDownloadButton, SPTNowPlayingModel;
@protocol SPTEncoreDownloadButtonFactory, _TtP17OfflineMixFeature26SPTOfflineMixModelProvider_, _TtP17OfflineMixFeature35SPTOfflineMixNowPlayingOfflineModel_;

@interface SPTNowPlayingDownloadButtonViewController : UIViewController <SPTNowPlayingModelObserver, SPTEncoreDownloadButtonDelegate, _TtP17OfflineMixFeature43SPTOfflineMixNowPlayingOfflineModelObserver_>
{
    id <SPTEncoreDownloadButtonFactory> _downloadButtonFactory;
    SPTNowPlayingModel *_model;
    id <_TtP17OfflineMixFeature26SPTOfflineMixModelProvider_> _offlineMixModelProvider;
    id <_TtP17OfflineMixFeature35SPTOfflineMixNowPlayingOfflineModel_> _offlineMixModel;
    SPTEncoreDownloadButton *_downloadButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTEncoreDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) id <_TtP17OfflineMixFeature35SPTOfflineMixNowPlayingOfflineModel_> offlineMixModel; // @synthesize offlineMixModel=_offlineMixModel;
@property(readonly, nonatomic) id <_TtP17OfflineMixFeature26SPTOfflineMixModelProvider_> offlineMixModelProvider; // @synthesize offlineMixModelProvider=_offlineMixModelProvider;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTEncoreDownloadButtonFactory> downloadButtonFactory; // @synthesize downloadButtonFactory=_downloadButtonFactory;
- (void)updateOfflineMixDownloadManagerWithNowPlayingModel:(id)arg1 trackDidChange:(_Bool)arg2;
- (void)updateWithNowPlayingModel:(id)arg1 trackDidChange:(_Bool)arg2;
- (long long)currentIconDownloadState;
- (void)updateDownloadButton;
- (void)toggleDownloadButton;
- (void)downloadButtonTappedWithSender:(id)arg1;
- (void)downloadButtonTapped:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)offlineStateDidChangeFor:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNowPlayingModel:(id)arg1 downloadButtonFactory:(id)arg2 offlineMixModelProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

