//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GBTThemeable-Protocol.h"

@class CAShapeLayer, MDCShadowLayer, NSString;

@interface GBTSmartMailCardBackgroundView : UIView <GBTThemeable>
{
    struct CGRect _lastBounds;
    CAShapeLayer *_foregroundLayer;
    MDCShadowLayer *_shadowLayer;
    unsigned long long _cellPosition;
    double _cornerRadius;
    double _inset;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) double inset; // @synthesize inset=_inset;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long cellPosition; // @synthesize cellPosition=_cellPosition;
- (void)invalidatePath;
- (void)createLayers;
- (void)gbt_applyTheme:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

