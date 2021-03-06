//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsDocsXplatCollectionsSerializedJsObject-Protocol.h"

@class NSString;
@protocol GwtJsMap;

@interface ComGoogleAppsDocsXplatCollectionsSerializedJsMap : NSObject <ComGoogleAppsDocsXplatCollectionsSerializedJsObject>
{
    id <GwtJsMap> delegate_;
}

+ (id)create;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copy__;
- (id)getTypeWithNSString:(id)arg1;
- (_Bool)isSerializedJsMapWithNSString:(id)arg1;
- (_Bool)isSerializedJsArrayWithNSString:(id)arg1;
- (_Bool)isStringWithNSString:(id)arg1;
- (_Bool)isNumberWithNSString:(id)arg1;
- (_Bool)isBooleanWithNSString:(id)arg1;
- (int)size;
- (_Bool)isEmpty;
- (void)removeWithNSString:(id)arg1;
- (void)unsafePutWithNSString:(id)arg1 withId:(id)arg2;
- (void)putUnknownWithNSString:(id)arg1 withId:(id)arg2;
- (void)putNullWithNSString:(id)arg1;
- (void)putWithNSString:(id)arg1 withComGoogleAppsDocsXplatCollectionsSerializedJsMap:(id)arg2;
- (void)putWithNSString:(id)arg1 withComGoogleAppsDocsXplatCollectionsSerializedJsArray:(id)arg2;
- (void)putWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)putWithNSString:(id)arg1 withInt:(int)arg2;
- (void)putWithNSString:(id)arg1 withDouble:(double)arg2;
- (void)putWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getIterableKeys;
- (id)keys;
- (_Bool)hasKeyWithNSString:(id)arg1;
- (_Bool)isNullWithNSString:(id)arg1;
- (id)getUnknownWithNSString:(id)arg1;
- (id)getNonNullSerializedJsObjectWithNSString:(id)arg1;
- (id)getSerializedJsObjectWithNSString:(id)arg1;
- (id)getNonNullSerializedJsMapWithNSString:(id)arg1;
- (id)getSerializedJsMapWithNSString:(id)arg1;
- (id)getNonNullSerializedJsArrayWithNSString:(id)arg1;
- (id)getSerializedJsArrayWithNSString:(id)arg1;
- (id)getNonNullStringWithNSString:(id)arg1;
- (id)getStringWithNSString:(id)arg1;
- (int)getIntWithNSString:(id)arg1;
- (double)getDoubleWithNSString:(id)arg1;
- (_Bool)getCoercedBooleanWithNSString:(id)arg1;
- (_Bool)getBooleanWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

