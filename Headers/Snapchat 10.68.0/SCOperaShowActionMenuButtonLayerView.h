//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaToggleView.h"

#import "SCOperaLayerView-Protocol.h"

@class NSString, UIButton;
@protocol SCOperaShowActionMenuButtonLayerViewDelegate;

@interface SCOperaShowActionMenuButtonLayerView : SCOperaToggleView <SCOperaLayerView>
{
    double _yOffset;
    id <SCOperaShowActionMenuButtonLayerViewDelegate> _delegate;
    UIButton *_button;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <SCOperaShowActionMenuButtonLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateYOffset:(double)arg1;
- (void)animateVisibility:(_Bool)arg1 duration:(double)arg2;
- (void)updateViewYOffset:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupViewForLayer:(id)arg1;
- (void)showActionMenuButtonPressed:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

