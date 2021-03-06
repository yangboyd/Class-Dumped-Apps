//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, UIImage, UIImageView, YTColorPalette, YTInteractionLoggingProxyButton, YTShortsNavigationHeaderView, YTShortsScrimView;

@interface YTShortsEditorViewControllerView : UIView
{
    UIImage *_audioEntryButtonDefaultImage;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_previewView;
    UIView *_playerView;
    double _contentAspectRatio;
    UIView *_stickerContainerView;
    CDUnknownBlockType _editorActionHandler;
    UIView *_toolbeltView;
    YTInteractionLoggingProxyButton *_autoRetreatToCameraProxy;
    YTShortsNavigationHeaderView *_headerView;
    YTShortsScrimView *_scrimView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTShortsScrimView *scrimView; // @synthesize scrimView=_scrimView;
@property(readonly, nonatomic) YTShortsNavigationHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) YTInteractionLoggingProxyButton *autoRetreatToCameraProxy; // @synthesize autoRetreatToCameraProxy=_autoRetreatToCameraProxy;
@property(retain, nonatomic) UIView *toolbeltView; // @synthesize toolbeltView=_toolbeltView;
@property(copy, nonatomic) CDUnknownBlockType editorActionHandler; // @synthesize editorActionHandler=_editorActionHandler;
@property(retain, nonatomic) UIView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(nonatomic) double contentAspectRatio; // @synthesize contentAspectRatio=_contentAspectRatio;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(readonly, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void)updateInteractionLogging;
- (id)visualElementForControl:(id)arg1;
- (void)sendAction:(long long)arg1 forVisualElement:(id)arg2;
- (void)updateViewHierarchy;
- (void)setUpGradientView;
@property(readonly, nonatomic) YTColorPalette *colorPalette;
- (struct CGRect)contentFrameForAspect:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)layoutSubviews;
- (void)setControlsHidden:(_Bool)arg1;
- (void)setPreviewImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSArray *visibleLoggingElements;

@end

