//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SunSecurityUtilDerValue, SunSecurityUtilObjectIdentifier;

@interface SunSecurityPkcsContentInfo : NSObject
{
    SunSecurityUtilObjectIdentifier *contentType_;
    SunSecurityUtilDerValue *content_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (id)getContentBytes;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (id)getData;
- (id)getContentType;
- (id)getContent;
- (id)initWithSunSecurityUtilDerInputStream:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithSunSecurityUtilDerInputStream:(id)arg1;
- (id)initWithByteArray:(id)arg1;
- (id)initWithSunSecurityUtilObjectIdentifier:(id)arg1 withSunSecurityUtilDerValue:(id)arg2;

@end

