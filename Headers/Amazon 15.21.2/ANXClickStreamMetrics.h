//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMIDefaultMetricsFactory;
@protocol ANXNewDependencies;

@interface ANXClickStreamMetrics : NSObject
{
    id <ANXNewDependencies> _dependencies;
    CMIDefaultMetricsFactory *_metricsFactory;
}

@property(retain, nonatomic) CMIDefaultMetricsFactory *metricsFactory; // @synthesize metricsFactory=_metricsFactory;
@property(retain, nonatomic) id <ANXNewDependencies> dependencies; // @synthesize dependencies=_dependencies;
- (void).cxx_destruct;
- (void)addCustomerIdToEvent:(id)arg1;
- (id)createClickstreamEvent:(id)arg1 withAttributes:(id)arg2;
- (void)logClickStreamEvent:(id)arg1 withAttributes:(id)arg2;
- (id)init;
- (id)initWithDependencies:(id)arg1 metricsFactory:(id)arg2;

@end

