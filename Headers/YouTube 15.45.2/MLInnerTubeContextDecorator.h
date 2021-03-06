//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTHotConfigObserver-Protocol.h>
#import <Module_Framework/YTInnerTubeContextDecorator-Protocol.h>

@class MLMobileDataPlanInfo, NSString;

@interface MLInnerTubeContextDecorator : NSObject <YTHotConfigObserver, YTInnerTubeContextDecorator>
{
    MLMobileDataPlanInfo *_dataPlanInfo;
    _Bool _usingPASConfig;
}

- (void).cxx_destruct;
- (void)setMobileDataPlanInfo:(id)arg1;
- (void)decorateContext:(id)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (id)init;
- (id)initWithServiceRegistryScope:(id)arg1 hotConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

