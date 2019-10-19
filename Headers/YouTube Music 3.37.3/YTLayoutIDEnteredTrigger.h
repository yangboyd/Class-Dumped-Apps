//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAdTrigger-Protocol.h"

@class GIMMe, NSString;

@interface YTLayoutIDEnteredTrigger : NSObject <YTAdTrigger>
{
    NSString *_triggerID;
    GIMMe *_gimme;
    NSString *_triggeringLayoutID;
}

@property(readonly, nonatomic) NSString *triggeringLayoutID; // @synthesize triggeringLayoutID=_triggeringLayoutID;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)triggerID;
- (_Bool)collideWithTrigger:(id)arg1;
- (id)initWithTriggerID:(id)arg1 triggeringLayoutID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

