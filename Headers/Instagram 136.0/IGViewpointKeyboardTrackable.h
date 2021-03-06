//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGViewpointOcclusionDetectingTrackable-Protocol.h>

@class NSString;

@interface IGViewpointKeyboardTrackable : NSObject <IGViewpointOcclusionDetectingTrackable>
{
    struct CGRect _keyboardFrame;
}

- (_Bool)vp_occlusiondetection_isOpaque;
- (id)vp_occlusiondetection_children;
- (id)vp_occlusiondetection_parent;
- (_Bool)vp_shouldTrack;
- (double)vp_visibleAreaInViewport:(struct CGRect)arg1;
- (double)vp_totalArea;
- (struct CGPoint)vp_topLeftInWindow;
- (long long)vp_level;
- (struct CGRect)vp_boundingRectInWindow;
- (struct CGPoint)vp_bottomRightInWindow;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

