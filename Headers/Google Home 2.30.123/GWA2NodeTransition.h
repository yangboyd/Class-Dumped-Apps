//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWA2Node, GWA2Transition;

@interface GWA2NodeTransition : NSObject
{
    GWA2Node *_node;
    GWA2Transition *_transition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWA2Transition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) GWA2Node *node; // @synthesize node=_node;
- (id)initWithNode:(id)arg1 transition:(id)arg2;

@end

