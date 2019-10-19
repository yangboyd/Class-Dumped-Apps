//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RCTSurface, RCTSurfaceRootView;

@interface RCTSurfaceView : UIView
{
    RCTSurfaceRootView *_rootView;
    long long _stage;
    RCTSurface *_surface;
}

@property(readonly, nonatomic) __weak RCTSurface *surface; // @synthesize surface=_surface;
- (void).cxx_destruct;
- (void)_updateStage;
- (long long)stage;
- (void)setStage:(long long)arg1;
- (id)rootView;
- (void)setRootView:(id)arg1;
- (id)initWithSurface:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

