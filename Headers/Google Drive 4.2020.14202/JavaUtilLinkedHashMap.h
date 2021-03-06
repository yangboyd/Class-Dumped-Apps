//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilHashMap.h"

#import "JavaUtilMap-Protocol.h"

@class JavaUtilLinkedHashMap_LinkedHashMapEntry, NSString;

@interface JavaUtilLinkedHashMap : JavaUtilHashMap <JavaUtilMap>
{
    JavaUtilLinkedHashMap_LinkedHashMapEntry *head_;
    JavaUtilLinkedHashMap_LinkedHashMapEntry *tail_;
    _Bool accessOrder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned long long)enumerateEntriesWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id)arg1;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)entrySet;
- (id)values;
- (id)keySet;
- (_Bool)removeEldestEntryWithJavaUtilMap_Entry:(id)arg1;
- (id)eldest;
- (void)clear;
- (id)getOrDefaultWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (_Bool)containsValueWithId:(id)arg1;
- (id)initWithInt:(int)arg1 withFloat:(float)arg2 withBoolean:(_Bool)arg3;
- (id)initWithJavaUtilMap:(id)arg1;
- (id)init;
- (id)initWithInt:(int)arg1;
- (id)initWithInt:(int)arg1 withFloat:(float)arg2;
- (void)internalWriteEntriesWithJavaIoObjectOutputStream:(id)arg1;
- (void)afterNodeAccessWithJavaUtilHashMap_Node:(id)arg1;
- (void)afterNodeInsertionWithBoolean:(_Bool)arg1;
- (void)afterNodeRemovalWithJavaUtilHashMap_Node:(id)arg1;
- (id)replacementTreeNodeWithJavaUtilHashMap_Node:(id)arg1 withJavaUtilHashMap_Node:(id)arg2;
- (id)newTreeNodeWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 withJavaUtilHashMap_Node:(id)arg4;
- (id)replacementNodeWithJavaUtilHashMap_Node:(id)arg1 withJavaUtilHashMap_Node:(id)arg2;
- (id)newNodeWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 withJavaUtilHashMap_Node:(id)arg4;
- (void)reinitialize;
- (void)transferLinksWithJavaUtilLinkedHashMap_LinkedHashMapEntry:(id)arg1 withJavaUtilLinkedHashMap_LinkedHashMapEntry:(id)arg2;
- (void)linkNodeLastWithJavaUtilLinkedHashMap_LinkedHashMapEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

