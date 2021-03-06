//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface AWEIMNotificationGroupDataRequestModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_maxTime;
    NSNumber *_minTime;
    NSNumber *_count;
    NSNumber *_group;
    NSNumber *_isMarkRead;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isMarkRead; // @synthesize isMarkRead=_isMarkRead;
@property(retain, nonatomic) NSNumber *group; // @synthesize group=_group;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *minTime; // @synthesize minTime=_minTime;
@property(retain, nonatomic) NSNumber *maxTime; // @synthesize maxTime=_maxTime;
- (id)initWithGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

