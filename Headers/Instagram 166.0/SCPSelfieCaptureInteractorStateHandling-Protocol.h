//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSArray, SCPFaceAlignmentDirection, SCPSelfieCaptureInteractorState;
@protocol SCPSelfieCaptureInteractorStateHandlerDelegate;

@protocol SCPSelfieCaptureInteractorStateHandling <NSObject>
@property(readonly, copy, nonatomic) NSArray *alignmentDirections;
@property(nonatomic) __weak id <SCPSelfieCaptureInteractorStateHandlerDelegate> delegate;
- (_Bool)goToNextDirection;
- (_Bool)startAlignmentWithDirections:(NSArray *)arg1;
- (_Bool)goToState:(SCPSelfieCaptureInteractorState *)arg1;
- (SCPSelfieCaptureInteractorState *)state;
- (SCPFaceAlignmentDirection *)currentAlignmentDirection;
@end

