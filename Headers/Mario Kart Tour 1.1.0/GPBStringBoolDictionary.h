//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBStringBoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeBoolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getBool:(_Bool *)arg1 forKey:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBools:(const _Bool *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

