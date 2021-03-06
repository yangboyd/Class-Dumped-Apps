//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASImageNode, PillButtonNode, PillStyle, RailPillViewModel;
@protocol ViewContext;

@interface FlairSearchNode : BaseFeedDisplayNode
{
    id <ViewContext> _viewContext;
    RailPillViewModel *_railFlairViewModel;
    PillStyle *_pillStyle;
    PillButtonNode *_pillButtonNode;
    ASImageNode *_iconNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASImageNode *iconNode; // @synthesize iconNode=_iconNode;
@property(retain, nonatomic) PillButtonNode *pillButtonNode; // @synthesize pillButtonNode=_pillButtonNode;
@property(retain, nonatomic) PillStyle *pillStyle; // @synthesize pillStyle=_pillStyle;
@property(retain, nonatomic) RailPillViewModel *railFlairViewModel; // @synthesize railFlairViewModel=_railFlairViewModel;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureNodes;
- (id)initWithViewContext:(id)arg1 railFlairViewModel:(id)arg2;

@end

