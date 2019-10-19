//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString, RLMProperty;

@interface RLMObjectSchema : NSObject <NSCopying>
{
    _Bool _isSwiftClass;
    NSArray *_swiftGenericProperties;
    NSArray *_properties;
    NSString *_className;
    RLMProperty *_primaryKeyProperty;
    NSDictionary *_allPropertiesByName;
    Class _objectClass;
    Class _accessorClass;
    Class _unmanagedClass;
    NSArray *_computedProperties;
}

+ (id)objectSchemaForObjectStoreSchema:(const struct ObjectSchema *)arg1;
+ (id)propertiesForClass:(Class)arg1 isSwift:(_Bool)arg2;
+ (id)baseNameForLazySwiftProperty:(id)arg1;
+ (id)schemaForObjectClass:(Class)arg1;
@property(copy, nonatomic) NSArray *computedProperties; // @synthesize computedProperties=_computedProperties;
@property(nonatomic) Class unmanagedClass; // @synthesize unmanagedClass=_unmanagedClass;
@property(nonatomic) Class accessorClass; // @synthesize accessorClass=_accessorClass;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(nonatomic) _Bool isSwiftClass; // @synthesize isSwiftClass=_isSwiftClass;
@property(retain, nonatomic) NSDictionary *allPropertiesByName; // @synthesize allPropertiesByName=_allPropertiesByName;
@property(retain, nonatomic) RLMProperty *primaryKeyProperty; // @synthesize primaryKeyProperty=_primaryKeyProperty;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *swiftGenericProperties;
- (struct ObjectSchema)objectStoreCopy;
@property(readonly, nonatomic) NSString *objectName;
- (id)description;
- (_Bool)isEqualToObjectSchema:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_propertiesDidChange;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithClassName:(id)arg1 objectClass:(Class)arg2 properties:(id)arg3;

@end

