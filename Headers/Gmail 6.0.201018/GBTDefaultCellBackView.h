//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CellPositionSupport-Protocol.h"
#import "GBTActionResponderDelegate-Protocol.h"
#import "GBTSwipeable-Protocol.h"
#import "GBTSwipeableTableViewCellBackView-Protocol.h"

@class GBTActionResponder, GBTRoundedCellBackgroundView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIColor;
@protocol GBTCellBackViewDelegate, GBTSwipeableDelegate, HUBColorScheme;

@interface GBTDefaultCellBackView : UIView <GBTActionResponderDelegate, GBTSwipeable, GBTSwipeableTableViewCellBackView, CellPositionSupport>
{
    GBTActionResponder *_actionResponder;
    NSMutableDictionary *_buttonForAction;
    NSMutableArray *_allButtons;
    UIView *_leftActionView;
    UIView *_rightActionView;
    GBTRoundedCellBackgroundView *_swipeBackground;
    UIColor *_leftSwipeActionColor;
    UIColor *_rightSwipeActionColor;
    id <HUBColorScheme> _colorScheme;
    _Bool _swipeToActMode;
    unsigned long long _cellPosition;
    id <GBTSwipeableDelegate> swipeableDelegate;
    NSArray *_swipeActions;
    double _verticalOuterPadding;
    id <GBTCellBackViewDelegate> _delegate;
    double _horizontalOuterPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double horizontalOuterPadding; // @synthesize horizontalOuterPadding=_horizontalOuterPadding;
@property(nonatomic) __weak id <GBTCellBackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double verticalOuterPadding; // @synthesize verticalOuterPadding=_verticalOuterPadding;
@property(nonatomic) _Bool swipeToActMode; // @synthesize swipeToActMode=_swipeToActMode;
@property(copy, nonatomic) NSArray *swipeActions; // @synthesize swipeActions=_swipeActions;
@property(nonatomic) __weak id <GBTSwipeableDelegate> swipeableDelegate; // @synthesize swipeableDelegate;
@property(nonatomic) unsigned long long cellPosition; // @synthesize cellPosition=_cellPosition;
- (id)swipeBackgroundColorForAction:(unsigned long long)arg1;
- (void)updateSwipeBackgroundForCellPosition;
- (id)swipeItemForActionType:(unsigned long long)arg1;
- (struct CGRect)rightButtonFrame;
- (struct CGRect)leftButtonFrame;
- (void)prepareButtonsForReuse;
- (void)didInvokeAction:(unsigned long long)arg1;
- (id)makeButtonForAction:(unsigned long long)arg1;
- (void)updateWithVisibilityRatio:(double)arg1 isPastMinimumDistance:(_Bool)arg2 animated:(_Bool)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *triggeringViewOnSwipe;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

