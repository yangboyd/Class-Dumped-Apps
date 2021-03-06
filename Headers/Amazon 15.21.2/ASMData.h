//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMAppStatus, ASMCustomerCharityStatusData, ASMIsCustomerEligibleData, ASMIsDeviceSupportedData, ASMNotificationSubscriptions, ASMUser;

@interface ASMData : NSObject
{
    ASMUser *_user;
    ASMIsDeviceSupportedData *_isDeviceSupportedData;
    ASMIsCustomerEligibleData *_isCustomerEligibleData;
    ASMAppStatus *_appStatus;
    ASMNotificationSubscriptions *_notificationSubscriptions;
    ASMCustomerCharityStatusData *_customerCharityStatus;
}

@property(retain, nonatomic) ASMCustomerCharityStatusData *customerCharityStatus; // @synthesize customerCharityStatus=_customerCharityStatus;
@property(retain, nonatomic) ASMNotificationSubscriptions *notificationSubscriptions; // @synthesize notificationSubscriptions=_notificationSubscriptions;
@property(retain, nonatomic) ASMAppStatus *appStatus; // @synthesize appStatus=_appStatus;
@property(retain, nonatomic) ASMIsCustomerEligibleData *isCustomerEligibleData; // @synthesize isCustomerEligibleData=_isCustomerEligibleData;
@property(retain, nonatomic) ASMIsDeviceSupportedData *isDeviceSupportedData; // @synthesize isDeviceSupportedData=_isDeviceSupportedData;
@property(readonly, nonatomic) ASMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isCustomerGated;
- (_Bool)isCustomerEligible;
- (_Bool)isDeviceSupported;
- (id)description;
- (id)initFromUser:(id)arg1 withIsDeviceSupportedData:(id)arg2 withIsCustomerEligibleData:(id)arg3 withAppStatusData:(id)arg4 withNotificationSubscriptionsData:(id)arg5 withCustomerCharityStatusData:(id)arg6;
- (id)initFromUser:(id)arg1;

@end

