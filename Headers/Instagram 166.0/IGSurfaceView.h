//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, IGRenderer, IGSurface;

@interface IGSurfaceView : UIView
{
    IGSurface *_surface;
    IGRenderer *_renderer;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGSurface *surface; // @synthesize surface=_surface;
@property(retain, nonatomic) IGRenderer *renderer; // @synthesize renderer=_renderer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) CAEAGLLayer *eaglLayer;

@end

