//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;

@interface A9VSFezBroadcaster : NSObject
{
    NSHashTable *_listeners;
    NSMutableDictionary *_actions;
}

@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (void).cxx_destruct;
- (void)releaseDanglingActions;
- (id)hashForListener:(id)arg1;
- (void)broadcast;
- (void)removeAllListeners;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)init;

@end

