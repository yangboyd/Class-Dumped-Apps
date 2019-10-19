//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRegistrationStateMachine-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface SCRegistrationTableStateMachine : NSObject <SCRegistrationStateMachine>
{
    NSString *_initialState;
    NSMutableSet *_mutableStates;
    NSMutableSet *_mutableActions;
    NSString *_currentState;
    NSMutableDictionary *_mutableActionMappings;
}

@property(retain, nonatomic) NSMutableDictionary *mutableActionMappings; // @synthesize mutableActionMappings=_mutableActionMappings;
@property(retain, nonatomic) NSString *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSMutableSet *mutableActions; // @synthesize mutableActions=_mutableActions;
@property(retain, nonatomic) NSMutableSet *mutableStates; // @synthesize mutableStates=_mutableStates;
@property(retain, nonatomic) NSString *initialState; // @synthesize initialState=_initialState;
- (void).cxx_destruct;
- (_Bool)transitionWithAction:(id)arg1;
@property(readonly, nonatomic) NSSet *actions;
@property(readonly, nonatomic) NSSet *states;
- (void)when:(id)arg1 transitionFrom:(id)arg2 toState:(id)arg3;
- (void)addState:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

