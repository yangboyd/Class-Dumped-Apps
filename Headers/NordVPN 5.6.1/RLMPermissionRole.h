//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Realm/RLMObject.h>

@class NSString, RLMArray;
@protocol RLMPermissionUser;

@interface RLMPermissionRole : RLMObject
{
    NSString *_name;
    RLMArray<RLMPermissionUser> *_users;
}

+ (id)_realmColumnNames;
+ (id)requiredProperties;
+ (id)primaryKey;
+ (id)_realmObjectName;
@property(retain, nonatomic) RLMArray<RLMPermissionUser> *users; // @synthesize users=_users;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

