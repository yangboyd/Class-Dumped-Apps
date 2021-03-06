//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAStackView.h"

#import "GWAFlowSection-Protocol.h"
#import "GWAResultingComponent-Protocol.h"

@class GWAComponentGroup, GWADependencyGraph, NSArray, NSMutableArray, NSString, OrchLineItemContainer, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWALineItemContainerView : OAStackView <GWAResultingComponent, GWAFlowSection>
{
    OrchLineItemContainer *_proto;
    NSArray *_childComponents;
    NSMutableArray *_allChildComponentViews;
    NSMutableArray *_activeChildComponentViews;
    GWADependencyGraph *_dependencyGraph;
    _Bool _shouldAddSubviews;
    _Bool _isTopContainer;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
}

@property(nonatomic) _Bool isTopContainer; // @synthesize isTopContainer=_isTopContainer;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)activeChildViews;
- (id)allChildViews;
- (void)handleModifyComponentValuesAction:(id)arg1;
- (_Bool)isLineItemBundleHeroOnly:(id)arg1;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)initWithLineItemContainer:(id)arg1 isTopContainer:(_Bool)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

