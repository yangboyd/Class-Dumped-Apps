//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJBLEServiceClient.h"

#import "WJDashConfigurationService-Protocol.h"

@class NSString;
@protocol WJDashConfigurationServiceDelegate;

@interface WJBLEDashConfigurationService : WJBLEServiceClient <WJDashConfigurationService>
{
    id <WJDashConfigurationServiceDelegate> _delegate;
    unsigned long long _saveCountryCodeResponseRetries;
    unsigned long long _saveRealmResponseRetries;
}

@property(nonatomic) unsigned long long saveRealmResponseRetries; // @synthesize saveRealmResponseRetries=_saveRealmResponseRetries;
@property(nonatomic) unsigned long long saveCountryCodeResponseRetries; // @synthesize saveCountryCodeResponseRetries=_saveCountryCodeResponseRetries;
@property(nonatomic) __weak id <WJDashConfigurationServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)writeString:(id)arg1 forCharacteristic:(id)arg2;
- (void)didUpdateSaveRealmResponse:(id)arg1;
- (void)didWriteSaveRealmRequest:(id)arg1;
- (void)saveRealm:(id)arg1;
- (void)didUpdateSaveCountryCodeResponse:(id)arg1;
- (void)didWriteSaveCountryCodeRequest:(id)arg1;
- (void)saveCountryCode:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (void)configureCharacteristics;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

