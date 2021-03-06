//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSPKSceneRule.h"

#import "TSPKTriggerRule-Protocol.h"

@class NSString;

@interface TSPKAdvanceAppStatusTRule : TSPKSceneRule <TSPKTriggerRule>
{
    _Bool _detectEnterForeground;
    CDUnknownBlockType _action;
    double _minAppStatusChangeTime;
    double _lastTimeInBackground;
}

- (void).cxx_destruct;
@property(nonatomic) double lastTimeInBackground; // @synthesize lastTimeInBackground=_lastTimeInBackground;
@property(nonatomic) double minAppStatusChangeTime; // @synthesize minAppStatusChangeTime=_minAppStatusChangeTime;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) _Bool detectEnterForeground; // @synthesize detectEnterForeground=_detectEnterForeground;
- (void)executeDetectAction;
- (void)setTriggerDetectAction:(CDUnknownBlockType)arg1;
- (void)decodeParams:(id)arg1;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)dealloc;
- (id)initWithRuleModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

