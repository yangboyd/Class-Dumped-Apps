//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSPKEventDispatcher : NSObject
{
    NSMutableDictionary *_eventMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *eventMap; // @synthesize eventMap=_eventMap;
- (void)forwardEvent:(id)arg1;
- (void)registerEventSubscriber:(id)arg1 onPipelineRouter:(id)arg2;

@end

