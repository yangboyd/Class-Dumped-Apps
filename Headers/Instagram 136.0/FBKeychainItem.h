//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBKeychainItem : NSObject
{
    NSString *_serviceID;
    NSString *_userID;
    NSString *_secretValue;
    void *_accessibleAttr;
    void *_synchronizableAttr;
    NSDictionary *_genericData;
}

+ (id)genericValue:(id)arg1 forKey:(id)arg2;
+ (id)genericData:(id)arg1;
+ (id)synchronizableAttr:(void *)arg1;
+ (id)accessibleAttr:(void *)arg1;
+ (id)secretValue:(id)arg1;
+ (id)userID:(id)arg1;
@property(copy, nonatomic) NSDictionary *genericData; // @synthesize genericData=_genericData;
@property(retain, nonatomic) void *synchronizableAttr; // @synthesize synchronizableAttr=_synchronizableAttr;
@property(retain, nonatomic) void *accessibleAttr; // @synthesize accessibleAttr=_accessibleAttr;
@property(copy, nonatomic) NSString *secretValue; // @synthesize secretValue=_secretValue;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
- (void).cxx_destruct;
- (id)copyWithGenericValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithSecretValue:(id)arg1;
- (id)copyWithGenericData:(id)arg1;
- (id)copyWithSynchronizableAttr:(void *)arg1;
- (id)copyWithAccessibleAttr:(void *)arg1;
- (id)copyWithUserID:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithServiceID:(id)arg1;
- (id)initWithServiceID:(id)arg1 userID:(id)arg2;
- (id)initWithServiceID:(id)arg1 userID:(id)arg2 secretValue:(id)arg3 accessibleAttr:(void *)arg4 genericData:(id)arg5;
- (id)initWithServiceID:(id)arg1 userID:(id)arg2 secretValue:(id)arg3 accessibleAttr:(void *)arg4 synchronizableAttr:(void *)arg5 genericData:(id)arg6;
- (id)genericValueForKey:(id)arg1;

@end

