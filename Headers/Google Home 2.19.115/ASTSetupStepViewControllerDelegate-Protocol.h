//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, QTMButton, UIViewController;
@protocol ASTSetupStepViewController;

@protocol ASTSetupStepViewControllerDelegate
- (void)setupStepViewController:(UIViewController<ASTSetupStepViewController> *)arg1 didTapLinkWithURLString:(NSString *)arg2;
- (void)setupStepViewController:(UIViewController<ASTSetupStepViewController> *)arg1 didTapRightFooterButton:(QTMButton *)arg2;
- (void)setupStepViewController:(UIViewController<ASTSetupStepViewController> *)arg1 didTapLeftFooterButton:(QTMButton *)arg2;
@end

