//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RealmSwift/RealmSwiftObject.h>

@class NSString, RealmSwiftPermissionRole;

@interface RealmSwiftPermissionUser : RealmSwiftObject
{
    // Error parsing type: , name: identity
    // Error parsing type: , name: role
    // Error parsing type: , name: roles
}

+ (id)_realmColumnNames;
+ (id)primaryKey;
+ (id)_realmObjectName;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) RealmSwiftPermissionRole *role; // @synthesize role;
@property(nonatomic, copy) NSString *identity;

@end

