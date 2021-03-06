//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAKAudioUnitGraph-Protocol.h"

@class NSString;
@protocol GAKAudioUnitGraphInternal, GAKAudioUnitGraphLogger;

@interface GAKAudioUnitGraph : NSObject <GAKAudioUnitGraph>
{
    id <GAKAudioUnitGraphInternal> _impl;
    id <GAKAudioUnitGraphLogger> _graphLogger;
}

- (void).cxx_destruct;
- (void)enumerateConnectionsOf:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)update;
- (_Bool)isRunning;
- (id)stop;
- (id)start;
- (id)close;
- (id)uninitialize;
- (_Bool)isInitialized;
- (id)initialize;
- (id)disconnectInputFromUnit:(id)arg1 element:(unsigned int)arg2;
- (id)disconnectInputFromUnit:(id)arg1;
- (id)connectOutputFromUnit:(id)arg1 toInputOfUnit:(id)arg2;
- (id)connectOutputFromUnit:(id)arg1 toInputOfUnit:(id)arg2 outputElement:(unsigned int)arg3 inputElement:(unsigned int)arg4;
- (id)removeAudioUnit:(id)arg1;
- (id)addAudioUnit:(id)arg1;
@property(readonly, nonatomic) struct OpaqueAUGraph *auGraph;
- (id)initWithError:(id *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

