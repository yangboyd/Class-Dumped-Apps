//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WABloksKit/NSObject-Protocol.h>

@protocol FBViewpointTrackable <NSObject>
- (_Bool)vp_shouldTrack;
- (long long)vp_level;
- (double)vp_totalArea;
- (double)vp_visibleAreaInViewport:(struct CGRect)arg1;
- (struct CGPoint)vp_bottomRightRelativeToWindow;
- (struct CGPoint)vp_topLeftRelativeToWindow;
- (struct CGRect)vp_visibleRectRelativeToWindow;
@end

