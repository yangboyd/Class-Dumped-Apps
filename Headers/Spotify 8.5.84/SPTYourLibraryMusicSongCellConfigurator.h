//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEThemeObserver-Protocol.h"
#import "SPTEncoreTrackRowDelegate-Protocol.h"

@class SPTFreeTierPreCurationChunkyRowStyle, SPTYourLibraryMusicGLUETheme;
@protocol GLUEImageLoader, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory, SPTCollectionPlatformConfiguration, SPTEncoreTrackRowFactory, SPTModalPresentationController, SPTShelves, SPTYourLibraryMusicSongCellConfiguratorDelegate;

@interface SPTYourLibraryMusicSongCellConfigurator : NSObject <GLUEThemeObserver, SPTEncoreTrackRowDelegate>
{
    double _preferredPreviewCellHeight;
    double _preferredCellHeight;
    id <SPTYourLibraryMusicSongCellConfiguratorDelegate> _delegate;
    id <GLUEImageLoader> _glueImageLoader;
    SPTYourLibraryMusicGLUETheme *_theme;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <SPTShelves> _shelves;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    SPTFreeTierPreCurationChunkyRowStyle *_chunkRowStyle;
    id <SPTEncoreTrackRowFactory> _trackRowFactory;
    id <SPTModalPresentationController> _modalPresentationController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTEncoreTrackRowFactory> trackRowFactory; // @synthesize trackRowFactory=_trackRowFactory;
@property(retain, nonatomic) SPTFreeTierPreCurationChunkyRowStyle *chunkRowStyle; // @synthesize chunkRowStyle=_chunkRowStyle;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(retain, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(retain, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(retain, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(retain, nonatomic) SPTYourLibraryMusicGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double preferredCellHeight; // @synthesize preferredCellHeight=_preferredCellHeight;
@property(readonly, nonatomic) double preferredPreviewCellHeight; // @synthesize preferredPreviewCellHeight=_preferredPreviewCellHeight;
- (void)unlikeWithSender:(id)arg1;
- (void)unhideWithSender:(id)arg1;
- (void)unbanWithSender:(id)arg1;
- (void)tappedWithSender:(id)arg1;
- (void)contextMenuTappedWithSender:(id)arg1;
- (void)themeUpdated:(id)arg1;
- (void)cellImagePreviewButtonDidTouchUpInside:(id)arg1;
- (void)sectionHeaderButtonAction:(id)arg1;
- (void)sectionHeaderTrailingButtonAction:(id)arg1;
- (void)cellContextMenuButtonDidTouchUpInside:(id)arg1;
- (void)configureSwipeGesturesOnCell:(id)arg1 viewModel:(id)arg2;
- (void)configureMultipleAccessoriesViewForCell:(id)arg1 viewModel:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1 withViewModel:(id)arg2;
- (void)setupLeadingViewForCell:(id)arg1 withViewModel:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (void)handleAudioPreviewOnCell:(id)arg1;
- (void)configureButtonSectionHeader:(id)arg1 withViewModel:(id)arg2;
- (void)configureSectionHeader:(id)arg1 withViewModel:(id)arg2;
- (void)configurePreviewCell:(id)arg1 withViewModel:(id)arg2;
- (id)encoreModelForTrackViewModel:(id)arg1 isPressed:(_Bool)arg2;
- (void)configureEncoreCell:(id)arg1 withViewModel:(id)arg2;
- (void)dealloc;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2 collectionConfiguration:(id)arg3 audioPreviewModelFactory:(id)arg4 audioPreviewUIFactory:(id)arg5 shelves:(id)arg6 trackRowFactory:(id)arg7;

@end

