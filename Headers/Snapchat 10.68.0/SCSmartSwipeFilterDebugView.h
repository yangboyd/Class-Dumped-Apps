//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSmartSwipeFilterFocusLocationChangeDelegate-Protocol.h"

@class NSString, SCGradientView, UILabel;

@interface SCSmartSwipeFilterDebugView : UIView <SCSmartSwipeFilterFocusLocationChangeDelegate>
{
    UILabel *_filterNameLabel;
    UILabel *_isDynamicLabel;
    UILabel *_carouselGroupLabel;
    UILabel *_isCacheHitLabel;
    UILabel *_debugTimeLabel;
    UILabel *_bmpCompositeTimeLabel;
    UILabel *_bmpSizeLabel;
    UILabel *_targetingTypeLabel;
    SCGradientView *_basicView;
    UIView *_detailView;
}

- (void).cxx_destruct;
- (void)swipeFilterView:(id)arg1 didChangeFocusLocation:(id)arg2 filterArranger:(id)arg3;
- (void)setCurrentFilter:(id)arg1 filterArranger:(id)arg2;
- (id)textLabelWithShadow;
- (void)toggleDetail:(id)arg1;
- (void)openBBG:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

