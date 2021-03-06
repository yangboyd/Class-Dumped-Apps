//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWA2Node.h"

#import "GWA2VirtualNode-Protocol.h"

@class NSArray, NSMutableArray, NSString, ORCH2OneOfNode;

@interface GWA2OneOfNode : GWA2Node <GWA2VirtualNode>
{
    ORCH2OneOfNode *_oneOfNodeExtension;
    NSMutableArray *_subNodes;
    NSArray *_concreteSubNodes;
}

- (void).cxx_destruct;
- (void)setSubNodes:(id)arg1;
- (_Bool)isActive;
- (_Bool)focusIfTextFieldIsEmpty;
- (_Bool)focusIfDataContainsError;
- (_Bool)focus;
- (void)applyTransition:(id)arg1 withDirection:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setInitialStateForTransition:(id)arg1 transitionDirection:(long long)arg2;
- (void)transitionIfNeededWithEventRuleId:(long long)arg1 direction:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)oneOfDataChangedActiveOptionIDKeyPath:(id)arg1;
- (id)activeConcreteSubNodes;
- (void)updateConcreteSubNodes;
- (id)concreteSubNodes;
- (void)replaceChildNode:(id)arg1 withNode:(id)arg2;
- (id)subNodes;
- (void)setLayoutParentNode:(id)arg1;
- (void)applyStyleProperties;
- (void)applyLayoutProperties;
- (void)dealloc;
- (id)initWithNode:(id)arg1 pageContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

