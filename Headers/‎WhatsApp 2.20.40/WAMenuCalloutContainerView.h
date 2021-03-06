//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Core/WAMenuCalloutViewLongPressContinuationHandler-Protocol.h>

@class NSArray, NSString, UISelectionFeedbackGenerator, WAMenuCalloutContainerRowView, WAMenuItem;
@protocol WAMenuCalloutContainerViewDelegate;

@interface WAMenuCalloutContainerView : UIView <WAMenuCalloutViewLongPressContinuationHandler>
{
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    long long _maxVisibleRows;
    long long _pageCount;
    WAMenuItem *_moreMenuItem;
    long long _precedingLayoutAttribute;
    long long _followingLayoutAttribute;
    double _iconWidth;
    NSArray *_menuItems;
    NSArray *_rows;
    WAMenuCalloutContainerRowView *_highlightedRow;
    id <WAMenuCalloutContainerViewDelegate> _delegate;
    long long _layoutDirection;
    long long _pageIndex;
}

@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(readonly, nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) __weak id <WAMenuCalloutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMenuCalloutContainerRowView *highlightedRow; // @synthesize highlightedRow=_highlightedRow;
@property(readonly, nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(readonly, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;
- (void)handleMenuItem:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)longPressContinuationHandlerTouchDidEndAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)longPressContinuationHandlerTouchDidMoveToLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)rowAtPoint:(struct CGPoint)arg1;
- (void)reload;
@property(readonly, nonatomic) NSArray *visibleMenuItems;
- (void)performMoreRowAction;
- (id)initWithDelegate:(id)arg1 layoutDirection:(long long)arg2 iconWidth:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

