//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

#import "NSCopying-Protocol.h"

@class ComGoogleApiClientUtilClassInfo;
@protocol JavaUtilMap;

@interface ComGoogleApiClientUtilGenericData : JavaUtilAbstractMap <NSCopying>
{
    id <JavaUtilMap> unknownFields_;
    ComGoogleApiClientUtilClassInfo *classInfo_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)getClassInfo;
- (void)setUnknownKeysWithJavaUtilMap:(id)arg1;
- (id)getUnknownKeys;
- (id)java_clone;
- (id)entrySet;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)setWithNSString:(id)arg1 withId:(id)arg2;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (id)initWithJavaUtilEnumSet:(id)arg1;
- (id)init;

@end

