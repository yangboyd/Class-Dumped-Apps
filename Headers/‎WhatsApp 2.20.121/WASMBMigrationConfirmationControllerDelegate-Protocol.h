//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, WARegistrationSession, WASMBMigrationConfirmationController, WAUserJID;

@protocol WASMBMigrationConfirmationControllerDelegate <NSObject>
- (void)migrationConfirmationControllerDidDeclineMigration:(WASMBMigrationConfirmationController *)arg1;
- (void)migrationConfirmationControllerDidReceiveUnknownError:(WASMBMigrationConfirmationController *)arg1;
- (void)migrationConfirmationControllerDidFail2FA:(WASMBMigrationConfirmationController *)arg1 session:(WARegistrationSession *)arg2 response:(NSDictionary *)arg3;
- (void)migrationConfirmationControllerDidProceedWithCodeRequst:(WASMBMigrationConfirmationController *)arg1 session:(WARegistrationSession *)arg2;
- (void)migrationConfirmationController:(WASMBMigrationConfirmationController *)arg1 didFinishWithSession:(WARegistrationSession *)arg2 userJID:(WAUserJID *)arg3;
@end

