//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAKAudioUnitGraph-Protocol.h"
#import "GAKAudioUnitGraphStateProvider-Protocol.h"

@class GAKAudioUnit, GAKAudioUnitGraph;

@protocol GAKAudioUnitGraphInternal <GAKAudioUnitGraph, GAKAudioUnitGraphStateProvider>
@property(nonatomic) __weak GAKAudioUnitGraph *wrapper;
- (void)enumerateConnectionsOf:(GAKAudioUnit *)arg1 usingBlock:(void (^)(GAKAudioGraphConnection *, _Bool *))arg2;
@end

