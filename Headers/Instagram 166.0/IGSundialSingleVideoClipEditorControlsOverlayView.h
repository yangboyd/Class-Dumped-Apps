//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGCameraToolsMenu, UIControl;
@protocol IGCameraToolsMenuTool;

@interface IGSundialSingleVideoClipEditorControlsOverlayView : IGPassthroughView
{
    IGCameraToolsMenu *_toolsMenu;
    UIControl<IGCameraToolsMenuTool> *_aspectFitFillToggleButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl<IGCameraToolsMenuTool> *aspectFitFillToggleButton; // @synthesize aspectFitFillToggleButton=_aspectFitFillToggleButton;
@property(readonly, nonatomic) IGCameraToolsMenu *toolsMenu; // @synthesize toolsMenu=_toolsMenu;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

@end

