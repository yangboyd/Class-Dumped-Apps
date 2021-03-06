//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPKEventDispatcher, TSPKPipelineUnitModel;

@interface TSPKPipelineUnit : NSObject
{
    TSPKEventDispatcher *_dispatcher;
    TSPKPipelineUnitModel *_unitModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSPKPipelineUnitModel *unitModel; // @synthesize unitModel=_unitModel;
@property(retain, nonatomic) TSPKEventDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (id)uniqueType;
- (void)forwardEvent:(id)arg1;
- (void)recordPipelineUnitOnEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (_Bool)validateEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (id)initWithUnitModel:(id)arg1;

@end

