//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMESetupWifiEnterPasswordViewController, NSString;

@protocol HMESetupEnterWifiPasswordDelegate <NSObject>
- (void)enterWifiPasswordViewControllerDidCancel:(HMESetupWifiEnterPasswordViewController *)arg1;
- (void)enterWifiPasswordViewController:(HMESetupWifiEnterPasswordViewController *)arg1 didEnterPassword:(NSString *)arg2 shouldSavePassword:(_Bool)arg3;
@end

