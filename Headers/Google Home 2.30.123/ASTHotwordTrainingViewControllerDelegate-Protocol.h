//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol ASTHotwordTrainingViewControllerDelegate <NSObject>
- (void)hotwordTrainingViewController:(UIViewController *)arg1 didTapLinkWithURLString:(NSString *)arg2;
- (void)hotwordTrainingViewControllerDidTapStartRecordingButton:(UIViewController *)arg1;
- (void)hotwordTrainingViewControllerDidFinishTraining:(UIViewController *)arg1;
- (void)hotwordTrainingViewControllerDidCancelTraining:(UIViewController *)arg1;
@end

