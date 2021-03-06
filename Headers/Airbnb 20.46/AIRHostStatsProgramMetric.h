//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRHostStatsProgramMetricCTA, NSArray, NSString;

@interface AIRHostStatsProgramMetric : AIRModel
{
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    NSString *_hostProgress;
    NSString *_threshold;
    NSArray *_optionalRequirements;
    AIRHostStatsProgramMetricCTA *_CTA;
    long long _metricLoggingID;
    NSString *_rawLabelType;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rawLabelType; // @synthesize rawLabelType=_rawLabelType;
@property(readonly, nonatomic) long long metricLoggingID; // @synthesize metricLoggingID=_metricLoggingID;
@property(readonly, copy, nonatomic) AIRHostStatsProgramMetricCTA *CTA; // @synthesize CTA=_CTA;
@property(readonly, nonatomic) NSArray *optionalRequirements; // @synthesize optionalRequirements=_optionalRequirements;
@property(readonly, copy, nonatomic) NSString *threshold; // @synthesize threshold=_threshold;
@property(readonly, copy, nonatomic) NSString *hostProgress; // @synthesize hostProgress=_hostProgress;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) unsigned long long labelType;

@end

