//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCEmailAddress, CCPhoneNumber, NSDictionary, NSString, SQPBFranklinApiUiAlias;

@interface CCProfileAlias : NSObject
{
    _Bool _verified;
    _Bool _notificationsEnabled;
    _Bool _serverNotificationsEnabled;
    NSString *_customerID;
    CCEmailAddress *_emailAddress;
    CCPhoneNumber *_phoneNumber;
}

@property(nonatomic) _Bool serverNotificationsEnabled; // @synthesize serverNotificationsEnabled=_serverNotificationsEnabled;
@property(copy, nonatomic) CCPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) CCEmailAddress *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *customerID; // @synthesize customerID=_customerID;
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
- (void).cxx_destruct;
- (void)_updateWithNotificationPreferencesInProfile:(id)arg1;
- (_Bool)_isEqualToUiAlias:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSString *displayText;
@property(readonly, nonatomic) NSString *unlocalizedAliasTypeName;
@property(readonly, nonatomic) NSDictionary *plistRepresentation;
- (id)debugDescription;
@property(readonly, nonatomic) _Bool representsUserNotificationPermissionOption; // @dynamic representsUserNotificationPermissionOption;
- (id)initWithPhoneNumberValue:(id)arg1;
- (id)initWithEmailAddressValue:(id)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithProfileAlias:(id)arg1 inProfile:(id)arg2;
- (void)updateNotificationsEnabled;
@property(readonly, nonatomic) SQPBFranklinApiUiAlias *uiAlias;

@end

