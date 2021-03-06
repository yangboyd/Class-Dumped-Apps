//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveMTUserPreviewStore, MASConstraint;
@protocol IESLiveLoadingFactory, IESLiveWebImageService;

@interface IESLiveMTBlankPreviewView : UIView
{
    _Bool _landscapeMode;
    IESLiveMTUserPreviewStore *_store;
    UIView *_whiteBoard;
    UIView *_backgroundMask;
    MASConstraint *_bottomConstraint;
    MASConstraint *_trailingConstraint;
    id <IESLiveWebImageService> _webImageService;
    id <IESLiveLoadingFactory> _loadingFactory;
    double _width;
}

- (void).cxx_destruct;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) id <IESLiveLoadingFactory> loadingFactory; // @synthesize loadingFactory=_loadingFactory;
@property(retain, nonatomic) id <IESLiveWebImageService> webImageService; // @synthesize webImageService=_webImageService;
@property(retain, nonatomic) MASConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) MASConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) UIView *backgroundMask; // @synthesize backgroundMask=_backgroundMask;
@property(retain, nonatomic) UIView *whiteBoard; // @synthesize whiteBoard=_whiteBoard;
@property(retain, nonatomic) IESLiveMTUserPreviewStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) _Bool landscapeMode; // @synthesize landscapeMode=_landscapeMode;
- (id)getLoadingView;
- (void)dismissWithAnimationDisable;
- (void)showWithAnimation;
- (void)createCornerRadiusIfNeeded;
- (void)dismiss:(id)arg1;
- (void)clickBackground:(id)arg1;
- (id)createBackgroundMask;
- (void)createAvatarView;
- (void)renderUI;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 landscapeMode:(_Bool)arg3;

@end

