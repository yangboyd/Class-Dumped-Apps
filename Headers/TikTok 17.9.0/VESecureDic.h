//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VERecursiveMutex;

@interface VESecureDic : NSObject
{
    NSMutableDictionary *_dict;
    VERecursiveMutex *_recursiveMutex;
}

@property(retain, nonatomic) VERecursiveMutex *recursiveMutex; // @synthesize recursiveMutex=_recursiveMutex;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)init;

@end

