//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol SBIconIndexNodeObserver <NSObject>
- (void)nodeDidMoveContainedNodes:(id <SBIconIndexNode>)arg1;
- (void)node:(id <SBIconIndexNode>)arg1 didRemoveContainedNodeIdentifiers:(NSSet *)arg2;
- (void)node:(id <SBIconIndexNode>)arg1 didAddContainedNodeIdentifiers:(NSSet *)arg2;
@end

