//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SunUtilLocaleBaseLocale, SunUtilLocaleLocaleExtensions;

@interface JavaUtilLocale_LocaleKey : NSObject
{
    SunUtilLocaleBaseLocale *base_;
    SunUtilLocaleLocaleExtensions *exts_;
    int hash__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSunUtilLocaleBaseLocale:(id)arg1 withSunUtilLocaleLocaleExtensions:(id)arg2;

@end

