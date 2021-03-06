//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAdTrigger-Protocol.h>

@class GIMMe, NSString;

@interface YTDifferentLayoutIDEnteredTrigger : NSObject <YTAdTrigger>
{
    NSString *_triggerID;
    GIMMe *_gimme;
    NSString *_nonMatchLayoutID;
    unsigned long long _slotType;
    unsigned long long _layoutType;
}

@property(readonly, nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) unsigned long long slotType; // @synthesize slotType=_slotType;
@property(readonly, copy, nonatomic) NSString *nonMatchLayoutID; // @synthesize nonMatchLayoutID=_nonMatchLayoutID;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)triggerID;
- (_Bool)collideWithTrigger:(id)arg1;
- (id)initWithTriggerID:(id)arg1 nonMatchLayoutID:(id)arg2 slotType:(unsigned long long)arg3 layoutType:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

