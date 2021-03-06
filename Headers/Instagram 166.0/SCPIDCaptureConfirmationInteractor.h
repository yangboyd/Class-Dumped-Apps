//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCPIDCaptureStage;
@protocol SCPIDCaptureConfirmationInteractorDelegate;

@interface SCPIDCaptureConfirmationInteractor : NSObject
{
    SCPIDCaptureStage *_captureStage;
    NSArray *_capturedDataArray;
    id <SCPIDCaptureConfirmationInteractorDelegate> _delegate;
    long long _captureFlow;
}

+ (id)newWithCapturedDataArray:(id)arg1 captureFlow:(long long)arg2 captureStage:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long captureFlow; // @synthesize captureFlow=_captureFlow;
@property(nonatomic) __weak id <SCPIDCaptureConfirmationInteractorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *capturedDataArray; // @synthesize capturedDataArray=_capturedDataArray;
@property(readonly, nonatomic) SCPIDCaptureStage *captureStage; // @synthesize captureStage=_captureStage;
- (id)rotatedImageWithImage:(id)arg1 andCurrentOrientation:(long long)arg2;
- (id)capturedDataForCurrentStage;
- (void)confirm;
- (void)openCaptureCase;
- (id)initWithCapturedDataArray:(id)arg1 captureFlow:(long long)arg2 captureStage:(id)arg3;

@end

