//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@protocol AWEBindPhoneAlertService <HTSService>
+ (Class)utilsClass;
+ (void)showBindPhoneAlertWithType:(unsigned long long)arg1 confirmBlock:(void (^)(void))arg2 cancelBlock:(void (^)(void))arg3 presentHandler:(void (^)(UIViewController *))arg4;
+ (void)showBindPhoneAlertWithType:(unsigned long long)arg1 confirmBlock:(void (^)(void))arg2 cancelBlock:(void (^)(void))arg3;
+ (_Bool)checkAndShowBindPhoneAlertWithType:(unsigned long long)arg1 confirmBlock:(void (^)(void))arg2 cancelBlock:(void (^)(void))arg3;
+ (void)start;
@end

