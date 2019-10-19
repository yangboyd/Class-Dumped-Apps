//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCStateTransitionGraph;
@protocol SCTransitionEventLogger;

@interface SCStateTransitionLogger : NSObject
{
    id <SCTransitionEventLogger> _transitionEventLogger;
    SCStateTransitionGraph *_graph;
}

- (void).cxx_destruct;
- (void)logState:(id)arg1;
- (void)logState:(id)arg1 triggeredBy:(id)arg2;
- (id)initWithEventLogger:(id)arg1 transitionGraph:(id)arg2;

@end

