//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KFComponentManager, KFECSToolbox, KFEntityManager, KFSystemManager;
@protocol KFLoaderProtocol;

@interface KFWorld : NSObject
{
    KFECSToolbox *_toolbox;
    id <KFLoaderProtocol> _loader;
    KFEntityManager *_entityManager;
    KFComponentManager *_componentManager;
    KFSystemManager *_systemManager;
    unsigned long long _mutatePasses;
    unsigned long long _constructPasses;
    unsigned long long _setupPasses;
    unsigned long long _updatePasses;
    unsigned long long _renderPasses;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long renderPasses; // @synthesize renderPasses=_renderPasses;
@property(nonatomic) unsigned long long updatePasses; // @synthesize updatePasses=_updatePasses;
@property(nonatomic) unsigned long long setupPasses; // @synthesize setupPasses=_setupPasses;
@property(nonatomic) unsigned long long constructPasses; // @synthesize constructPasses=_constructPasses;
@property(nonatomic) unsigned long long mutatePasses; // @synthesize mutatePasses=_mutatePasses;
@property(readonly, nonatomic) KFSystemManager *systemManager; // @synthesize systemManager=_systemManager;
@property(readonly, nonatomic) KFComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property(readonly, nonatomic) KFEntityManager *entityManager; // @synthesize entityManager=_entityManager;
- (void)render;
- (void)update;
- (void)setup;
- (void)construct;
- (void)mutate;
- (id)initWithLoader:(id)arg1;

@end

