//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCAction.h"

@interface ACCRecorderAction : ACCAction
{
    id _payload;
}

+ (id)_recordControlActionWithType:(int)arg1 payload:(id)arg2;
+ (id)extractAction;
+ (id)changeModeAction:(unsigned long long)arg1;
+ (id)cancelAction;
+ (id)finishAction;
+ (id)clearAction;
+ (id)revokeAction;
+ (id)pauseAction;
+ (id)startActionWithConfig:(id)arg1;
+ (id)startAction;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
- (void).cxx_destruct;

@end

