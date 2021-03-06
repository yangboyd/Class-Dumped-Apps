//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface CoralModel : NSObject <NSCoding, NSCopying>
{
}

+ (id)instanceForValue:(id)arg1 inheritsFromClass:(Class)arg2;
+ (id)objectForSimpleValue:(id)arg1 withClass:(Class)arg2;
+ (id)objectForValue:(id)arg1 withClass:(Class)arg2 coralType:(id)arg3;
+ (id)dictionaryForMap:(id)arg1 withValue:(id)arg2;
+ (id)arrayForList:(id)arg1 withValue:(id)arg2;
+ (Class)classForProperty:(id)arg1 withValue:(id)arg2;
+ (Class)classForProperty:(id)arg1;
+ (id)typeAttributeForProperty:(id)arg1;
+ (id)mapTypeForProperty:(id)arg1;
+ (id)listTypeForProperty:(id)arg1;
+ (Class)classForType:(id)arg1;
+ (_Bool)isAbstract;
+ (id)type;
+ (void)registerMap:(id)arg1 withClass:(Class)arg2 forValueType:(id)arg3;
+ (void)registerList:(id)arg1 withClass:(Class)arg2 forValueType:(id)arg3;
+ (void)registerClass:(Class)arg1 forType:(id)arg2;
+ (void)initialize;
- (id)description;
- (id)propertiesForEncodingOfClass:(Class)arg1;
- (id)allPropertiesForEncoding;
- (id)propertiesOfClass:(Class)arg1;
- (id)allProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)coralJSON;
- (id)representationForValue:(id)arg1;
- (id)initWithCoralJSON:(id)arg1;

@end

