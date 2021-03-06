//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface IESLiveMTOpenLiveBroadcastConfig : MTLModel <MTLJSONSerializing>
{
    NSNumber *_masterSwitch;
    NSNumber *_profileSwitch;
    NSString *_scheduledTime;
    NSNumber *_scheduleDays;
    NSString *_scheduleText;
}

+ (_Bool)isValid:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *scheduleText; // @synthesize scheduleText=_scheduleText;
@property(retain, nonatomic) NSNumber *scheduleDays; // @synthesize scheduleDays=_scheduleDays;
@property(copy, nonatomic) NSString *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
@property(retain, nonatomic) NSNumber *profileSwitch; // @synthesize profileSwitch=_profileSwitch;
@property(retain, nonatomic) NSNumber *masterSwitch; // @synthesize masterSwitch=_masterSwitch;
- (id)detailContentWithTextColor:(id)arg1;
- (id)titleContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

