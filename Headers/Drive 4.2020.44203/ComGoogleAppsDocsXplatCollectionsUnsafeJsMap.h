//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilMap;

@interface ComGoogleAppsDocsXplatCollectionsUnsafeJsMap : NSObject
{
    id <JavaUtilMap> delegate_;
}

+ (void)initialize;
+ (id)create;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)clear;
- (_Bool)containsValueWithId:(id)arg1;
- (id)copy__;
- (id)copyValues;
- (id)getIterableKeys;
- (id)copyKeys;
- (int)countElements;
- (_Bool)isEmpty;
- (void)forEachWithGwtJsMap_ForEachCallback:(id)arg1;
- (_Bool)containsAllWithComGoogleAppsDocsXplatCollectionsJsArrayInteger:(id)arg1;
- (_Bool)containsAllWithGwtJsArray:(id)arg1;
- (_Bool)containsWithInt:(int)arg1;
- (_Bool)containsWithNSString:(id)arg1;
- (void)removeWithInt:(int)arg1;
- (void)removeWithNSString:(id)arg1;
- (id)putIfAbsentWithNSString:(id)arg1 withId:(id)arg2;
- (id)putIfAbsentWithInt:(int)arg1 withId:(id)arg2;
- (void)putAllWithComGoogleAppsDocsXplatCollectionsUnsafeJsMap:(id)arg1;
- (void)putWithInt:(int)arg1 withId:(id)arg2;
- (void)putWithNSString:(id)arg1 withId:(id)arg2;
- (id)getWithInt:(int)arg1;
- (id)getWithNSString:(id)arg1;
- (id)init;

@end

