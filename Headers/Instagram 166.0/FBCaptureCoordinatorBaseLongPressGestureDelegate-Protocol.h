//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBCaptureCoordinatorBaseGestureDelegate-Protocol.h>

@class FBCaptureCoordinatorBase, FBMPLongPressGestureData, UILongPressGestureRecognizer, UIView;

@protocol FBCaptureCoordinatorBaseLongPressGestureDelegate <FBCaptureCoordinatorBaseGestureDelegate>
- (void)captureCoordinator:(FBCaptureCoordinatorBase *)arg1 didProduceLongPressGestureData:(FBMPLongPressGestureData *)arg2 fromCaptureView:(UIView *)arg3;
- (_Bool)captureCoordinator:(FBCaptureCoordinatorBase *)arg1 shouldProduceLongPressGestureDataFromLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg2;
@end

