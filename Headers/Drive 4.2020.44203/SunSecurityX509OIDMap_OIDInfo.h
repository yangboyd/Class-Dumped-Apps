//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SunSecurityUtilObjectIdentifier;

@interface SunSecurityX509OIDMap_OIDInfo : NSObject
{
    SunSecurityUtilObjectIdentifier *oid_;
    NSString *name_;
    unsigned long long clazz_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)getClazz;
- (id)initWithNSString:(id)arg1 withSunSecurityUtilObjectIdentifier:(id)arg2 withIOSClass:(id)arg3;

@end

