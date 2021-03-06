//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYATwoStepVerificationService : NSObject
{
}

+ (id)sortedArrayWithArray:(id)arg1;
+ (void)checkSafeAlertStatusCompletion:(CDUnknownBlockType)arg1;
+ (void)removeAuthorizedDevicesWithDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)addAuthorizedDevicesWithTicket:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getAuthorizedDevicesWithCompletion:(CDUnknownBlockType)arg1;
+ (void)removeAllVerificationMethodWithTicket:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)removeVerificationMethod:(long long)arg1 ticket:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)addVerificationMethod:(long long)arg1 ticket:(id)arg2 isDefault:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getTwoStepCurrentWaysCompletion:(CDUnknownBlockType)arg1;
+ (void)startCheckTwoStepSafetyCompletion:(CDUnknownBlockType)arg1;

@end

