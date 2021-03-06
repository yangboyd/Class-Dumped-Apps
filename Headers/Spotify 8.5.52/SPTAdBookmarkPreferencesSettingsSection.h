//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTFreeTierPreCurationTheme, SPTSavedAdsViewModel;
@protocol GLUEImageLoader, SPTAdsBaseCosmosBridge, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory, SPTLinkDispatcher, SPTLogCenter, SPTSnackbarConditionalPresenter;

@interface SPTAdBookmarkPreferencesSettingsSection : SettingsSection
{
    id <SPTLogCenter> _logCenter;
    SPTSavedAdsViewModel *_viewModel;
    id <GLUEImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTFreeTierPreCurationTheme *_theme;
}

@property(readonly, nonatomic) SPTFreeTierPreCurationTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTSavedAdsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logSettingsInteraction;
- (id)footerText;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)initWithSettingsViewController:(id)arg1 logCenter:(id)arg2 viewModel:(id)arg3 glueImageLoader:(id)arg4 linkDispatcher:(id)arg5 cosmosBridge:(id)arg6 audioPreviewModelFactory:(id)arg7 audioPreviewUIFactory:(id)arg8 snackbarPresenter:(id)arg9 theme:(id)arg10;

@end

