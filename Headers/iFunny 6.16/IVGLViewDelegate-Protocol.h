//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class GMSx_IVGLView, NSString;

@protocol IVGLViewDelegate <NSObject>

@optional
- (void)swipeDidEnd:(GMSx_IVGLView *)arg1;
- (void)swipeDidStart:(GMSx_IVGLView *)arg1;
- (void)streetViewView:(GMSx_IVGLView *)arg1 didFailToLoadPano:(NSString *)arg2;
- (void)streetViewView:(GMSx_IVGLView *)arg1 didChangeToPano:(NSString *)arg2;
- (void)streetViewView:(GMSx_IVGLView *)arg1 willChangeToPano:(NSString *)arg2;
- (void)streetViewView:(GMSx_IVGLView *)arg1 didTap:(struct CGPoint)arg2;
- (void)didRequestReloadOfPanoramaForStreetViewView:(GMSx_IVGLView *)arg1;
- (void)cameraPanGestureDidEnd:(GMSx_IVGLView *)arg1;
-     // Error parsing type: v24@0:8r^{Camera=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{GMSx_Location}^{Rotation}^{Size}f}16, name: cameraDidChange:
@end

