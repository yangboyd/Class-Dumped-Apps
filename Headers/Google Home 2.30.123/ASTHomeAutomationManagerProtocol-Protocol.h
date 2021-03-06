//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTHomeAutomationDevice, NSArray, NSString;
@protocol ASTHomeAutomationParameter;

@protocol ASTHomeAutomationManagerProtocol <NSObject>
- (_Bool)foyerSupportedWithDevices:(NSArray *)arg1;
- (void)sendParameter:(id <ASTHomeAutomationParameter>)arg1 forDevices:(NSArray *)arg2 withCompletion:(void (^)(NSArray *))arg3;
- (void)sendParameters:(NSArray *)arg1 forDevice:(ASTHomeAutomationDevice *)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)updateStateForDevices:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)updateStateForDevice:(ASTHomeAutomationDevice *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)fetchDeviceByID:(NSString *)arg1 withCompletion:(void (^)(ASTHomeAutomationDevice *, NSError *))arg2;
@end

