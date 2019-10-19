//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCOperaPlayerView, SCOperaStandardVideoControlsView;

@interface SCOperaRotatingVideoLayerView : UIView <SCOperaLayerView>
{
    SCOperaStandardVideoControlsView *_controlsView;
    SCOperaPlayerView *_playerView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCOperaPlayerView *playerView; // @synthesize playerView=_playerView;
@property(readonly, nonatomic) SCOperaStandardVideoControlsView *controlsView; // @synthesize controlsView=_controlsView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)enableControls:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

