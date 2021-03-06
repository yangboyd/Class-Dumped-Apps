//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTHotwordTrainingStepView, MDCActivityIndicator, NSAttributedString, NSString, UIColor, UIImageView;

@protocol ASTHotwordTrainingStepViewDataSource <NSObject>
- (UIColor *)iconTintColorForHotwordTrainingStepView:(ASTHotwordTrainingStepView *)arg1;
- (_Bool)hotwordTrainingStepView:(ASTHotwordTrainingStepView *)arg1 shouldHideIcon:(UIImageView *)arg2;
- (_Bool)hotwordTrainingStepView:(ASTHotwordTrainingStepView *)arg1 shouldAnimateActivityIndicator:(MDCActivityIndicator *)arg2;
- (NSAttributedString *)attributedTextForHotwordTrainingStepView:(ASTHotwordTrainingStepView *)arg1;
- (NSString *)iconImageNameForHotwordTrainingStepView:(ASTHotwordTrainingStepView *)arg1;

@optional
- (NSString *)accessibilityLabelForTrainingStepView:(ASTHotwordTrainingStepView *)arg1;
@end

