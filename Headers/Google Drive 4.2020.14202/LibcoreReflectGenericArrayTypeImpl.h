//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangReflectGenericArrayType-Protocol.h"

@class NSString;
@protocol JavaLangReflectType;

@interface LibcoreReflectGenericArrayTypeImpl : NSObject <JavaLangReflectGenericArrayType>
{
    id <JavaLangReflectType> componentType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getTypeName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getGenericComponentType;
- (id)initWithJavaLangReflectType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

