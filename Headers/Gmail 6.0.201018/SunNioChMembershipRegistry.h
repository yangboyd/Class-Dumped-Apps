//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilMap;

@interface SunNioChMembershipRegistry : NSObject
{
    id <JavaUtilMap> groups_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)invalidateAll;
- (void)removeWithSunNioChMembershipKeyImpl:(id)arg1;
- (void)addWithSunNioChMembershipKeyImpl:(id)arg1;
- (id)checkMembershipWithJavaNetInetAddress:(id)arg1 withJavaNetNetworkInterface:(id)arg2 withJavaNetInetAddress:(id)arg3;
- (id)initPackagePrivate;

@end

