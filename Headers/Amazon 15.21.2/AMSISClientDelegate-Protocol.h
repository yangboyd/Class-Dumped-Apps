//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol AMSISClientDelegate <NSObject>

@optional
- (void)didFailToRegisterEventsWithError:(NSError *)arg1;
- (void)didRegisterEvents;
- (void)didFailToSetOOWithError:(NSError *)arg1;
- (void)didSetOO;
- (void)didFailToUpdateDeviceInfoWithError:(NSError *)arg1;
- (void)didUpdateDeviceInfo;
- (void)didFailToGenerateDidWithError:(NSError *)arg1;
- (void)didGenerateDid;
@end

