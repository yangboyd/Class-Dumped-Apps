//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FSnapshotUtilities : NSObject
{
}

+ (unsigned long long)estimateSerializedNodeSize:(id)arg1;
+ (unsigned long long)estimateLeafNodeSize:(id)arg1;
+ (void)appendHashV2RepresentationForString:(id)arg1 toString:(id)arg2;
+ (void)appendHashRepresentationForLeafNode:(id)arg1 toString:(id)arg2 hashVersion:(long long)arg3;
+ (void)validatePriorityNode:(id)arg1;
+ (id)compoundWriteFromDictionary:(id)arg1 withValidationFrom:(id)arg2;
+ (id)internalNodeFrom:(id)arg1 priority:(id)arg2 withValidationFrom:(id)arg3 atDepth:(int)arg4 path:(id)arg5;
+ (id)nodeFrom:(id)arg1 priority:(id)arg2 withValidationFrom:(id)arg3 atDepth:(int)arg4 path:(id)arg5;
+ (id)nodeFrom:(id)arg1 priority:(id)arg2 withValidationFrom:(id)arg3;
+ (id)nodeFrom:(id)arg1 withValidationFrom:(id)arg2;
+ (id)nodeFrom:(id)arg1 priority:(id)arg2;
+ (id)nodeFrom:(id)arg1;

@end

