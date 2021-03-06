//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IESLiveWebViewMonitorSettingModel : NSObject
{
    NSDictionary *_apmReportConfig;
    NSDictionary *_performanceReportConfig;
    NSDictionary *_errorMsgReportConfig;
    NSDictionary *_resourceTimingReportConfig;
    NSDictionary *_commonSettings;
    NSArray *_blackList;
    NSString *_bid;
    NSString *_pid;
    NSString *_configDescp;
    NSString *_commonDesp;
}

+ (void)setConfig:(id)arg1 forClasses:(id)arg2;
+ (id)settingMapForWebView:(Class)arg1;
+ (id)settingModelForWebView:(Class)arg1;
+ (id)getValue:(id)arg1 cls:(Class)arg2;
@property(copy, nonatomic) NSString *commonDesp; // @synthesize commonDesp=_commonDesp;
@property(copy, nonatomic) NSString *configDescp; // @synthesize configDescp=_configDescp;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *bid; // @synthesize bid=_bid;
@property(copy, nonatomic) NSArray *blackList; // @synthesize blackList=_blackList;
@property(copy, nonatomic) NSDictionary *commonSettings; // @synthesize commonSettings=_commonSettings;
@property(copy, nonatomic) NSDictionary *resourceTimingReportConfig; // @synthesize resourceTimingReportConfig=_resourceTimingReportConfig;
@property(copy, nonatomic) NSDictionary *errorMsgReportConfig; // @synthesize errorMsgReportConfig=_errorMsgReportConfig;
@property(copy, nonatomic) NSDictionary *performanceReportConfig; // @synthesize performanceReportConfig=_performanceReportConfig;
@property(copy, nonatomic) NSDictionary *apmReportConfig; // @synthesize apmReportConfig=_apmReportConfig;
- (void).cxx_destruct;
- (id)jsonDescription;
- (void)setDefaultValueIfNeeded;
- (id)initWithSettingMap:(id)arg1;

@end

