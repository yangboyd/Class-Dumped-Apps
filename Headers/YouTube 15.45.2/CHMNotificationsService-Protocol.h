//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class CHMConfiguration, NSArray, NSData, NSDictionary;

@protocol CHMNotificationsService <NSObject>
- (void)dismissReadNotificationsForNotification:(NSDictionary *)arg1;
- (void)updateRegistrationWithAccounts:(NSArray *)arg1 deviceToken:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (id)initWithConfiguration:(CHMConfiguration *)arg1;
@end

