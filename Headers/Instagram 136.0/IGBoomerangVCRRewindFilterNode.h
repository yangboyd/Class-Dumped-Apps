//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGGLKNode.h>

@class IGGLKRenderer;

@interface IGBoomerangVCRRewindFilterNode : IGGLKNode
{
    IGGLKRenderer *_programRenderer;
    _Bool _attributesNeedUpdate;
    _Bool _amplitudeNeedsUpdate;
    _Bool _frequencyNeedsUpdate;
    double _amplitude;
    double _frequency;
}

@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
- (void).cxx_destruct;
- (id)_positionAttributeWithPoint:(struct CGPoint)arg1;
- (void)_updateAttributes;
- (void)drawInContext:(id)arg1;
- (void)modelViewProjectionMatrixDidUpdate;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)requiresSampleTexture;
- (id)init;

@end

