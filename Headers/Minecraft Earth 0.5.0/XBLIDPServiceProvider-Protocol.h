//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XBLXboxProfile;

@protocol XBLIDPServiceProvider <NSObject>
@property(readonly, nonatomic) XBLXboxProfile *xboxProfile;
- (void)loadUserXboxProfileWithCompletionBlock:(void (^)(XBLXboxProfile *, NSError *))arg1;
- (void)claimGamertag:(NSString *)arg1 withCompletionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)loadNextAvailableGamertagsForSeed:(NSString *)arg1 withCompletionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)checkGamertagValidity:(NSString *)arg1 withCompletionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)configureRealNameSharingSettings;
@end

