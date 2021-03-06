//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCNSceneRendererDelegate-Protocol.h"

@class NSString, SCNNode, SCNView;

@interface RN3DRenderingView : UIView <SCNSceneRendererDelegate>
{
    SCNView *_sceneView;
    SCNNode *_modelNode;
    float _disableAO;
    _Bool _isLoading;
    _Bool _useDefaultLighting;
    _Bool _useDefaultCameraControl;
    CDUnknownBlockType _onLoadModelSuccess;
    CDUnknownBlockType _onLoadModelError;
}

@property(copy, nonatomic) CDUnknownBlockType onLoadModelError; // @synthesize onLoadModelError=_onLoadModelError;
@property(copy, nonatomic) CDUnknownBlockType onLoadModelSuccess; // @synthesize onLoadModelSuccess=_onLoadModelSuccess;
@property(nonatomic) _Bool useDefaultCameraControl; // @synthesize useDefaultCameraControl=_useDefaultCameraControl;
@property(nonatomic) _Bool useDefaultLighting; // @synthesize useDefaultLighting=_useDefaultLighting;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)applyShadingModel:(id)arg1 type:(id)arg2;
- (void)applyImageBasedLighting:(id)arg1 intensity:(float)arg2 useImageAsBackground:(_Bool)arg3 backgroundColor:(id)arg4;
- (void)createLighting:(id)arg1 type:(id)arg2 color:(id)arg3 intensity:(float)arg4;
- (void)setCameraFOV:(float)arg1 withNodeName:(id)arg2;
- (void)createCamera:(id)arg1 usesOrthographicProjection:(_Bool)arg2;
- (_Bool)raycast:(struct CGPoint)arg1 hitPosition:(struct SCNVector3 *)arg2;
- (_Bool)getNodeUpDirection:(id)arg1 up:(struct SCNVector3 *)arg2;
- (_Bool)getNodeFrontDirection:(id)arg1 front:(struct SCNVector3 *)arg2;
- (_Bool)getBoundingBox:(id)arg1 min:(struct SCNVector3 *)arg2 max:(struct SCNVector3 *)arg3;
- (_Bool)getNodeScale:(id)arg1 nodeScale:(struct SCNVector3 *)arg2;
- (_Bool)getNodeRotationInEuler:(id)arg1 nodeRotation:(struct SCNVector3 *)arg2;
- (_Bool)getNodePosition:(id)arg1 nodePosition:(struct SCNVector3 *)arg2;
- (void)setNodeVisibility:(id)arg1 visible:(_Bool)arg2 recursive:(_Bool)arg3;
- (void)setNodeVisibilityWithName:(id)arg1 visible:(_Bool)arg2 recursive:(_Bool)arg3;
- (void)setNodeScale:(id)arg1 scale:(struct SCNVector3)arg2;
- (void)setNodeRotationInEuler:(id)arg1 rotation:(struct SCNVector3)arg2;
- (void)setNodePosition:(id)arg1 position:(struct SCNVector3)arg2;
- (void)applyTexture:(id)arg1 withNodeNameContains:(id)arg2 withTextureKey:(id)arg3 withTexturePath:(id)arg4;
- (void)setShaderModifier:(id)arg1 withNodeNameContains:(id)arg2 withValue:(id)arg3 forKey:(id)arg4;
- (void)applyShaderModifier:(id)arg1 withNodeNameContains:(id)arg2 withModifier:(id)arg3;
- (void)applyShader:(id)arg1 withNodeNameContains:(id)arg2 withVertexFunction:(id)arg3 withFragmentFunction:(id)arg4 withData:(id)arg5 withDataName:(id)arg6;
- (void)loadMetallib:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1 withName:(id)arg2;
- (void)loadModel:(id)arg1 withName:(id)arg2;
- (void)dispatchEvent:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

