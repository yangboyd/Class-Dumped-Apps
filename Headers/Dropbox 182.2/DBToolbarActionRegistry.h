//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBToolbarActionRegistryProtocol-Protocol.h"

@class NSMapTable, NSString;

@interface DBToolbarActionRegistry : NSObject <DBToolbarActionRegistryProtocol>
{
    NSMapTable *_actionMap;
    NSMapTable *_uiActionMap;
}

@property(retain, nonatomic) NSMapTable *uiActionMap; // @synthesize uiActionMap=_uiActionMap;
@property(retain, nonatomic) NSMapTable *actionMap; // @synthesize actionMap=_actionMap;
- (void).cxx_destruct;
- (_Bool)hasUIActionForActionId:(id)arg1;
- (id)registeredUIActionsForActionId:(id)arg1;
- (void)addUIAction:(id)arg1 forActionId:(id)arg2;
- (_Bool)hasHandlerForActionId:(id)arg1;
- (CDUnknownBlockType)handlerForActionId:(id)arg1;
- (id)addHandler:(CDUnknownBlockType)arg1 forActionId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

