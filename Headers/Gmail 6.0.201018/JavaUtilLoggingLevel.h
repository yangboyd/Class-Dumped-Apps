//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class JavaUtilLocale, NSString;

@interface JavaUtilLoggingLevel : NSObject <JavaIoSerializable>
{
    NSString *name_;
    int value_;
    NSString *resourceBundleName_;
    NSString *localizedLevelName_;
    JavaUtilLocale *cachedLocale_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)parseWithNSString:(id)arg1;
+ (id)findLevelWithNSString:(id)arg1;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)readResolve;
- (int)intValue;
@property(readonly, copy) NSString *description;
- (id)getLocalizedLevelName;
- (id)getCachedLocalizedLevelName;
- (id)computeLocalizedLevelNameWithJavaUtilLocale:(id)arg1;
- (id)getLevelName;
- (id)getLocalizedName;
- (id)getName;
- (id)getResourceBundleName;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withNSString:(id)arg3 withBoolean:(_Bool)arg4;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

