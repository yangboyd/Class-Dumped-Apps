//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAFeedbackInputViewController;

@protocol WAFeedbackInputControllerDelegate <NSObject>
- (void)feedbackInputControllerDidCancel:(WAFeedbackInputViewController *)arg1;
- (void)feedbackInputController:(WAFeedbackInputViewController *)arg1 didFinishWithFeedbackText:(NSString *)arg2;
@end

