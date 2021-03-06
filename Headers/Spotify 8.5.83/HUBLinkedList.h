//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBLinkedListNodePointer-Protocol.h"

@class HUBLinkedListNode, NSString;

@interface HUBLinkedList : NSObject <HUBLinkedListNodePointer>
{
    HUBLinkedListNode *_head;
    HUBLinkedListNode *_tail;
    unsigned long long _count;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) HUBLinkedListNode *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) HUBLinkedListNode *head; // @synthesize head=_head;
- (_Bool)isEmpty;
- (unsigned long long)numberOfNodes;
- (id)removeFirstNode;
- (void)addValueToTail:(id)arg1;
- (id)firstValue;
@property(retain, nonatomic) HUBLinkedListNode *node;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

