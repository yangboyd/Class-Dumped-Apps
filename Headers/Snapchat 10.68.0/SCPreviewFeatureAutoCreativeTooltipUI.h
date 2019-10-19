//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAutoCreativeUIDelegate-Protocol.h"

@class NSString, SCAutoCreativeFilterTooltipView, SCFeatureReference, UIView;
@protocol SCAutoCreativeMediaDelegate;

@interface SCPreviewFeatureAutoCreativeTooltipUI : NSObject <SCAutoCreativeUIDelegate>
{
    UIView *_containerView;
    SCFeatureReference *_swipeFilters;
    SCAutoCreativeFilterTooltipView *_tooltipView;
    id <SCAutoCreativeMediaDelegate> mediaDelegate;
}

@property(nonatomic) __weak id <SCAutoCreativeMediaDelegate> mediaDelegate; // @synthesize mediaDelegate;
- (void).cxx_destruct;
- (void)configureWithView:(id)arg1;
- (void)autoCreativeManagerDismissUI:(id)arg1;
- (void)autoCreativeManager:(id)arg1 drawUIForCreativeFilter:(id)arg2;
- (id)initWithSwipeFilters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

