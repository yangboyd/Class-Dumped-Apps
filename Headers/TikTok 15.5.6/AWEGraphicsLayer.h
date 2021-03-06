//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AWERasterLayer;

@interface AWEGraphicsLayer : CALayer
{
    CDUnknownBlockType _drawingActions;
    AWERasterLayer *_scaleLayer;
}

@property(readonly, nonatomic) AWERasterLayer *scaleLayer; // @synthesize scaleLayer=_scaleLayer;
@property(copy, nonatomic) CDUnknownBlockType drawingActions; // @synthesize drawingActions=_drawingActions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

