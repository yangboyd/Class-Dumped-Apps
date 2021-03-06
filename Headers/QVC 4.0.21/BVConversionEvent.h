//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BVSDK/BVBasePIIEvent.h>

#import <BVSDK/BVAnalyticEvent-Protocol.h>

@class NSDictionary, NSString;

@interface BVConversionEvent : BVBasePIIEvent <BVAnalyticEvent>
{
    NSDictionary *additionalParams;
    NSString *_type;
    NSString *_value;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams;
- (void).cxx_destruct;
- (id)createBaseEvent:(_Bool)arg1;
- (id)toRawNonPII;
- (id)toRaw;
- (id)initWithType:(id)arg1 value:(id)arg2 label:(id)arg3 otherParams:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

