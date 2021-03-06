//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSFezAlertController, A9VSFezProductDescriptor, UIViewController;

@interface A9VSFezRoomCaptureRetryConfigurator : NSObject
{
    _Bool _isReturnAlertPresented;
    CDUnknownBlockType _onRetry;
    CDUnknownBlockType _onCancelRetry;
    CDUnknownBlockType _onReturn;
    A9VSFezProductDescriptor *_productDescriptor;
    UIViewController *_presenterController;
    unsigned long long _retryCount;
    A9VSFezAlertController *_activeAlertController;
}

@property(nonatomic) __weak A9VSFezAlertController *activeAlertController; // @synthesize activeAlertController=_activeAlertController;
@property(nonatomic) _Bool isReturnAlertPresented; // @synthesize isReturnAlertPresented=_isReturnAlertPresented;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) __weak UIViewController *presenterController; // @synthesize presenterController=_presenterController;
@property(nonatomic) __weak A9VSFezProductDescriptor *productDescriptor; // @synthesize productDescriptor=_productDescriptor;
@property(copy, nonatomic) CDUnknownBlockType onReturn; // @synthesize onReturn=_onReturn;
@property(copy, nonatomic) CDUnknownBlockType onCancelRetry; // @synthesize onCancelRetry=_onCancelRetry;
@property(copy, nonatomic) CDUnknownBlockType onRetry; // @synthesize onRetry=_onRetry;
- (void).cxx_destruct;
- (id)returnAction;
- (id)cancelRetryAction;
- (id)retryAction;
- (void)dismissActiveAlert;
- (void)presentReturnAlert;
- (void)presentRetryAlert;
- (void)presentAlert;
- (id)initWithProductDescriptor:(id)arg1 presenterController:(id)arg2;

@end

