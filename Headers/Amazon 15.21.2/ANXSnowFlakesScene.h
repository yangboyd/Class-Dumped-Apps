//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKScene.h>

@class SKEmitterNode;

@interface ANXSnowFlakesScene : SKScene
{
    unsigned long long _snowFlakesIntensity;
    SKEmitterNode *_stormStarSnowFlakes;
    SKEmitterNode *_stormBallSnowFlakes;
    SKEmitterNode *_calmStarSnowFlakes;
    SKEmitterNode *_calmBallSnowFlakes;
}

@property(retain, nonatomic) SKEmitterNode *calmBallSnowFlakes; // @synthesize calmBallSnowFlakes=_calmBallSnowFlakes;
@property(retain, nonatomic) SKEmitterNode *calmStarSnowFlakes; // @synthesize calmStarSnowFlakes=_calmStarSnowFlakes;
@property(retain, nonatomic) SKEmitterNode *stormBallSnowFlakes; // @synthesize stormBallSnowFlakes=_stormBallSnowFlakes;
@property(retain, nonatomic) SKEmitterNode *stormStarSnowFlakes; // @synthesize stormStarSnowFlakes=_stormStarSnowFlakes;
@property unsigned long long snowFlakesIntensity; // @synthesize snowFlakesIntensity=_snowFlakesIntensity;
- (void).cxx_destruct;
- (void)modifyCalmNode:(id)arg1;
- (void)modifyStormNode:(id)arg1;
- (id)createEmitter:(id)arg1 at:(struct CGPoint)arg2;
- (void)modifyEmitterNodes;
- (void)initializeEmitters;
- (id)initWithSize:(struct CGSize)arg1;

@end

