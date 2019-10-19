//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASControlNode.h"

#import "ELMDisplayNode-Protocol.h"

@class ASDisplayNode, ASTextNode, ELMElement, ELMNodeController, NSString;
@protocol ELMContext, ELMController;

@interface ELMExpandableTextNode : ASControlNode <ELMDisplayNode>
{
    struct shared_ptr<google::protobuf_opensource::Arena> _arena;
    ELMNodeController *_expandedTextNodeController;
    ELMNodeController *_collapsedTextNodeController;
    struct UIEdgeInsets _externallySetHitTestSlop;
    _Bool _expanded;
    _Bool _shouldShowIndicator;
    _Bool _isTruncated;
    id <ELMContext> _context;
    _Bool _canCollapse;
    _Bool _canExpand;
    ELMElement *_element;
    ASTextNode *_indicatorNode;
    ELMElement *_expandedTextElement;
    ELMElement *_collapsedTextElement;
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
@property(retain, nonatomic) ELMElement *collapsedTextElement; // @synthesize collapsedTextElement=_collapsedTextElement;
@property(retain, nonatomic) ELMElement *expandedTextElement; // @synthesize expandedTextElement=_expandedTextElement;
@property(readonly, nonatomic) _Bool canExpand; // @synthesize canExpand=_canExpand;
@property(readonly, nonatomic) _Bool canCollapse; // @synthesize canCollapse=_canCollapse;
@property(readonly) ASTextNode *indicatorNode; // @synthesize indicatorNode=_indicatorNode;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)controllerDidApplyProperties;
- (_Bool)managesGestureHandling;
- (void)locked_updateHitTestSlops;
-     // Error parsing type: ^{Element=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<youtube::elements::Element>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Type}^{Properties}}24@0:8@16, name: textTypeElementFrom:
- (id)locked_indicatorAttributedString;
- (id)locked_currentTextNode;
@property(readonly, nonatomic) ASDisplayNode *currentTextNode;
- (void)handleTap;
- (void)locked_expandUpdated;
@property _Bool expanded;
- (void)subnodeDisplayDidFinish:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layout;
- (void)setHitTestSlop:(struct UIEdgeInsets)arg1;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <ELMController> nodeController; // @dynamic nodeController;
@property(readonly) Class superclass;

@end

