//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ABSCertificateValidator, ABSFileStorageSystem, ABSHttpClient, ABSMetricsReporter, ABSSettingsStorage, ABSStoreEnvironment;

@interface ABSA2ZCertificateStoreBuilder : NSObject
{
    NSString *_domain;
    id <ABSSettingsStorage> _settings;
    id <ABSHttpClient> _httpClient;
    id <ABSCertificateValidator> _certificateValidator;
    id <ABSFileStorageSystem> _storageSystem;
    id <ABSMetricsReporter> _metricsReporter;
    id <ABSStoreEnvironment> _envInfo;
}

@property(retain, nonatomic) id <ABSStoreEnvironment> envInfo; // @synthesize envInfo=_envInfo;
@property(retain, nonatomic) id <ABSMetricsReporter> metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) id <ABSFileStorageSystem> storageSystem; // @synthesize storageSystem=_storageSystem;
@property(retain, nonatomic) id <ABSCertificateValidator> certificateValidator; // @synthesize certificateValidator=_certificateValidator;
@property(retain, nonatomic) id <ABSHttpClient> httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) id <ABSSettingsStorage> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;

@end

