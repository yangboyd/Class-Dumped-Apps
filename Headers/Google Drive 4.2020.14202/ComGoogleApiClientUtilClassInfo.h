//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSClass, JavaUtilIdentityHashMap;
@protocol JavaUtilList;

@interface ComGoogleApiClientUtilClassInfo : NSObject
{
    id <JavaUtilList> names_;
    IOSClass *clazz_;
    _Bool ignoreCase_;
    JavaUtilIdentityHashMap *nameToFieldInfoMap_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)ofWithIOSClass:(id)arg1 withBoolean:(_Bool)arg2;
+ (id)ofWithIOSClass:(id)arg1;
- (void)dealloc;
- (id)getFieldInfos;
- (id)initWithIOSClass:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getNames;
- (_Bool)isEnum;
- (id)getFieldWithNSString:(id)arg1;
- (id)getFieldInfoWithNSString:(id)arg1;
- (_Bool)getIgnoreCase;
- (id)getUnderlyingClass;

@end

