//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangLong, NSString;

@interface DYNSStorageSchemaGroupMembershipRow : NSObject
{
    JavaLangLong *rowId_;
    NSString *groupId_;
    NSString *memberId_;
    int groupType_;
    int membershipState_;
    int memberType_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (int)getMemberType;
- (int)getMembershipState;
- (int)getGroupType;
- (id)getMemberId;
- (id)getGroupId;
- (id)getRowId;

@end

