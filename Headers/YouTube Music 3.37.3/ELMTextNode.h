//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTextNode.h"

#import "ASTextNodeDelegate-Protocol.h"
#import "ELMDisplayNode-Protocol.h"

@class ELMElement, NSString;
@protocol ELMContext, ELMController;

@interface ELMTextNode : ASTextNode <ASTextNodeDelegate, ELMDisplayNode>
{
    id <ELMContext> _context;
    ELMElement *_element;
}

+ (_Bool)hasCommandRuns:(id)arg1;
+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (long long)contentModeForTextAlignment:(int)arg1;
- (void)textNode:(id)arg1 longPressedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (void)controllerDidApplyProperties;
- (void)didLoad;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <ELMController> nodeController; // @dynamic nodeController;
@property(readonly) Class superclass;

@end

