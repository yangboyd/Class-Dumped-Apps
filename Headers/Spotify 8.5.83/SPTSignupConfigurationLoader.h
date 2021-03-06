//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupDataLoaderDelegate-Protocol.h"

@class NSString, SPTSignupConfigurationDataLoader, SPTSignupUserInfoModel;

@interface SPTSignupConfigurationLoader : NSObject <SPTSignupDataLoaderDelegate>
{
    _Bool _didGetSignupConfigurationSuccessfully;
    SPTSignupConfigurationDataLoader *_configurationDataLoader;
    SPTSignupUserInfoModel *_userInfoModel;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(readonly, nonatomic) SPTSignupConfigurationDataLoader *configurationDataLoader; // @synthesize configurationDataLoader=_configurationDataLoader;
@property(nonatomic) _Bool didGetSignupConfigurationSuccessfully; // @synthesize didGetSignupConfigurationSuccessfully=_didGetSignupConfigurationSuccessfully;
- (id)requestAlreadyRunningError;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dataLoader:(id)arg1 didFinishLoadingWithSuccessResponse:(id)arg2;
- (void)requestSignupConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfigurationDataLoader:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

