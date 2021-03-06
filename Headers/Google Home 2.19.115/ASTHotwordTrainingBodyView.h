//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ASTHotwordTrainingStepViewDataSource-Protocol.h"
#import "ASTLinkLabelDelegate-Protocol.h"
#import "ASTThemable-Protocol.h"

@class ASTLinkLabel, NSMutableArray, NSString;
@protocol ASTHotwordTrainingBodyViewDataSource, ASTHotwordTrainingBodyViewDelegate;

@interface ASTHotwordTrainingBodyView : UIView <ASTHotwordTrainingStepViewDataSource, ASTLinkLabelDelegate, ASTThemable>
{
    id <ASTHotwordTrainingBodyViewDataSource> _dataSource;
    id <ASTHotwordTrainingBodyViewDelegate> _delegate;
    NSMutableArray *_trainingStepViews;
    UIView *_bodyViewDivider;
    ASTLinkLabel *_bottomLabel;
}

- (void).cxx_destruct;
- (id)bottomLabelAttributedString;
- (id)bottomLabelAccessibilityLabel;
- (void)label:(id)arg1 didTapLink:(id)arg2;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)setUpSubviews;
- (void)applyTheme:(unsigned long long)arg1;
- (id)iconTintColorForHotwordTrainingStepView:(id)arg1;
- (_Bool)hotwordTrainingStepView:(id)arg1 shouldHideIcon:(id)arg2;
- (_Bool)hotwordTrainingStepView:(id)arg1 shouldAnimateActivityIndicator:(id)arg2;
- (id)accessibilityLabelForTrainingStepView:(id)arg1;
- (id)attributedTextForHotwordTrainingStepView:(id)arg1;
- (id)iconImageNameForHotwordTrainingStepView:(id)arg1;
- (struct CGRect)frameForCurrentTrainingStepView;
- (void)update;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

