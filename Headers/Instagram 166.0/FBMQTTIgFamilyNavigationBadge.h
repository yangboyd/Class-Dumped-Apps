//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class NSString;

@interface FBMQTTIgFamilyNavigationBadge : TBaseStruct <TBase, NSCoding>
{
    int __thrift_count;
    _Bool __thrift_shouldBadgeInFamilyNavEntryPoint;
    _Bool __thrift_count_set;
    _Bool __thrift_shouldBadgeInFamilyNavEntryPoint_set;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetShouldBadgeInFamilyNavEntryPoint;
- (_Bool)shouldBadgeInFamilyNavEntryPointIsSet;
@property(nonatomic) _Bool shouldBadgeInFamilyNavEntryPoint;
- (void)unsetCount;
- (_Bool)countIsSet;
@property(nonatomic) int count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCount:(int)arg1 shouldBadgeInFamilyNavEntryPoint:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

