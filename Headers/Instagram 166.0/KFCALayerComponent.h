//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/KFComponent.h>

@class CALayer, KFCAShapeLayer, NSMutableSet;
@protocol KFCALayerProtocol;

@interface KFCALayerComponent : KFComponent
{
    NSMutableSet *_auxiliaryLayers;
    CALayer<KFCALayerProtocol> *_topAttachmentLayer;
    CALayer<KFCALayerProtocol> *_bottomAttachmentLayer;
    KFCAShapeLayer *_strokeLayer;
    CALayer *_fillLayer;
    KFCAShapeLayer *_shapeLayer;
}

+ (unsigned short)componentClassIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) KFCAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CALayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(retain, nonatomic) KFCAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CALayer<KFCALayerProtocol> *bottomAttachmentLayer; // @synthesize bottomAttachmentLayer=_bottomAttachmentLayer;
@property(retain, nonatomic) CALayer<KFCALayerProtocol> *topAttachmentLayer; // @synthesize topAttachmentLayer=_topAttachmentLayer;
- (id)layersWithTag:(id)arg1;
- (void)enumerateLayersWithBlock:(CDUnknownBlockType)arg1;
- (void)addAuxiliaryLayer:(id)arg1;

@end

