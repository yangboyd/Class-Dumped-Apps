//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/SCPSelfieCaptureInteractorStateHandling-Protocol.h>

@class NSArray, NSString, SCPSelfieCaptureInteractorState;
@protocol OS_dispatch_queue, SCPSelfieCaptureInteractorStateHandlerDelegate;

@interface SCPSelfieCaptureInteractorStateHandler : NSObject <SCPSelfieCaptureInteractorStateHandling>
{
    NSObject<OS_dispatch_queue> *_mrswQueue;
    SCPSelfieCaptureInteractorState *_state;
    id <SCPSelfieCaptureInteractorStateHandlerDelegate> _delegate;
    NSArray *_alignmentDirections;
    unsigned long long _currentDirectionIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentDirectionIndex; // @synthesize currentDirectionIndex=_currentDirectionIndex;
@property(copy, nonatomic) NSArray *alignmentDirections; // @synthesize alignmentDirections=_alignmentDirections;
@property(nonatomic) __weak id <SCPSelfieCaptureInteractorStateHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCPSelfieCaptureInteractorState *state; // @synthesize state=_state;
- (_Bool)goToVideoRecordedWithCapturedDataL:(id)arg1;
- (_Bool)goToAligningFinished;
- (_Bool)goToFaceAlignedWithAlignment:(id)arg1;
- (_Bool)goToFaceDetected;
- (_Bool)goToLookingForFace;
- (_Bool)goToAligningStarted;
- (id)currentAlignmentDirection;
- (_Bool)restartAlignmentWithCurrentDirections;
- (_Bool)goToState:(id)arg1;
- (_Bool)reset;
- (_Bool)goToNextDirection;
- (_Bool)startAlignmentWithDirections:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

